// Development-only GPU timestamps at 30 seconds, default rendering resolution.
// Serve web/ first; requires an adapter supporting timestamp-query.
import { chromium } from 'playwright';
const browser = await chromium.launch({ channel: 'msedge', headless: true, args: ['--enable-unsafe-webgpu'] });
try {
 const page = await browser.newPage();
 page.on('pageerror', e => console.log(e.message));
 await page.addInitScript(() => {
  window.testTime = 0; performance.now = () => window.testTime;
  window.timings = []; window.capture = false;
  const request = GPUAdapter.prototype.requestDevice;
  GPUAdapter.prototype.requestDevice = function(desc = {}) {
   window.adapterInfo = { vendor: this.info.vendor, architecture: this.info.architecture, device: this.info.device, description: this.info.description };
   return request.call(this, {...desc, requiredFeatures: ['timestamp-query']});
  };
  const create = GPUDevice.prototype.createCommandEncoder;
  const pending = new WeakMap();
  GPUDevice.prototype.createCommandEncoder = function(...args) {
   const encoder = create.apply(this, args);
   if (!window.capture || window.timings.length >= 20) return encoder;
   const query = this.createQuerySet({type:'timestamp', count:32});
   const result = this.createBuffer({size:256, usage:GPUBufferUsage.QUERY_RESOLVE | GPUBufferUsage.COPY_SRC});
   const read = this.createBuffer({size:256, usage:GPUBufferUsage.COPY_DST | GPUBufferUsage.MAP_READ});
   const names = [];
   for (const method of ['beginComputePass', 'beginRenderPass']) {
    const original = encoder[method].bind(encoder);
    encoder[method] = (desc = {}) => {
     const index = names.length * 2;
     names.push(desc.label || 'compute');
     return original({...desc, timestampWrites:{querySet:query,beginningOfPassWriteIndex:index,endOfPassWriteIndex:index+1}});
    };
   }
   const finish = encoder.finish.bind(encoder);
   encoder.finish = (...args) => {
    encoder.resolveQuerySet(query,0,names.length*2,result,0);
    encoder.copyBufferToBuffer(result,0,read,0,256);
    const command = finish(...args);
    pending.set(command,{query,result,read,names});
    return command;
   };
   return encoder;
  };
  const submit = GPUQueue.prototype.submit;
  GPUQueue.prototype.submit = function(commands) {
   submit.call(this,commands);
   for(const command of commands) {
    const p = pending.get(command); if (!p) continue;
    p.read.mapAsync(GPUMapMode.READ).then(() => {
     const times = new BigUint64Array(p.read.getMappedRange());
     window.timings.push(Object.fromEntries(p.names.map((n,i)=>[n,Number(times[i*2+1]-times[i*2])/1e6])));
     p.read.unmap(); p.read.destroy();p.result.destroy();p.query.destroy();
    });
   }
  };
 });
 await page.goto(process.argv[2] || 'http://127.0.0.1:8080');
 await page.locator('#start').click();
 await page.waitForFunction(()=>document.querySelector('#sound').textContent==='Mute');
 await page.mouse.move(10, 10);
 await page.locator('#sound').click();
 await page.locator('#replay').click();
 await page.evaluate(()=>{window.testTime=30000;});
 await page.waitForFunction(()=>document.querySelector('#status').textContent.includes('30.00 /'));
 await page.evaluate(()=>{window.capture=true;});
 await page.waitForFunction(()=>window.timings.length>=20);
 console.log(JSON.stringify(await page.evaluate(()=>({adapter:window.adapterInfo,means:Object.fromEntries(Object.keys(window.timings[0]).map(k=>[k,window.timings.reduce((s,t)=>s+t[k],0)/window.timings.length]))})),null,2));
} finally { await browser.close(); }
