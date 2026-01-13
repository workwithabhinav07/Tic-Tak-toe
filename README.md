
# Tic-Tac-Toe (C Implementation)

A robust command-line Tic-Tac-Toe game built entirely in C. This project features a custom  opponent implemented using 2D arrays and extensive conditional logic to determine the best move.

## Features
- **Two Game Modes:**
  - Player vs Player (Pass and Play)
  - Player vs Computer ( Logic)
- **Smart Play:** The computer opponent uses brute-force logic to detect winning moves, block the player's winning moves, and prioritize strategic positions (Center > Corners > Sides).
- **Robust Input Validation:** Prevents overwriting occupied cells and handles invalid inputs.
- **Game Loop:** Includes a stable `goto` based loop system to allow continuous play without restarting the program.

## How to Run
1. **Compile the code:**
   ```bash
   gcc main.c -o tictactoe
