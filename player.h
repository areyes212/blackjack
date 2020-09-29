#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>

class Bet;
class Hand;
class Table;

class Player {
    
public:
    Player();
    bool evenMoney(Hand hand);
    bool insurance(Hand hand);
    bool doubleDown(Hand hand);
    bool hit(Hand hand);
    void won(Bet bet,int i);
    void lost();

protected:
    Table *table;
    int budget;
        
private:
    std::string name;
};

#endif