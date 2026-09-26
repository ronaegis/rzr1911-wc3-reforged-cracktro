use naga::valid::{Capabilities, ValidationFlags, Validator};
use std::env;
use std::fs;
use std::process::ExitCode;

fn main() -> ExitCode {
    let mut args = env::args().skip(1);
    let input = match args.next() {
        Some(path) => path,
        None => {
            eprintln!("usage: spv2wgsl <input.spv> [output.wgsl]");
            return ExitCode::from(2);
        }
    };
    let output = args.next();
    let bytes = match fs::read(&input) {
        Ok(bytes) => bytes,
        Err(err) => {
            eprintln!("{input}: {err}");
            return ExitCode::from(1);
        }
    };
    let module = match naga::front::spv::parse_u8_slice(&bytes, &naga::front::spv::Options {
        adjust_coordinate_space: false,
        ..Default::default()
    }) {
        Ok(module) => module,
        Err(err) => {
            eprintln!("{input}: spir-v parse: {err:?}");
            return ExitCode::from(1);
        }
    };
    let mut validator = Validator::new(ValidationFlags::all(), Capabilities::all());
    let info = match validator.validate(&module) {
        Ok(info) => info,
        Err(err) => {
            eprintln!("{input}: validate: {err:?}");
            return ExitCode::from(1);
        }
    };
    let wgsl = match naga::back::wgsl::write_string(
        &module,
        &info,
        naga::back::wgsl::WriterFlags::EXPLICIT_TYPES,
    ) {
        Ok(wgsl) => wgsl,
        Err(err) => {
            eprintln!("{input}: wgsl: {err:?}");
            return ExitCode::from(1);
        }
    };
    if let Some(path) = output {
        if let Err(err) = fs::write(&path, &wgsl) {
            eprintln!("{path}: {err}");
            return ExitCode::from(1);
        }
    } else {
        print!("{wgsl}");
    }
    ExitCode::SUCCESS
}
