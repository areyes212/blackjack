#include "blackjackcard.h"
BlackjackCard::BlackjackCard(const int value, const int suit) : Card::Card(value, suit) {
    // Just pass everything to parent
}

int BlackjackCard::getGameValue() {
    if (this->value >= jack) // face cards
        return 10;
    else if(this->value == ace) // ace
        return 11;
    else
        return this->value;
}

// Used for dealer up card
const bool BlackjackCard::offerInsurance() {
    if (this->value == ace)
        return true;
    return false;
}

