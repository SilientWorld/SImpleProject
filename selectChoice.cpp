#include <iostream>
#include "selectChoice.h"
#include "globals.h"

void selectChoice(int level)
{
    switch (level) {
    case 1:
        chance = 10;
        std::cout << "Great! You have selected the Easy difficulty level." << std::endl;
        break;
    case 2:
        chance = 5;
        std::cout << "Great! You have selected the Medium difficulty level." << std::endl;
        break;
    case 3:
        chance = 3;
        std::cout << "Great! You have selected the Hard difficulty level." << std::endl;
        break;
    default:
        std::cout << "Invalid choice. Defaulting to Easy level with 10 chances." << std::endl;
        chance = 10;
    }
    std::cout << "You have " << chance << " chances to guess the correct number." << std::endl;
    std::cout << "Let's start the game!" << std::endl;
}
