/*
 Name: Brian Drennan
 Class: CECS 282-05
 Project Name: Prog 1 - Solitaire Prime
 Due Date: 9/20/2018
 
 */

#include "card.hpp"
#include <iostream>
#include <sstream>

using namespace std;

Card::Card(){

}

Card::Card(char r, char s) {
    //construct card 
    rank = r;
    suit = s;
}

void Card::flip() {
    //flip card
    if (faceUp == true){
        faceUp = false;
    }
    else{
        faceUp = true;
    }
}

int Card::getValue() {
    //integer value of card
    switch(rank) {
        case 'A' :
            return 11;
            break;
        case '2' :
            return 2;
            break;
        case '3' :
            return 3;
            break;
        case '4' :
            return 4;
            break;
        case '5' :
            return 5;
            break;
        case '6' :
            return 6;
            break;
        case '7' :
            return 7;
            break;
        case '8' :
            return 8;
            break;
        case '9' :
            return 9;
            break;
        default:
            return 10;
    }
}

void Card::showCard(){
    //print card
    cout << rank;
    cout << suit;
    cout << ", ";
}



