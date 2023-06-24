/*
* Author: Matt Aaron Magnaye - CIS 278
* Instructor: Professor Dave Harden
* Date: 06/23/23
* Assignment 2P: Loops - Project 7.4
* Description: It is a command line game that plays a simple version of blackjack.
*
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    char retry = 'y';
    

    // Initialize first cards and output total
    while (retry == 'y'){
    int first_card = rand() % 10 + 1;
    int second_card = rand() % 10 + 1;
    int total_cards = (first_card + second_card);

    // Output first 2 cards and total
    cout << "First cards: " << first_card << ", " << second_card << endl;
    cout << "Total: " << total_cards << endl;

    // Asks the user if they want an another card
    char addCard = 'y';
    cout << "Do you want another card (y/n)? ";
    cin >> addCard;
    cout << "You entered: " << addCard << endl;

    // Add card function
    while (addCard == 'y') {
        int another_card = rand() % 10 + 1;
        cout << "Card: " << another_card << endl;
        total_cards = another_card + total_cards;
        cout << "Total: " << total_cards << endl;

    // If total cards is equal to 21
    if (total_cards == 21) {
        cout << "Congratulations!" << endl;
        break;
        }

    // If total cards is more than 21
    if ( total_cards > 21) {
        cout << "Bust." << endl;
        break;
        }
        cout << "Do you want another card (y/n)? ";
        cin >> addCard;
    }

    // Asks the user if they want to retry the game
    cout << "Would you like to play again (y/n)? ";
    cin >> retry;
    }

    return 0;
}