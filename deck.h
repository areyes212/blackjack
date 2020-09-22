#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"

class Deck {
public:
    void build();
    Deck();
    void show();
    void shuffle();
    BlackjackCard drawCard();
    const std::vector<BlackjackCard> getCards();
    void setCards(std::vector<BlackjackCard>);
    
private:
    
protected:
    std::vector<BlackjackCard> cards;
    
};

class Shoe : public Deck {
    
public:
    Shoe();
    Shoe(int decks, int stopDealing = 1);
    void build();
    std::vector<BlackjackCard> getCards();

private:
    int deckCount;
    int offSet;
        
};

#endif