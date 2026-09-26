// Export every decompiled function from the unpacked cracktro.
// Script arg: <out_dir>
//@category Cracktro
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class ExportCracktro extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            printerr("usage: ExportCracktro.java <out_dir>");
            return;
        }
        File outDir = new File(args[0]);
        outDir.mkdirs();
        File funcDir = new File(outDir, "functions");
        funcDir.mkdirs();

        DecompInterface ifc = new DecompInterface();
        ifc.setOptions(new DecompileOptions());
        ifc.openProgram(currentProgram);

        StringBuilder index = new StringBuilder();
        index.append("# Functions\n\n");
        index.append("| Address | Name | Bytes | Decompiled |\n");
        index.append("|---|---|---:|---|\n");

        PrintWriter assembly = new PrintWriter(new OutputStreamWriter(
            new FileOutputStream(new File(outDir, "disassembly.asm")), StandardCharsets.UTF_8));
        PrintWriter all = new PrintWriter(new OutputStreamWriter(
            new FileOutputStream(new File(outDir, "all.c")), StandardCharsets.UTF_8));
        all.println("/* Ghidra decompilation of RZR_D_Cracktro_03-Warcraft3_Reforged.exe (UPX unpacked). */");
        all.println("/* Image base 0x140000000. Pseudocode, not a buildable translation. */");
        all.println();

        int total = 0, failed = 0;
        FunctionManager fm = currentProgram.getFunctionManager();
        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            long ep = f.getEntryPoint().getOffset();
            String name = f.getName();
            int bytes = (int) f.getBody().getNumAddresses();
            DecompileResults res = ifc.decompileFunction(f, 90, monitor);
            boolean ok = res.decompileCompleted();
            String safe = name.replaceAll("[^A-Za-z0-9_@.]", "_");
            String fname = String.format("%08x_%s.c", ep, safe);
            String body;
            if (ok) {
                body = res.getDecompiledFunction().getC();
            } else {
                body = "/* decompilation failed: " + res.getErrorMessage() + " */\n";
                failed++;
            }
            Files.writeString(funcDir.toPath().resolve(fname), body, StandardCharsets.UTF_8);
            all.println("/* " + name + " @ " + f.getEntryPoint() + " (" + bytes + " bytes) */");
            all.println(body);
            all.println();
            index.append(String.format("| `0x%x` | `%s` | %d | %s |\n", ep, name, bytes, ok ? "yes" : "no"));

            assembly.println("; " + name + " @ " + f.getEntryPoint());
            for (Instruction instruction : currentProgram.getListing().getInstructions(f.getBody(), true)) {
                StringBuilder raw = new StringBuilder();
                for (byte b : instruction.getBytes()) raw.append(String.format("%02x ", b & 0xff));
                assembly.printf("%s  %-48s %s%n", instruction.getAddress(), raw, instruction);
            }
            assembly.println();
            total++;
        }
        all.close();
        assembly.close();
        ifc.dispose();
        Files.writeString(outDir.toPath().resolve("FUNCTIONS.md"), index.toString(), StandardCharsets.UTF_8);
        println("exported " + total + " functions (" + failed + " failed) to " + outDir);
    }
}
