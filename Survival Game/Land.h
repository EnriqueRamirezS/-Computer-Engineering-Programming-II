#ifndef LAND_H
#define LAND_H

#include <string>
#include "Player.h"

using namespace std;

class Land {
public:
    virtual string getDescription() = 0;
    virtual string visit(Player& player) = 0;
};

class Forest : public Land {
public:
    string getDescription();
    string visit(Player& player);
};

class Lake : public Land {
public:
    string getDescription();
    string visit(Player& player);
};

// New derived land types
class Swamp : public Land {
public:
    string getDescription();
    string visit(Player& player);
};

class Green_berry : public Land {
public:
    string getDescription();
    string visit(Player& player);
};

class Snake : public Land {
public:
    string getDescription();
    string visit(Player& player);
};

#endif // LAND_H
