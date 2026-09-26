# C++ Console Tic-Tac-Toe Game

A lightweight, object-oriented 2-player terminal Tic-Tac-Toe game written in C++. Features dynamic console updates, move validation, win/draw state detection, and a modular project architecture using header and implementation separation.

---

## Key Features

* **Object-Oriented Architecture:** Clear separation of interface (`TicTacToe.h`), class implementation (`TicTacToe.cpp`), and driver code (`main.cpp`).
* **Real-time Terminal Screen Refresh:** Uses ANSI escape sequences to clear previous console outputs for a seamless, clean gameplay view.
* **Input Validation & Error Handling:** Prevents illegal moves, occupied cell overwrites, and out-of-bounds input.
* **Automatic Game State Evaluation:** Checks rows, columns, and diagonals for win conditions or draws after every valid move.

---

## File Structure

├── TicTacToe.h     # Class declaration & interface header
├── TicTacToe.cpp   # Class member functions implementation
└── main.cpp        # Driver program running the game loop
