#include <iostream>
#include <sstream>
#include <time.h>
#include "Player.h"
#include "Land.h"

using namespace std;

const int MAP_SIZE = 10;
Land* map[MAP_SIZE][MAP_SIZE];

void populateMap(){
    for(int i = 0; i < MAP_SIZE; i++){
        for(int j = 0; j < MAP_SIZE; j++){
            // TODO: Modify this code to add your new land types
            int randomNum = rand() % 5;
            switch(randomNum){
                case 0: // Forest
                    map[i][j] = new Forest;
                    break;
                case 1: // Lake
                    map[i][j] = new Lake;
                    break;
                case 2: // Swamp
                    map[i][j] = new Swamp;
                    break;
                case 3: // Green_berry
                    map[i][j] = new Green_berry;
                    break;
                case 4: // Snake
                    map[i][j] = new Snake;
                    break;
                default:
                    cout << "Invalid land type selected" << endl;
                    break;
            }
        }
    }
}

int main(){
    srand(time(0));
    
    populateMap();
    
    Player player(MAP_SIZE/2, MAP_SIZE/2);
    
    cout << "You wake up and find yourself lost in the middle of a strange wilderness." << endl;
    
    // TODO: Handle boundary conditions (e.g., if index out of bounds north, you index the south-most location)
    
    while(player.isAlive()){
        cout<< player.x <<" "<< player.y<<endl;
        cout << "To the north you see " << map[player.x][player.y - 1]->getDescription() << endl;
        cout << "To the east you see " << map[player.x + 1][player.y]->getDescription() << endl;
        cout << "To the south you see " << map[player.x][player.y + 1]->getDescription() << endl;
        cout << "To the west you see " << map[player.x - 1][player.y]->getDescription() << endl;
        
        cout << "Which way will you go? Enter N, E, S, or W:" << endl;
        char userInput;
        cin >> userInput;
        
        switch(userInput){
            case 'N':
                player.y = player.y - 1;
                break;
            case 'E':
                player.x = player.x + 1;
                break;
            case 'S':
                player.y = player.y + 1;
                break;
            case 'W':
                player.x = player.x - 1;
                break;
            default:
                break;
        }
        if (player.x == 0 && userInput == 'W'){
            player.x = 9;
        }
        if (player.x == 9 && userInput == 'E'){
            player.x = 0;
        }
        if(player.y == 0 && userInput == 'N'){
            player.y=9;
        }
        if(player.y == 9 && userInput == 'S'){
            player.y=0;
        }
        
        cout << map[player.x][player.y]->visit(player) << endl;
        
        cout << player.getStats() << endl;
        player.takeTurn();
    }
    
    cout << "You died." << endl;
    cout << player.getScore() << endl;
    
    return 0;
}