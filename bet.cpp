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






Outcome::Outcome() {
    // don't really want this but has to have it
}

Outcome::Outcome(std::string name, int num, int den) {
    this->name = name;
    this->ratio.push_back(num);
    this->ratio.push_back(den);
}

int Outcome::winAmount(int amount) {
    return amount * this->ratio[0] / this->ratio[1];
}

std::string Outcome::toString() {
    return this->name + " (" + std::to_string(this->ratio[0]) + "/" + std::to_string(this->ratio[1]) + ")";
}