#ifndef BLACKJACKPLAYER_H
#define BLACKJACKPLAYER_H

#include "hand.h"
#include "player.h"

class Table;

class BlackjackPlayer : public Player {
    
public:
    BlackjackPlayer();
    BlackjackPlayer(Table table);
    void newGame(BlackjackCard up, BlackjackCard down);
    Hand getHand(int i);
    void placeBets();
    bool evenMoney();
    bool insurance();
    bool split();
    bool doubleDown();
    bool hit();
    std::string toString();
private:
    std::vector<Hand> hands;

};

#endif

