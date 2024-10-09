#include "Food.h"
using namespace std;

string Food::getName() const{return Name;}
double Food::getCalories() const{return Calories;}
double Food::getFat() const{return Fat;}
double Food::getSugar() const{return Sugar;}
double Food::getProtein() const{return Protein;}
double Food::getSodium() const{return Sodium;}

void Food::print() const{
     cout << "Total Intake:" << endl
     << "Calories: " << Calories << endl
     << "Total Fat: " << Fat<< "g"<<endl
     << "Total Sugar: " << Sugar << "g"<<endl
     << "Protein: " << Protein << "g"<<endl
     << "Sodium: " << Sodium << "mg" << endl;
}

Food::Food(string Name, double Calories, double Fat, double Sugar, double Protein, double Sodium) {
    this->Name = Name;
    this->Calories = Calories;
    this->Fat = Fat;
    this->Sugar = Sugar;
    this->Protein = Protein;
    this->Sodium = Sodium;}
    
Food Food::operator+(const Food& c){
    return Food (" ", this->Calories+ c.Calories,this->Fat+c.Fat,this->Sugar+c.Sugar, this->Protein+c.Protein, this->Sodium+c.Sodium);
}
    

