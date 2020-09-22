#ifndef BLACKJACKCARD_H
#define BLACKJACKCARD_H
#include "card.h"

class BlackjackCard : public Card {
    public:
        BlackjackCard(int, int);
        int getGameValue();
        const bool offerInsurance();
};

#endif

