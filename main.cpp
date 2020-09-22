#include "card.h"
#include "deck.h"
#include "shoe.h"
#include "blackjackcard.h"
#include "blackjackplayer.h"
#include <iostream>
#include <iterator>
#include "bet.h"
#include "hand.h"
#include <string>
#include "table.h"
#include "GameMaster.h"

using namespace std;

int main() {
    Shoe s(3,2);
    Table t;
    s.shuffle();
    GameMaster gm(s, t);
    
    Hand h(s.drawCard(), s.drawCard());
    
    
    //gm.setDealer(h);
    
    //cout << gm.getDealer().toString() << endl;
    
    
//    Shoe d(3,2);
//    d.shuffle();
//    
//    Hand h;
//    bool dealtBlackjack = true;
//    bool blackjack = false;
//    int i = 1;
//    while (!blackjack) {
//        if (d.getCards().size() <= 0) {
//            d.build();
//            d.shuffle();
//        }
//        
//        h.add(d.drawCard());
//        
//        if (h.busted() || h.blackjack()) {
//            cout << i << ". " << h.getTotal() << ": " 
//                << h.toString() << "\n";
//            i++;
//        }
//        
//        if (dealtBlackjack) {
//            if (h.size() == 2 && h.blackjack())
//                    blackjack = h.blackjack();
//        } 
//        else
//            blackjack = h.blackjack();
//        
//        if (h.busted())
//            h.clear();
//    }
//    
//    cout << h.toString() << endl;
//    cout << h.getTotal() << endl;
    
    return 0;
}