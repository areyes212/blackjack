#ifndef TABLE_H
#define TABLE_H
#include <vector>
#include "bet.h"
#include "hand.h"
#include "blackjackplayer.h"

class Table {
    
public:
    Table();
    Table(std::vector<Bet> bets);
    void placeBet(Bet bet, Hand hand);
    std::vector<Bet> getBets();
    void addPlayer(BlackjackPlayer p);
    std::vector<BlackjackPlayer> getPlayers();
    std::string toString();
    
private:
    int limit;
    int minimum;
    std::vector<Bet> bets;
    
protected:
    std::vector<BlackjackPlayer> players;
};

#endif

