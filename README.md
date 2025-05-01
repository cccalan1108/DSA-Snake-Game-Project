# 🐍 Snake Game – Custom AI Controller (C++ SFML)

This is a partial implementation of the classic Snake game developed using C++ and SFML.  
The primary goal of this project was to design and implement a custom automated controller that enables the snake to navigate intelligently in real time.

這是一個以 C++ 搭配 SFML 開發的經典貪食蛇（Snake）遊戲的部分實作版本。
本專案的主要目標是設計並實作一個自動化的控制模組（Custom Controller），讓蛇能夠在遊戲過程中根據環境做出即時、智慧的移動判斷。

---

## 🎮 Game Overview

This project builds upon a base Snake game and focuses on extending its functionality by creating an **autonomous movement controller**. The AI controller determines the snake's direction based on the relative position of the food, the walls, and potential threats.

---

## 🔧 Features

- Classic Snake gameplay core (movement, food, collision detection)
- Modular controller interface (`Controller.h`) allowing custom AI logic
- Implemented **CustomController**:
  - Calculates angle and distance between snake and food
  - Uses weighted heuristics to avoid walls and maximize safety
  - Achieves a consistent score improvement from ~400 to 1100+

---

## 📂 File Structure

```
├── main.cpp                  # Entry point of the game
├── Snake.cpp / Snake.h       # Snake movement and body tracking logic
├── Game.cpp / Game.h         # Game state management
├── Position.cpp              # Coordinate utilities
├── GUI.cpp                   # Basic graphical display using SFML
├── Controller.h              # Abstract base class for controllers
├── StraightForwardController.cpp  # Baseline dumb controller
├── CustomController.cpp      
```

---

## 🚀 Getting Started

### Dependencies
- C++17
- SFML (Simple and Fast Multimedia Library)

### Compilation (example on Linux/macOS):
```bash
g++ -std=c++17 main.cpp Snake.cpp Game.cpp GUI.cpp Position.cpp StraightForwardController.cpp CustomController.cpp -lsfml-graphics -lsfml-window -lsfml-system -o snake_game
./snake_game
```

---

## 🧠 AI Strategy Summary

The AI logic in `CustomController` works by:
- Computing vector direction from the snake's head to the food
- Checking each possible move for wall collisions or self-intersection
- Assigning scores to each move based on distance, angle, and threat
- Selecting the move with the highest utility value

---

## 📈 Results

The custom controller significantly outperforms the baseline:
- StraightForwardController average score: **~400**
- CustomController average score: **1100+**

---

## 🙋 Authors

- 張鈞傑 (NTU IM & PH)
- Course: DSAP

---

## 🔮 Future Improvements

- Use A* or BFS pathfinding for smarter navigation
- Add dynamic obstacle prediction
- Implement difficulty levels or speed scaling
