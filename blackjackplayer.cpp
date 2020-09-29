#include "blackjackplayer.h"
#include "table.h"
#include <iostream>

BlackjackPlayer::BlackjackPlayer() {
    // Use player to construct object
}

BlackjackPlayer::BlackjackPlayer(Table t) {
    this->table = &t;
}
//Changed new game to clear your hand, and push back two cards.
void BlackjackPlayer::newGame(BlackjackCard up, BlackjackCard down) {
    this->hands.clear();
    this->hands.push_back(Hand(up,down));
}
Hand BlackjackPlayer::getHand(int i){
    return hands[i];
}
void BlackjackPlayer::placeBets() {
    this->hands.push_back(Hand());
    std:: string ante;
    std::cout << "You have $" + std::to_string(this->budget) + " enter your bet: ";
    std::getline(std::cin, ante);
    
    
    // Create an empty hand and adds it to this->hand vector
    // Create a new ante then updates table with bet-hand
}
bool BlackjackPlayer::evenMoney(Hand hand) {
    char input;
    std::cout << "Even money? :";
    std::cin >> input;
    
    if (input == 'Y')
        return true;
    return false;
}

bool BlackjackPlayer::insurance(Hand hand) {
    std::string input;
    std::cout << hand.toString() + "\nInsurance?: ";
    std::cin >> input;
    
    if (input == "Y") {
        return true;
    }
    return false;
}

Hand BlackjackPlayer::split(Hand hand) {
    // if user accepts split offer 
    // check if the hand can be split if so create a new ante for the hand
    // create a new hand single card hand and return it
    return hand;
}

bool BlackjackPlayer::doubleDown(Hand hand) {
    std::string input;
    std::cout << hand.toString() + "\nDouble Down?: ";
    
    if (input == "Y") {
        cin.ignore();
        std::getline(std::cin, input);
        //Initial Bet => from previous bet.
        
        return true;
    }
    return true;
}

bool BlackjackPlayer::hit(Hand hand) {
    std::string input;
    std::cout << hand.toString() + "\nWould you like to hit? : ";
    cin.ignore();
    std::getline(std::cin, input);
    
    if (input == "Y")
        return true;
    return true;
}

std::string BlackjackPlayer::toString() {
    std::string s;
    s += "Money: " + std::to_string(this->budget) + "\n";
    for(int i=0; i<this->hands.size(); i++) {
        if (this->hands.size() > 1) {
            s += "hand #" + std::to_string(i);
        }
        s+= ": " + hands[i].toString() + "\n";
    }
    return s;
}
