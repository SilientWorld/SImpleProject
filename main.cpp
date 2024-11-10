#include <iostream>
#include "Welcome.h"
#include "selectChoice.h"
#include "function.h"
#include "globals.h"

int main()
{
    Welcome();

    std::cout << "\n";
    std::cout << "Please select the difficulty level:" << std::endl;
    std::cout << "1. Easy (10 chances)" << std::endl;
    std::cout << "2. Medium (5 chances)" << std::endl;
    std::cout << "3. Hard (3 chances)" << std::endl;
    std::cout << "\n";

    std::cout << "Enter your choice:";

    int level, input;
    std::cin >> level;
    std::cout << "\n";

    selectChoice(level);
    std::cout << "\n";

    std::cout << "Enter your guess: ";
    std::cin >> input;
    std::cout << "\n";

    randomNum(input);

    return 0;
}
