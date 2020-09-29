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
bool BlackjackPlayer::evenMoney() {
    char input;
    std::cout << "Even money (Y/N)?: ";
    std::cin >> input;
    
    if (input == 'Y')
        return true;
    return false;
}

bool BlackjackPlayer::insurance() {
    char input;
    std::cout << "Insurance? (Y/N): ";
    std::cin >> input;
    
    if (input == 'Y') 
        return true; 
    return false;
}

bool BlackjackPlayer::split() {
    char input;
    cin.ignore();  
    std::cin >> input;
    if (input == 'Y') {
        return true;
    }
    return false;
}

bool BlackjackPlayer::doubleDown() {
    char input;
    cin.ignore();
    std::cout << "Double Down (Y/N): ";
    std::cin >> input;
    if (input == 'Y') {
        return true;
    }
    return false;
}

bool BlackjackPlayer::hit() {
    char input;
    std::cout << "Hit?: ";
    cin.ignore();
    std::cin >> input;
    
    if (input == 'Y')
        return true;
    return false;
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
