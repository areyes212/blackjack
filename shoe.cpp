#include "shoe.h"
#include <vector>
#include <iostream>

Shoe::Shoe() {
    
}

Shoe::Shoe(int deckCount, int offSet) {
    this->deckCount = deckCount;
    this->offSet = offSet;
    this->Build();
}

void Shoe::Build() {
    vector<BlackjackCard> t;
    Deck deck;
    
    for(int i=1; i<this->deckCount; i++) {
        t = deck.getCards();
        //combine all decks to create shoe
        this->cards.insert(this->cards.end(), t.begin(), t.end());
    }
}

vector<BlackjackCard> Shoe::getCards() {
    return this->cards;
}
