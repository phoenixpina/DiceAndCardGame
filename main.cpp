#include <iostream>
#include <thread>  // For std::this_thread::sleep_for()
#include <conio.h> // For _getch() 
#include "dice.h"
#include "cards.h"

void playGame();

int main() {
    std::cout << "This is a simple game of chance.\n";
    std::cout << "You shall roll a d20 and draw a card from a standard deck of playing cards.\n";
    std::cout << "The computer shall do the same. Whoever gets the most points wins. \n";
    playGame();
    return 0;
}

void playGame() {
    Dice playerDice;
    Dice computerDice;
    Cards playerCards;
    Cards computerCards;

    // User rolls dice
    std::cout << " \n";
    std::cout << "Press the spacebar to roll the dice.\n";
    while (true) {
        char key = _getch(); // Waits for spacebar 
        if (key == ' ') {
            break;
        }
    }

    int playerRoll = playerDice.roll();
    std::cout << "Dice go! \n";
    std::cout << "You rolled a " << playerRoll << "!\n";

    // User draws card
    std::cout << " \n";
    std::cout << "Press the spacebar to draw a card.\n";
    while (true) {
        char key = _getch();
        if (key == ' ') {
            break;
        }
    }

    std::string playerCard = playerCards.draw();
    std::cout << "Draw! \n";
    std::cout << "You drew the " << playerCard << "!\n";

    // Computer rolls dice
    std::cout << " \n";
    std::cout << "Now the opponent will roll the dice.\n";
    std::cout << "Dice go! \n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); //Program waits two seconds before displaying results

    int computerRoll = computerDice.roll();
    std::cout << "Computer rolled a " << computerRoll << "!\n";

    // Computer draws card
    std::cout << " \n";
    std::cout << "Now the opponent will draw a card.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::string computerCard = computerCards.draw();
    std::cout << "Draw! \n";
    std::cout << "Computer drew the " << computerCard << "!\n";

    // Winner is determined
    int playerTotal = playerRoll + playerCards.getCardValue(playerCard);
    int computerTotal = computerRoll + computerCards.getCardValue(computerCard);

    std::cout << " \n";
    std::cout << "Your total points: " << playerTotal << "\n";
    std::cout << "Opponent's total points: " << computerTotal << "\n";
    std::cout << " \n";

    if (playerTotal > computerTotal) {
        std::cout << "You win!\n";
        std::cout << "Luck was on your side. \n";
    }
    else if (playerTotal < computerTotal) {
        std::cout << "The opponent wins.\n";
        std::cout << "Better luck next time.\n";
    }
    else {
        std::cout << "It's a tie.\n";
        std::cout << "No contest! \n";
    }
}
