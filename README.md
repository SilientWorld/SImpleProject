
---

# 数字猜谜游戏

这是一个简单的C++控制台游戏，玩家需要在有限的尝试次数内猜测一个随机生成的1到100之间的数字。玩家可以在游戏开始时选择难度级别，每次猜测后，游戏会提供反馈，告诉玩家猜的数字是高于还是低于目标数字。

## 特性

- **难度级别**：可以选择简单（10次尝试）、中等（5次尝试）或困难（3次尝试）。
- **随机数生成**：每场游戏开始时，都会生成一个1到100之间的随机数。
- **猜测反馈**：每次猜测后，游戏会告诉玩家目标数字是大于还是小于所猜的数字。
- **胜利与失败消息**：玩家如果猜对了数字会收到祝贺信息，如果用尽了尝试次数，则会显示失败信息。

## 文件结构

- `Welcome.h` 和 `Welcome.cpp`：显示欢迎消息并介绍游戏规则。
- `selectChoice.h` 和 `selectChoice.cpp`：处理玩家选择难度级别并设置允许的尝试次数。
- `function.h` 和 `function.cpp`：实现主要的游戏逻辑，包括随机数生成和根据玩家猜测提供反馈。
- `globals.h` 和 `globals.cpp`：定义并初始化全局变量 `chance`，用于存储剩余的尝试次数。
- `main.cpp`：游戏的主要入口，管理欢迎界面、选择难度以及调用游戏逻辑。

## 如何构建和运行

1. **克隆项目**： 
    ```bash
    git clone  https://github.com/SilientWorld/SimpleProject.git
    ```

2. **编译程序**：确保所有的 `.cpp` 文件都被一起编译。例如，在Unix-like环境下，运行：
    ```bash
    g++ main.cpp Welcome.cpp selectChoice.cpp function.cpp globals.cpp -o NumberGuessingGame
    ```

3. **运行程序**：
    ```bash
    ./NumberGuessingGame
    ```

## 代码概述

### `Welcome.h` 和 `Welcome.cpp`

```cpp
void Welcome();
```
显示欢迎信息并介绍游戏规则。

### `selectChoice.h` 和 `selectChoice.cpp`

```cpp
void selectChoice(int level);
```
提示玩家选择难度级别，并设置相应的尝试次数。

### `function.h` 和 `function.cpp`

```cpp
void randomNum(int input);
```
包含主要的游戏逻辑，比较玩家输入与目标数字，并提供反馈，更新剩余的尝试次数。

### `globals.h` 和 `globals.cpp`

定义了全局变量 `chance`，用于跟踪剩余的尝试次数。

### `main.cpp`

整合所有功能并管理游戏流程的主程序文件。

---

## 示例游戏流程

1. 游戏显示欢迎信息并提示玩家选择难度级别。
2. 玩家选择难度后，输入一个猜测。
3. 游戏提供反馈，告诉玩家目标数字是大于还是小于猜测的数字。
4. 玩家继续猜测，直到猜对数字或用尽尝试次数。

## 许可证

这个项目是开源的。欢迎修改和使用代码，按需进行修改。


## 项目页面

您可以在以下链接找到完整的项目并进行贡献：  
[数字猜谜游戏 - GitHub](https://github.com/SilientWorld/SimpleProject)

---


# Number Guessing Game

A simple C++ console game where the player tries to guess a randomly generated number between 1 and 100 within a limited number of attempts based on difficulty level. The player selects a difficulty level at the beginning, and the game provides feedback for each incorrect guess, indicating whether the target number is higher or lower than the guessed number.

## Features

- **Difficulty Levels**: Choose from Easy (10 attempts), Medium (5 attempts), or Hard (3 attempts).
- **Random Number Generation**: A random number between 1 and 100 is generated at the start of each game session.
- **Feedback on Guesses**: After each guess, the game tells the player if the target number is higher or lower.
- **Victory and Failure Messages**: Players receive a congratulatory message upon guessing correctly or a failure message if they run out of attempts.

## File Structure

- `Welcome.h` and `Welcome.cpp`: Displays a welcome message and introduces the game rules.
- `selectChoice.h` and `selectChoice.cpp`: Handles player selection of difficulty level and sets the number of allowed attempts.
- `function.h` and `function.cpp`: Implements the main game logic, including random number generation and feedback based on player guesses.
- `globals.h` and `globals.cpp`: Defines and initializes a global variable `chance` to store the number of remaining attempts.
- `main.cpp`: Main entry point of the game, managing the flow between welcoming the player, selecting difficulty, and running the main game function.

## How to Build and Run

1. **Clone the Repository**: 
    ```bash
    git clone  https://github.com/SilientWorld/SimpleProject.git
    ```

2. **Compile the Program**: Ensure all `.cpp` files are compiled together. For example, in a Unix-like environment, run:
    ```bash
    g++ main.cpp Welcome.cpp selectChoice.cpp function.cpp globals.cpp -o NumberGuessingGame
    ```

3. **Run the Program**:
    ```bash
    ./NumberGuessingGame
    ```

## Code Summary

### `Welcome.h` and `Welcome.cpp`

```cpp
void Welcome();
```
Displays a welcome message and instructions.

### `selectChoice.h` and `selectChoice.cpp`

```cpp
void selectChoice(int level);
```
Prompts the player to select a difficulty level and sets the corresponding number of attempts.

### `function.h` and `function.cpp`

```cpp
void randomNum(int input);
```
Contains the main game logic, comparing player input with the target number, providing feedback, and updating the number of remaining attempts.

### `globals.h` and `globals.cpp`

Defines the global variable `chance` used to track the number of remaining attempts.

### `main.cpp`

The main program file that integrates all functions and manages game flow.

---

## Example Gameplay

1. The game displays a welcome message and prompts the player to select a difficulty level.
2. After selecting the level, the player inputs a guess.
3. The game provides feedback, telling the player whether the target number is higher or lower than the guess.
4. The player continues guessing until they either find the correct number or run out of attempts.

## License

This project is open source. Feel free to modify and use the code as needed.

## Project Page

You can find the full project and contribute at the following link:  
[Number Guessing Game on GitHub](https://github.com/SilientWorld/SimpleProject.git)

