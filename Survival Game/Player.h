#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <sstream>

using namespace std;

class Player {
public:
    Player(int x, int y);

    int getScore() const;
    void takeDamage(int val);
    void takeTurn();
    string getStats() const;
    bool isAlive() const;
    void increaseThirst(int val);
    void increaseHunger(int val);

    int x, y;

private:
    int health, hunger, thirst, score;
    const int MAX_HEALTH = 3;
    const int MAX_HUNGER = 5;
    const int MAX_THIRST = 3;
};

#endif // PLAYER_H
