#ifndef DECK_H
#define DECK_H

#include <vector>
#include "blackjackcard.h"

using namespace std;

class Deck {
    private:
    protected:
        vector<BlackjackCard> cards;
    public:
        Deck();
        void build();
        void show();
        void shuffle();
        BlackjackCard drawCard();
        const vector<BlackjackCard> getCards();
        void setCards(vector<BlackjackCard>);
};

#endif