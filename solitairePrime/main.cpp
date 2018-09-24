/*
 Name: Brian Drennan
 Class: CECS 282-05
 Project Name: Prog 1 - Solitaire Prime
 Due Date: 9/20/2018
 
 */

#include <iostream>
#include "card.hpp"
#include "deck.hpp"

using namespace std;


bool isPrime(int num){
    //check if number is prime
    bool holder = false;
    
    for(int x = 1; x < num; x++){
        if(num % x == 0 && x != 1){
            holder = false;
            break;
        }
        else {
            holder = true;
        }
    }
    return holder;
}

int Sum(Card c1, int sum){
    //sum of cards
    sum = sum + c1.getValue();
    return sum;
}

void play(Deck d){
    //initiate game
    d.shuffle();
    int sumTotal = 0;
    int pilesCount = 0;
    
    cout << "Playing Solitaire Prime!!!\n\n";
    
    while(d.cardsLeft() > 0){
        Card temp;
        temp = d.Deal();
        sumTotal = Sum(temp, sumTotal);
        temp.flip();
        temp.showCard();
        if(isPrime(sumTotal) == true){
            cout << "Prime: " << sumTotal;
            cout << "\n";
            pilesCount += 1;
            sumTotal = 0;
            if(d.cardsLeft() == 0){
                cout << "Winner in " << pilesCount << " piles!\n";
            }
            else{}
        }
        else {
            if(d.cardsLeft() == 0){
                cout << "Loser\n";
            }
            else{}
        }
    }
}

int main(int argc, const char * argv[]) {
    
    Deck d2;
    
    cout << "\n1) New Deck\n";
    cout << "2) Display Deck\n";
    cout << "3) Shuffle Deck\n";
    cout << "4) Play Solitaire Prime\n";
    cout << "5) Exit\n";
    
    int response;
    cin >> response;
    
    //control for game play
    while(response != 5){
        
        if(response == 1){
            d2.refreshDeck();
        }
        else if(response == 2){
            d2.showDeck();
        }
        else if(response == 3){
            d2.shuffle();
        }
        else if(response == 4){
            play(d2);
        }
        else{
            cout << "You have exited";
        }
        
        cout << "\n1) New Deck\n";
        cout << "2) Display Deck\n";
        cout << "3) Shuffle Deck\n";
        cout << "4) Play Solitaire Prime\n";
        cout << "5) Exit\n";
        
        cin >> response;
    }

}


