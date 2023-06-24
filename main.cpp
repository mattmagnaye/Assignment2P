/*
* Author: Matt Aaron Magnaye
* Professor: Dave Harden
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
    

    // Initialize first cards and output total
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
        total_cards = another_card + total_cards;
        cout << "Total: " << total_cards << endl;

    if (total_cards == 21) {
        cout << "Congratulations!" << endl;
        break;
        }
    else if ( total_cards > 21) {
        cout << "Bust" << endl;
        break;
        }
    }



    return 0;
}