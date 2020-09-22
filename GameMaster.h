#ifndef GAMEMASTER_H
#define GAMEMASTER_H
#include "hand.h"
#include "deck.h"
#include "table.h"

class Table;

class GameMaster {
public:
    GameMaster(Shoe shoe, Table table);
    void loop();
    void insurance(Hand hand);
    void fillHand();
private:
    Table table;
    Shoe shoe;
    Hand dealer; // might change to player
};

#endif /* GAMEMASTER_H */

