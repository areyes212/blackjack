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
    this->indx = 0;
}
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
void GameMaster::loop(int i) {
    //Add checks on betSize by looking at current cash
    //Have Cash decrement each time bet happens.
    int betSize = -1;
    std::cout << "How much would you like to bet? :";
    while (!(betSize > table->getMin() && betSize < table->getMax())) {
        cin >> betSize;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input, please use a value " << table->getMin() << "-" << table->getMax() << " :";
        } else if (betSize < table->getMin() || betSize > table->getMax()) {
            cout << "Out of bounds, please use a value " << table->getMin() << "-" << table->getMax() << " :";
        }
    }
    table->placeBet(Bet(betSize, Outcome("pre-flop", 3, 2)));
    table->getPlayers()[i].newGame(this->shoe->drawCard(), this->shoe->drawCard());
    std::cout << "Your Hand:" << endl;
    std::cout << table->getPlayers()[i].getHand(0).getCard(0).toString() << endl;
    std::cout << table->getPlayers()[i].getHand(1).getCard(1).toString() << endl;
    
    
    dealer->clear();
    dealer->add(this->shoe->drawCard());
    dealer->add(this->shoe->drawCard());
    std::cout << "Dealer Cards: ";
    std::cout << dealer->getCard(0).toString() << endl << "?????" << endl;


    if (this->dealer->getUpCard().getValue() == ace) {
        if (table->getPlayers()[i].getHand(0).hardTotal() == 21 && table->getPlayers().size() == 2) {
            if (table->getPlayers()[i].evenMoney()) {
                table->placeBet(Bet(table->getBets(indx).amount() / 2, Outcome("Even Money", 3, 2)));
            }
        } else {
            if (table->getPlayers()[i].insurance()) {
                table->placeBet(Bet(table->getBets(indx).amount() / 2, Outcome("Insurance", 2, 1)));
            }
        }
    }
    
    int card1 = table->getPlayers()[i].getHand(0).getCard(0).getValue();
    int card2 = table->getPlayers()[i].getHand(0).getCard(1).getValue();
    if (card1 == card2) {
        if (table->getPlayers()[i].split()) {
            table->placeBet(Bet(table->getBets(indx).amount(), Outcome("Split", 3, 2)));
        }
    }
    
    bool hit = true;
    int handTotal;
    while(hit){
        if(table->getPlayers()[i].doubleDown()){
            table->placeBet(Bet(table->getBets(indx).amount(), Outcome("Double Down", 3, 2)));
            //hit card
            //showCards
            //getCardScore
            hit = false;
        }
        if(table->getPlayers()[i].hit()){
            //hit card
            //check score
            if(handTotal > 21){
                hit = false;
            }            
        }else{
            hit = false;
        }
    }
    
    bool logic = true;
    while(logic){
        //Have dealer compare hand. If dealer < Player = hit dealer.
        //Stop if hit 21
    }
    
    //Compare Scores
    //Dish out the bets made by logic
    //make indx = bets.size() if second player.
    
    //If win, setCash = WinAmount
}
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
void GameMaster::insurance(Hand hand) {
    if(hand.getUpCard().getValue() == ace){
  
    }
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