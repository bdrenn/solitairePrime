/*
 Name: Brian Drennan
 Class: CECS 282-05
 Project Name: Prog 1 - Solitaire Prime
 Due Date: 9/20/2018
 */

#ifndef card_hpp
#define card_hpp

#include <stdio.h>

class Card {
private:
    char rank;
    char suit;
    bool faceUp;
public:
    Card(); //create blank card
    Card(char r, char s); //card with defined paramaters
    void flip(); //flip the card to reveal suit and rank
    int getValue(); //return int value of card based on rank
    void showCard(); //show card
};

#endif /* card_hpp */
