#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Worker{
private:
string name;
string job_title;
double wage;

public:
Worker(string name, string job_title, double wage){
    this->name=name;
    this->job_title=job_title;
    this->wage = wage;
}

string getName() const { 
    return name; }
    
string getJobTitle() const { 
    return job_title; }
    
double getWage() const { 
    return wage; }

};
double calculate_money(const vector<Worker>& info){
    double total_money=0;
    for(int i = 0; i < info.size(); i++){ 
    double hours;
    cout << "Hours worked for " << info.at(i).getName() << ": ";
    cin >> hours;
    while(hours<0){
    cout<<"Hours cannot be negative"<<endl;
    cout<< "Hours worked for " << info.at(i).getName() << ": ";
    cin >> hours;
    }
    total_money += hours * info.at(i).getWage();
    }
    return total_money;
    
}
int main() {
vector<Worker> info {
Worker("Adam", "Intern", 15),
Worker("Elsa", "Associate Engineer", 36),
Worker("Steve", "Senior Engineer", 50),
Worker("Emily", "Manager", 50),
Worker("Joe", "CEO", 100)};

int user=0;

while (user == 0){
cout<<"Please Select 1:3"<<endl<<"1. Print list of employees"<<endl<<"2. Calculate total wages"<<endl<<"3. Exit application"<<endl;
cin>>user;

if(user==1){
    for(int i = 0; i < info.size(); i++){
    cout << "Name: " << info.at(i).getName() << ", Job Title: " << info.at(i).getJobTitle() << ", Hourly Wage: $" << info.at(i).getWage() << endl;
    user=0;  
    }
    
}

else if(user==2){
    int money_owed=0;
    money_owed= calculate_money(info);
    cout<<"Total money owed: "<<"$"<< money_owed<<endl;
}

else if(user== 3){
    user=4;
}
else{
    user=0;
}

}
cout<<"Goodbye"<<endl;
    return 0;
}