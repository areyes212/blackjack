#include "hand.h"

Hand::Hand() {
    // Ehhh nuffin
}

Hand::Hand(BlackjackCard c1, BlackjackCard c2) {
    this->cards[0] = c1;
    this->cards[1] = c2;
}

void Hand::clear() {
    this->cards.clear();
}

int Hand::hardTotal() {
    int total = 0;
    
    for(int i=0; i<this->cards.size(); i++)
        total += cards[i].getGameValue();
    
    return total;
}

int Hand::softTotal() {
    int total = 0;
    
    for(int i=0; i<this->cards.size(); i++) {
        if (this->cards[i].getGameValue() == 11) {
            total += 1;
            continue;
        }
        total += this->cards[i].getGameValue();
    }      
    return total;
}

void Hand::add(BlackjackCard card) {
    this->cards.push_back(card);
}

int Hand::getTotal() {
    if (hardTotal() > 21)
        return softTotal();
    return hardTotal();
}

int Hand::size() {
    return this->cards.size();
}

bool Hand::blackjack() {
    if (getTotal() == 21)
        return true;
    return false;
}

bool Hand::busted() {
    if (getTotal() > 21)
        return true;
    return false;
}

// Need to still offer a question if they want to split or not.
bool Hand::splittable() {
    if (this->cards.size() == 2 && this->cards[0].getGameValue() == this->cards[0].getGameValue())
        return true;
    this->declinedSplit = true;
    return false;
}

Hand Hand::split() {
    // need to create an actual split
    Hand t;
    return t;
}

BlackjackCard Hand::getUpCard() {
    return this->cards[0];
}
BlackjackCard Hand::getCard(int i){
    return this->cards[i];
}

std::string Hand::toString() {
    std::string s;
    
    for(int i=0; i<this->cards.size(); i++)
        s += this->cards[i].toString()
                + (i >= this->cards.size()-1 ? "." : ", ");
    
    return s;
}

