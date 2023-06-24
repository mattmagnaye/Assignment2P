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

    int first_card = rand() % 10 + 1;
    int second_card = rand() % 10 + 1;
    int total_cards = (first_card + second_card);

    cout << "First cards: " << ", " << second_card;
    cout << "Total: " << total_cards;

    cout << "Do you want another card"


    return 0;
}