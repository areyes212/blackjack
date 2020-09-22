#include "deck.h"
#include <string>
#include "card.h"
#include <algorithm>
#include <ctime>
#include <random>
#include <iostream>

Deck::Deck() {
    build();
}

void Deck::build() {
    for(int s=0; s<=spades; s++) {
        for(int v=1; v<14; v++) { 
            this->cards.push_back(BlackjackCard(v, s));
        }
    }
}

void Deck::show() {
    for(int i=0; i<this->cards.size(); i++) {
        cout << this->cards[i].toString() << endl;
    }
}

void Deck::shuffle() {
    srand(time(0));

    for(int i=this->cards.size()-1; i>0; i--)
        swap(this->cards[rand() % i], this->cards[i]);
}

BlackjackCard Deck::drawCard() {
    BlackjackCard topCard = this->cards[this->cards.size()-1];
    this->cards.pop_back();
    return topCard;
}

const vector<BlackjackCard> Deck::getCards() {
    return this->cards;
}

void Deck::setCards(vector<BlackjackCard> cards) {
    this->cards = cards;
}