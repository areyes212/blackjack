//#include "hand.h"
////constructor
//void Hand::hands(){
//    checkSplit();
//    checkDouble();
//    checkBlackJack();
//    checkBust();
//}
////Draw a card from deck
//void Hand::clearHand(){
//    this->hand.clear();
//}
////Draw a card from deck.
//void Hand::drawCard(BlackjackCard card){
//    this->hand.push_back(card);
//}
////return your hand total
//int Hand::getTotal(){
//    int count = 0; //count how many aces are in hand
//    int sum = 0; //sum of the value of cards
//    for(int i = 0; i < this->hand.size(); i++){ //read through size of hand
//        sum += this->hand[i].getGameValue(); //sum the Game Values of the cards
//        if(this->hand[i].getValue() == ace){ // increment each ace
//            count++;
//        }
//    }
//    int num = count; // set the size to the amount of aces
//    for(int i = 0; i < num; i++){
//        if(sum > 21 && count > 0){ //check if busted & there's an ace
//            sum -= 10; //Decrement the game value by 10, leaving ace with a value of 1
//        }
//    }
//    return sum; //return the sum
//}
////check if matching pair on draw
//bool Hand::checkSplit() {
//    if (this->hand.size() == 2) {
//        if ((this->hand[0].getValue() == this->hand[1].getValue())) {
//            return true;
//        }
//    }
//    return false;
//}
////Check if double is available
//bool Hand::checkDouble() {
//    if (this->hand.size() == 2) {
//        if (getTotal() >= 9 && getTotal() <= 11) {
//            return true;
//        }
//    }
//    return false;
//}
////check if 21
//bool Hand::checkBlackJack(){
//    if(getTotal() == 21){
//        return true;
//    }
//    return false;
//}
////check if bust
//bool Hand::checkBust() {
//    if (getTotal() > 21) {
//        return true;
//    }
//    return false;
//}
////Return hand
//Card Hand::getCard(int pos){
//    return this->hand[pos];
//}
//string Hand::getCardDesc(int pos){
//    return this->hand[pos].toString();
//}
//vector<BlackjackCard> Hand::getHand(){
//    return this->hand;
//}
