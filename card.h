#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

enum {clubs, diamonds, hearts, spades };
enum {number, ace, jack = 11, queen, king};


class Card {

    protected:
        unsigned int value;
        int suit;

    public:
        Card(const int value, const int suit);
        int getValue();
        void setValue(int value);
        int getSuit();
        void setSuit(int suit);
        string toString();
        string suitToString();
        string faceCardToString();
};
#endif