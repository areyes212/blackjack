#include "card.h"
#include <iostream>

Card::Card(const int value, const int suit) {
    this->value = value;
    this->suit = suit;
}
int Card::getValue() {
    return this->value;
}

void Card::setValue(int value) {
    this->value = value;
}

int Card::getSuit() {
    return this->suit;
}

void Card::setSuit(int suit) {
    this->suit = suit;
}

string Card::toString() {
    return this->faceCardToString() + " of " + this->suitToString();
}

string Card::suitToString() {
    switch(this->suit) {
        case clubs: return "Clubs"; break;
        case diamonds: return "Diamonds"; break;
        case hearts: return "Hearts"; break;
        case spades: return "Spades"; break;
        default: return "error"; break;
    }
}

string Card::faceCardToString() {
    switch(this->value) {
        case ace: return "Ace"; break;
        case jack: return "Jack"; break;
        case queen: return "Queen"; break;
        case king: return "King"; break;
        default: return to_string(this->value); break;
    }
}