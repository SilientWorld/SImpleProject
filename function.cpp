#include <iostream>
#include <ctime>
#include <cstdlib>
#include "globals.h"
#include "function.h"

void randomNum(int input)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomNumber = std::rand() % 100 + 1;

    while (chance > 0) {
        if (input < randomNumber) {
            std::cout << "Incorrect! The number is greater than " << input << std::endl;
            chance--;
            std::cout << "\n";
        }
        else if (input > randomNumber) {
            std::cout << "Incorrect! The number is less than " << input << std::endl;
            chance--;
            std::cout << "\n";
        }
        else {
            std::cout << "Congratulations! You guessed the correct number!" << std::endl;
            std::cout << "\n";
            return;
        }

        if (chance > 0) {
            std::cout << "You have " << chance << " attempts left. Try again: ";
            std::cin >> input;
            std::cout << "\n";
        }
        else {
            std::cout << "Sorry! You've run out of attempts. The correct number was " << randomNumber << "." << std::endl;
        }
    }
}
