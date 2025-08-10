# Arduino Temperature Monitor with Git Practice

## Project Overview
This project simulates a temperature monitoring system with two components:

- **Arduino sketch:** Simulates temperature sensor readings and buzzer alerts using Arduino code.
- **Web simulation:** Displays temperature fluctuations and status updates in the browser, enhanced with a subtle neon cursor effect.

## Features
- Simulated temperature readings with random variation
- Status messages indicating "Too Hot", "Warning", or "Normal"
- Simulated buzzer alert for high temperature conditions
- Interactive web visualization of temperature data with glowing cursor effect

## Git Workflow Practice
This repository is also a practical exercise in Git version control, covering:
- Repository initialization
- Branching workflows with feature branches: `feature-message`, `feature-buzzer`, and `feature-web`
- Committing and merging branches
- Resolving merge conflicts
- Pushing commits to GitHub

## How to Use

### Arduino Code
1. Open `temp_monitor/temp_monitor.ino` in the Arduino IDE.  
2. Upload the sketch to an Arduino board (optional, since simulation runs in code).  
3. Open the Serial Monitor at 9600 baud to see temperature readings and status messages.

### Web Simulation
1. Open the `web` folder.  
2. Launch `index.html` in a modern web browser (Chrome, Firefox, Edge).  
3. The temperature updates every 2 seconds with status messages displayed.  
4. Enjoy the neon glowing cursor effect as a subtle background animation.

## Branches
- `main` — Stable base branch  
- `feature-message` — Enhanced temperature warning messages  
- `feature-buzzer` — Simulated buzzer alert feature  
- `feature-web` — Web simulation with neon cursor effect

---

