/*
* Program: Blackjack - Project 7.4 (Assignment 2P)
* Author: Matt Aaron Magnaye
* Date: 06/17/2023
* Instructor: Professor David Harden
* Description: This program generates a random number between 1 to 10 each time player gets a card.
*              It keeps the running total of the player's cards, and asks the player whethere or not it should deal another card.
*              If the player hits 21 exactly, the program should print "Congratulations", if it exceeds 21, it prints "Bust".
*              It also asks the player to play again or not.
*
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //srand(time(0));

    char playAgain;

    do {
        // Generates two random cards
        int card1 = rand() % 10 + 1;
        int card2 = rand() % 10 + 1;
        int totalCards = card1 + card2;

        cout << "First cards: " << card1 << ", " << card2 << endl;
        cout << "Total: " << totalCards << endl;

        char addCard;
        cout << "Do you want another card (y/n)? ";
        cin >> addCard;

        while (addCard == 'y') {
            // Draws new card
            int newCard = rand() % 10 + 1;
            totalCards += newCard;
            cout << "Card: " << newCard << endl;
            cout << "Total: " << totalCards << endl;

            // If number exceeds 21
            if (totalCards > 21) {
                cout << "Bust." << endl;
                break;
            }

            // If number is 21
            if (totalCards == 21) {
                cout << "Congratulations!" << endl;
                break;
            }

            cout << "Do you want another card (y/n)? ";
            cin >> addCard;
        }

        // Asks user to play again
        cout << "Would you like to play again (y/n)? ";
        cin >> playAgain;
    } while (playAgain == 'y');

    return 0;
}
