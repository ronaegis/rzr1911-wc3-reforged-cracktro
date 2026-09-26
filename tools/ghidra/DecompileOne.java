// Decompile a single function with a long timeout.
// Args: <address> <out_file> <timeout_seconds>
//@category Cracktro
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;

public class DecompileOne extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Address addr = toAddr(args[0]);
        var func = getFunctionAt(addr);
        if (func == null) func = getFunctionContaining(addr);
        if (func == null) {
            printerr("no function at " + args[0]);
            return;
        }
        int timeout = Integer.parseInt(args[2]);
        DecompInterface ifc = new DecompInterface();
        ifc.setOptions(new DecompileOptions());
        ifc.openProgram(currentProgram);
        println("decompiling " + func.getName() + " timeout " + timeout);
        DecompileResults res = ifc.decompileFunction(func, timeout, monitor);
        String body = res.decompileCompleted()
            ? res.getDecompiledFunction().getC()
            : "/* failed: " + res.getErrorMessage() + " */\n";
        Files.writeString(Path.of(args[1]), body, StandardCharsets.UTF_8);
        println("wrote " + args[1] + " completed=" + res.decompileCompleted() + " chars=" + body.length());
        ifc.dispose();
    }
}
