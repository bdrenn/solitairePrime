/*
 Name: Brian Drennan
 Class: CECS 282-05
 Project Name: Prog 1 - Solitaire Prime
 Due Date: 9/20/2018
 
 */

#ifndef deck_hpp
#define deck_hpp

#include <stdio.h>
#include "card.hpp"

class Deck {
    
private:
    Card storage[52];
    int suitCount;
    int rankCount;
    int top;
    int controlTop = 52;
public:
    Deck(); //empty constructor
    Card Deal(); //deal single card
    void showDeck(); //show deck with 13 columns and 4 rows
    int cardsLeft(); //remaining cards in deck
    void shuffle(); //shuffles order of cards
    void refreshDeck(); //reorders cards in deck
};

#endif /* deck_hpp */
