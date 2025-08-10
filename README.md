# Arduino Temperature Monitor with Git Practice

## Project Overview
This project is a simple Arduino sketch that simulates monitoring temperature using a sensor like DHT11 or LM35. It prints temperature readings and status messages to the Serial Monitor. A buzzer alert is simulated to indicate high temperature.

## Features
- Simulated temperature readings with random variation
- Status messages indicating "Too Hot", "Warning", or "Normal"
- Simulated buzzer control to alert high temperature conditions

## Git Workflow Practice
This repository also serves as a practical exercise for Git version control, covering:
- Repository initialization
- Multiple branches: `feature-message` (improved messages), `feature-buzzer` (buzzer alert)
- Committing feature changes in separate branches
- Merging branches and resolving merge conflicts manually
- Pushing branches and commits to GitHub

## How to Use
1. Open `temp_monitor/temp_monitor.ino` in Arduino IDE.
2. Upload to an Arduino board (if available).
3. Open Serial Monitor at 9600 baud to view simulated temperature readings.
4. (No actual hardware required as temperature is simulated in code.)

## Branches
- `main` - Stable base branch.
- `feature-message` - Enhanced temperature warning messages.
- `feature-buzzer` - Simulated buzzer alert feature.

---

*This project was completed as part of a collaboration and version control exercise.*
