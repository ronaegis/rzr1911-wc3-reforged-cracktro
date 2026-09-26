use wasm_bindgen::prelude::*;
use xmrs::prelude::Module;
use xmrsplayer::xmrsplayer::XmrsPlayer;

const MUSIC: &[u8] = include_bytes!("../../../decompile/assets/music.xm");
const SAMPLE_RATE: u32 = 44100;

#[wasm_bindgen]
pub struct Engine {
    player: XmrsPlayer<'static>,
    samples: u64,
}

#[wasm_bindgen]
impl Engine {
    #[wasm_bindgen(constructor)]
    pub fn new() -> Result<Engine, JsError> {
        let module = Module::load(MUSIC)
            .map_err(|err| JsError::new(&format!("xm: {err}")))?;
        let module: &'static _ = Box::leak(Box::new(module));
        let mut player = XmrsPlayer::new(module, SAMPLE_RATE, 0);
        player.set_max_loop_count(8);
        Ok(Engine { player, samples: 0 })
    }

    pub fn sample_rate(&self) -> u32 {
        SAMPLE_RATE
    }

    pub fn position_seconds(&self) -> f64 {
        self.samples as f64 / SAMPLE_RATE as f64
    }

    /// Interleaved stereo f32 in -1..1.
    pub fn render(&mut self, frames: usize) -> Vec<f32> {
        let mut out = Vec::with_capacity(frames * 2);
        for _ in 0..frames {
            let (left, right) = self.player.sample(true).unwrap_or((0, 0));
            out.push(left as f32 / 32768.0);
            out.push(right as f32 / 32768.0);
            self.samples += 1;
        }
        out
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn module_renders_audio() {
        let module = Module::load(MUSIC).expect("xm");
        let mut player = XmrsPlayer::new(&module, SAMPLE_RATE, 0);
        let mut energy = 0i64;
        for _ in 0..44100 {
            let (left, right) = player.sample(true).unwrap_or((0, 0));
            energy += (left as i64).abs() + (right as i64).abs();
        }
        assert!(energy > 0, "first second of the module was silent");
    }
}
