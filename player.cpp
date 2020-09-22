#include "player.h"
#include "bet.h"
#include "hand.h"
#include "table.h"
#include <iostream>

Player::Player() {
    this->budget = 1000;
}

void Player::won(Bet bet) {
    cout << "You won " << bet.winAmount() << endl;
}

void Player::lost() {
    //debating on if this is necessary
}

bool Player::evenMoney(Hand hand) {
    return false;
}

bool Player::insurance(Hand hand) {
    return false;
}

bool Player::doubleDown(Hand hand) {
    return false;
}

bool Player::hit(Hand hand) {
    // Player returns true if hand is <= 16 and (for dealer)
    // Player returns false if hand is >= 17 (for dealer)
    return false;
}