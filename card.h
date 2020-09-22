#ifndef CARD_H
#define CARD_H
#include <string>

enum {clubs, diamonds, hearts, spades };
enum {number, ace, jack = 11, queen, king};


class Card {
    public:
        Card(const int value, const int suit);
        int getValue();
        void setValue(int value);
        int getSuit();
        void setSuit(int suit);
        std::string toString();
        std::string suitToString();
        std::string faceCardToString();

    protected:
        unsigned int value;
        int suit;
};

class BlackjackCard : public Card {
    public:
        BlackjackCard(int, int);
        int getGameValue();
        const bool offerInsurance();
};
#endif