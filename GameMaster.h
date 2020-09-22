#ifndef GAMEMASTER_H
#define GAMEMASTER_H

#include "table.h"
class Shoe;
class Hand;
class Table;

class GameMaster {
public:
    GameMaster(Shoe shoe, Table table);
    void loop();
    void insurance(Hand hand);
    void fillHand();
    std::string toString();
private:
    Table *table;
    Shoe *shoe;
    Hand *dealer; // might change to player, will prob need templates then
};

#endif /* GAMEMASTER_H */

