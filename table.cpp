#include "table.h"
#include <iostream>
#include <valarray>

Table::Table() {
    //nuffin
}

Table::Table(std::vector<Bet> bets) {
    this->bets = bets;
    this->limit = 500;
    this->minimum = 100;
}

void Table::placeBet(Bet bet) {
    this->bets.push_back(bet);
}

Bet Table::getBets(int i) {
    return this->bets[i];
}

void Table::addPlayer(BlackjackPlayer p) {
    this->players.push_back(p);
}

std::vector<BlackjackPlayer> Table::getPlayers() {
    return this->players;
}
int Table::getMin(){
    return minimum;
}
int Table::getMax(){
    return limit;
}
std::string Table::toString() {
    std::string s;
    
    for(int i=0; i<this->bets.size(); i++)
        s+= this->bets[i].toString()
                + (i >= this->bets.size()-1 ? "." : ", ");
    
    return s;
}