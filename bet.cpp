#include "bet.h"
#include "outcome.h"

Bet::Bet() {
    
}

Bet::Bet(int amount, Outcome outcome) {
    this->amountBet = amount;
    this->outcome = outcome;
}

int Bet::winAmount() {
    return this->amountBet + (this->outcome.winAmount(this->amountBet));
}

int Bet::loseAmount() {
    return this->amountBet;
}

std::string Bet::toString() {
    return std::to_string(this->amountBet) + " on " + this->outcome.toString();
}

int Bet::amount() {
    return this->amountBet;
}