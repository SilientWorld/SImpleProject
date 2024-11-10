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
    git clone <repository-url>
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
