#ifndef SHOE_H
#define SHOE_H

#include "shoe.h"
#include "deck.h"
#include <vector>

class Shoe : public Deck {
    
        int deckCount;
        int offSet;
    public:
        Shoe();
        Shoe(int decks, int stopDealing = 1);
        void Build();
        vector<BlackjackCard> getCards();
};
#endif