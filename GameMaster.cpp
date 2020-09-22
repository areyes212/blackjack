#include "GameMaster.h"
#include "table.h"
#include "hand.h"
#include "shoe.h"

/**
 * GameMaster:
 * this class mimics what a dealer would be and controls the game.
 * It contains a shoe and a hand that irl would be a dealer's shoe and hand
 * 
 * Problem: This class and table are co-dependent of each other, so
 * I'm having problems accessing the Table object within this class.
 * I'm trying to use forward declarations in the header file to remedy
 * this which gets rid of the errors but now I'm not sure if the
 * pointers to the class will actually work.
 */

GameMaster::GameMaster(Shoe shoe, Table table) {
    this->shoe = &shoe;
    this->table = &table;
}
   
void GameMaster::loop() {
    /**
     * goes through main blackjack game
     * table.players[i].newGame() to create empty hands for each player
     * table.players[i].getFirstHand() get initial empty hand
     * table.players[i].add(this->shoe.drawCard()) x2 to add 2 cards to player
     * 
     * this->dealer.clear() reset dealer hand
     * then this->dealer.add(this->shoe.drawCard()), this->dealer.add(this->shoe.drawCard())
     *   ^- Add two cards to the dealers hand..
     * 
     * this->dealer.getUpCard() get the dealers up card 
     * if up card is ace use BlackjackCard.offerInsurance()
     * then this->insurance();
     * 
     * check all players.hand.splittable()
     * if it's splittable and the player wants to split 
     * then call players.hand.split the hand and return a new hand. 
     *   ^- (Still need to make this in Hand class)
     * 
     * 
     * loop fillHand() through all player hands
     *
     * while dealer.getTotal() < 16 hit until bust or stay
     * 
     * if dealer bust all bets are winners
     * 
     * go through all bets that are still on the table and compare
     * the player hand against the dealer hand to see who won
     */
    
}
   
void GameMaster::insurance(Hand hand) {
    /**
     * check player.getFirstHand() for blackjack
     * 
     * if blackjack then offer player.evenMoney()
     * 
     * call player.insurance() if denied
     * then return 0 out of this
     * 
     * if insurance was accepted
     * check dealers hand if blackjack the insurance bet is winner
     * and ante bet lost
     * all bets removed round/game over
     * 
     * if no dealer blackjack then insurance bet is loser but ante bet stays
     *
     */
}
   
void GameMaster::fillHand() {
    /**
     * if dealer.getTotal() < 21
     * offer player.doubledown()
     * 
     * if doubledown declined then player.hit()
     * if doubledown and hit declined then player stays
     * 
     * if hand is > 21 then bust and done as loser
     */
}


std::string GameMaster::toString() {
    std::string s;
    // Displays the current game
    return s;
}