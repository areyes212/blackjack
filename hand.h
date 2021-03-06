#ifndef HAND_H
#define HAND_H
#include <vector>
#include "blackjackcard.h"
#include "bet.h"

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
    Hand split();
    BlackjackCard getUpCard();
    BlackjackCard getCard(int i);
    
    std::string toString();
private:
    bool declinedSplit;
    std::vector<BlackjackCard> cards;
};

#endif

