#include "Player.h"

Player::Player(int x, int y) {
    health = MAX_HEALTH;
    hunger = MAX_HUNGER;
    thirst = MAX_THIRST;

    this->x = x;
    this->y = y;
    this->score = 0;
}

int Player::getScore() const {
    return score;
}

void Player::takeDamage(int val) {
    this->health -= val;
    if (this->health < 0) this->health = 0;
}

void Player::takeTurn() {
    this->thirst--;
    this->hunger--;

    if (this->thirst <= 0) {
        this->health--;
        this->thirst = 0;
    }

    if (this->hunger <= 0) {
        this->health--;
        this->hunger = 0;
    }

    this->score++;
}

string Player::getStats() const {
    stringstream ss;
    ss << "============\n"
       << "Health: " << this->health << "\n"
       << "Hunger: " << this->hunger << "\n"
       << "Thirst: " << this->thirst << "\n"
       << "============\n";
    return ss.str();
}

bool Player::isAlive() const {
    return this->health > 0;
}

void Player::increaseThirst(int val) {
    this->thirst += val;
    if (this->thirst > MAX_THIRST) this->thirst = MAX_THIRST;
}

void Player::increaseHunger(int val) {
    this->hunger += val;
    if (this->hunger > MAX_HUNGER) this->hunger = MAX_HUNGER;
}
