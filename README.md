# Overview

This is a text-based game of chance where the player is prompted to press the spacebar to roll a 20-sided die to gain points.
Then they are prompted again to press the spacebar to draw a card from a standard deck of playing cards to gain more points.
The program, as an opponent, does the same thing. The points are tallied, and the winner is declared.
My purpose for creating this project was to learn the basics of C++ and also to create a simple game, since I love games
and I would love to make more complex games.

[Software Demo Video](https://youtu.be/fRgwwYrzPNM)

# Development Environment

I used the developer studio Visual Studio to write this program. It is in the C++ language.
The libraries I used include <iostream>, which was necessary for outputting messages to the console, <string>, which is necessary
for the computer to handle text data, and a variety of libraries for specific uses, which I mention in comments in each of the 
applicable files. These include <ctime> , <array> , <cstdlib> , <thread> , and <conio.h> .

# Useful Websites

* https://www.w3schools.com/cpp/
  A coding help and tutorial website. This specific link takes you to the home page for C++ help and tutorials.

* https://cplusplus.com/doc/tutorial/
  A C++ help website that also explains concepts such as compilers and constructors. 

# Future Work

* Implementing loops in the game logic so multiple rounds can be played without the user having to exit and reenter the game
  each time they want to play.
* Adding different options of dice that the player can select to use when the program starts (such 6-sided die, 100-sided die, etc.).
* Adding text-based animations to play and loop while the player is waiting for the computer to take its turn. 