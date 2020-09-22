#include "outcome.h"
#include <iostream>

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