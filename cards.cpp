#include "cards.h"
#include <cstdlib> // For std::rand
#include <ctime>   // For std::time
#include <array>   // For std::array
#include <string>  

Cards::Cards() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

// Draws a card and returns its name
std::string Cards::draw() {
    const std::array<std::string, 4> suits = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const std::array<std::string, 13> ranks = {
        "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"
    };

    // Randomly selects rank and suit
    int rankIndex = std::rand() % 13;
    int suitIndex = std::rand() % 4;
    return ranks[rankIndex] + " of " + suits[suitIndex];
}

// Gets point value based on card rank
int Cards::getCardValue(const std::string& card) {
    // For face cards and Aces
    if (card.find("Ace") != std::string::npos) return 11; //npos means "no position", and is guaranteed to be out of range. Used to ensure search function stays in index range.
    if (card.find("Jack") != std::string::npos || card.find("Queen") != std::string::npos || card.find("King") != std::string::npos) return 10;

    // For numbered cards
    for (int i = 2; i <= 10; ++i) {
        if (card.find(std::to_string(i)) != std::string::npos) return i;
    }

    return 0;
}
