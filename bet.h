#ifndef BET_H
#define BET_H
#include "bet.h"
#include <string>

class Outcome {
public:
    Outcome();
    Outcome(std::string name, int num, int den);
    int winAmount(int amount);
    std::string toString();
private:
    std::vector<std::string> ratio_outcomes;
    std::string name;
    std::vector<int> ratio;
};

class Bet {
public:
    Bet();
    Bet(int amount, Outcome outcome);
    int winAmount();
    int loseAmount();
    std::string toString();
    int amount();
private:
    int amountBet;
    Outcome outcome;
};


#endif /* BET_H */

