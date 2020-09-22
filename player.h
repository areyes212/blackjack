#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "table.h"

class Player {
    
public:
    Player();
    bool evenMoney(Hand hand);
    bool insurance(Hand hand);
    bool doubleDown(Hand hand);
    bool hit(Hand hand);
    void won(Bet bet);
    void lost();
    
private:
    std::string name;
    
protected:
    Table table;
    int budget;
   
};

class BlackjackPlayer : public Player {
    
public:
    BlackjackPlayer();
    BlackjackPlayer(Table table);
    void newGame();
    void placeBets();
    Hand getFirstHand();
    bool evenMoney(Hand hand);
    bool insurance(Hand hand);
    Hand split(Hand hand);
    bool doubleDown(Hand hand);
    bool hit(Hand hand);
    std::string toString();
    
private:
    vector<Hand> hands;

};

#endif