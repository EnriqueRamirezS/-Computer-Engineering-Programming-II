#include "Land.h"

using namespace std;

string Forest::getDescription() {
    return "a densely wooded forest.";
}

string Forest::visit(Player& player) {
    int randomNum = rand() % 100;
    
    if(randomNum > 74) {
        player.takeDamage(1);
        return "You are attacked by a bear while foraging for berries.";
    } else {
        player.increaseHunger(1);
        return "You forage for berries in the woods and eat a few.";
    }
}

string Lake::getDescription() {
    return "a clear sparkling lake.";
}

string Lake::visit(Player& player) {
    player.increaseThirst(2);
    return "You visit the lake and drink its clean water";
}

// Implementations for the new land types
string Swamp::getDescription() {
    return "A swamp";
}

string Swamp::visit(Player& player) {
    int randomNum = rand() % 100;
    
    if(randomNum > 74) {
        player.takeDamage(1);
        return "A crocodile nearly eats you alive, but you escaped!";
    } else {
        player.increaseThirst(1);
        return "The swampy water tastes terrible but you still drink it";
    }
}

string Green_berry::getDescription() {
    return "A weird-looking berry";
}

string Green_berry::visit(Player& player) {
    int randomNum = rand() % 100;
    
    if(randomNum > 98) {
        player.takeDamage(3);
        return "You don't feel too well after eating the berry";
    } else {
        player.increaseHunger(1);
        return "The berry tastes good";
    }
}

string Snake::getDescription() {
    return "A snake";
}

string Snake::visit(Player& player) {
    int randomNum = rand() % 100;
    
    if(randomNum > 3) {
        player.takeDamage(1);
        return "The snake bites you, but it didn't hurt much.";
    } else {
        player.increaseHunger(5);
        return "You cook the snake and eat it";
    }
}
