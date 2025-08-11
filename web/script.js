import { neonCursor } from 'https://unpkg.com/threejs-toys@0.0.8/build/threejs-toys.module.cdn.min.js'

document.addEventListener('DOMContentLoaded', () => {
  neonCursor({
    el: document.getElementById('app'),
    shaderPoints: 60,
    curvePoints: 30,
    curveLerp: 0.9,
    radius1: 3,
    radius2: 1,
    velocityTreshold: 100000,
   sleepRadiusX: 250,
    sleepRadiusY: 100,
    sleepTimeCoefX: 0.005,
    sleepTimeCoefY: 0.005
  })

  let t = 0;
  function getRandomTemp() {
    t += 0.3;
    const temp = 28.5 + 6.5 * Math.sin(t);
    return temp.toFixed(1);
  }

  function updateTemp() {
    const temp = parseFloat(getRandomTemp());
    document.getElementById('temp').textContent = temp;

    let status = 'Temperature is normal.';
    if (temp > 30) {
      status = 'Status: Too Hot!';
    } else if (temp > 28) {
      status = 'Warning: Temperature rising!';
    }

    document.getElementById('status').textContent = status;
  }

  setInterval(updateTemp, 2000);
  updateTemp();
});
