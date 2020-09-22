#include "table.h"
#include <iostream>

Table::Table() {
    //nuffin
}

Table::Table(std::vector<Bet> bets) {
    this->bets = bets;
}

void Table::placeBet(Bet bet, Hand hand) {
    hand.setBet(bet);
    this->bets.push_back(bet);
    
    std::cout << bet.toString() << " was placed on the table." << std::endl;
}

std::vector<Bet> Table::getBets() {
    return this->bets;
}

void Table::addPlayer(BlackjackPlayer p) {
    this->players.push_back(p);
}

std::vector<BlackjackPlayer> Table::getPlayers() {
    return this->players;
}

std::string Table::toString() {
    std::string s;
    
    for(int i=0; i<this->bets.size(); i++)
        s+= this->bets[i].toString()
                + (i >= this->bets.size()-1 ? "." : ", ");
    
    return s;
}