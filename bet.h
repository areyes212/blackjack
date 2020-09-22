#ifndef BET_H
#define BET_H
#include "bet.h"
#include "outcome.h"

class Bet {
    
public:
    Bet();
    Bet(int amount, Outcome outcome);
    int winAmount();
    int loseAmount();
    int amount();
    std::string toString();
private:
    int amountBet;
    Outcome outcome;
};

#endif /* BET_H */

