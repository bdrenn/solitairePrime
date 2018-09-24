/*
 Name: Brian Drennan
 Class: CECS 282-05
 Project Name: Prog 1 - Solitaire Prime
 Due Date: 9/20/2018
 
*/

#include "deck.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

Deck::Deck() {
    //create deck of cards
    char suits[] = {'S', 'H', 'D', 'C'};
    char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    
    top = 0;
    
    for(suitCount = 0; suitCount < 4; suitCount++){
        for(rankCount = 0;rankCount < 13; rankCount++){
            storage[top] = Card(ranks[rankCount], suits[suitCount]);
            top++;
        }
    }
}


Card Deck::Deal() {
    //deal one card
    Card theCard = storage[controlTop - 1];
    controlTop = controlTop - 1;
    return theCard;
}

int Deck::cardsLeft(){
    //cards remaining in deck
    return controlTop;
}

void Deck::showDeck(){
    //print deck with 13 columns 4 rows
    int i = 0;
    for(int c = 0; c < 4; c++){
        cout << "\n ";
        for(int r = 0; r < 13; r++){
            storage[i].flip();
            cout << " ";
            storage[i++].showCard();
        }
        
    }
}

void Deck::shuffle(){
    //shuffles deck
    srand(time(0));
    
    for (int c = 0; c <= 51; c++)
    {
        int x = rand() % 52;
        int y = rand() % 52;
        Card temp = storage[x];
        storage[x] = storage[y];
        storage[y] = temp;
    }
}

void Deck::refreshDeck(){
    //reorders deck
    char suits[] = {'S', 'H', 'D', 'C'};
    char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    
    top = 0;
    
    for(suitCount = 0; suitCount < 4; suitCount++){
        for(rankCount = 0;rankCount < 13; rankCount++){
            storage[top] = Card(ranks[rankCount], suits[suitCount]);
            top++;
        }
    }
}




