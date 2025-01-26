#include "dice.h"
#include <cstdlib> // For std::rand
#include <ctime>   // For std::time

Dice::Dice() {
    std::srand(static_cast<unsigned>(std::time(nullptr))); //this ensures the program doesn't generate the same random numbers every time it is run
}

// d20 logic
int Dice::roll() {
    return std::rand() % 20 + 1;
}
