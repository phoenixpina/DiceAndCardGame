#pragma once
#ifndef CARDS_H
#define CARDS_H
#include <string>

class Cards {
public:
    Cards();
    std::string draw(); // For card names (ex. "9 of Hearts")
    int getCardValue(const std::string& card); // For card point values
};

#endif
