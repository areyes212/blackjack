#ifndef HAND_H
#define HAND_H
#include <vector>
#include "bet.h"
#include "card.h"

class Hand {
public:
    Hand();
    Hand(BlackjackCard c1, BlackjackCard c2);
    void clear();
    int hardTotal();
    int softTotal();
    void add(BlackjackCard card);
    int getTotal();
    int size();
    bool blackjack();
    bool busted();
    bool splittable();
    BlackjackCard getUpCard();
    
    void setBet(Bet ante);
    Bet getBet();
    std::string toString();
private:
    bool declinedSplit;
    std::vector<BlackjackCard> cards;
    Bet ante;
};

#endif

