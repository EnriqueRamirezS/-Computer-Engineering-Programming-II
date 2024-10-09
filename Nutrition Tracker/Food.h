#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>

using namespace std;


class Food{
private:
string Name;
double Calories;
double Fat;
double Sugar;
double Protein;
double Sodium;

public:
string getName() const;
double getCalories() const;
double getFat() const;
double getSugar() const;
double getProtein() const;
double getSodium() const;

void print() const;

Food(string Name, double Calories, double Fat, double Sugar, double Protein, double Sodium);
    
Food operator+(const Food& c);
    

};




#endif