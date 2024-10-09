#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void num2char(int x, char &y){
    if (x == 0){
        y = '7';
    }
     if (x == 1){
        y = '$';
    }
     if (x == 2){
        y = '#';
    }
     if (x == 3){
        y = 'X';
    }
}


int main(){
    
    int money= 10;
    char cont = 'y';
    char spot_1;
    char spot_2;
    char spot_3;
    
     
    srand(time(0));
    cout<<endl<<"you have $" <<money <<" do you want to roll (y/n)"<<endl;
    cin >> cont;
    
    while ((money > 0 && cont == 'y') || (money > 0 && cont == 'Y' )) {
        
        
        int randNum_1 = rand() % 4;
        int randNum_2 = rand() % 4;
        int randNum_3 = rand() % 4;
        
        num2char(randNum_1, spot_1);
        num2char(randNum_2, spot_2);
        num2char(randNum_3, spot_3);
        
        cout<<endl<<spot_1<<spot_2<<spot_3<<endl;
        
        
        if (spot_1 == '7' && spot_2 == '7' && spot_3 == '7'){
            money = money +100;
            cout<<"Congrats +$100"<<endl;
        }
        
         if (spot_1 == '$' && spot_2 == '$' && spot_3 == '$'){
            money = money +50;
            cout<<"Congrats +$50"<<endl;
        }
        
         if (spot_1 == '#' && spot_2 == '#' && spot_3 == '#'){
            money = money +25;
            cout<<"Congrats +$25"<<endl;
        }
        
         if (spot_1 == 'X' && spot_2 == 'X' && spot_3 == 'X'){
            money = money +10;
            cout<<"Congrats +$10"<<endl;
        }
        
        money = money-1;
        
        cout<<endl<<"you have $" <<money <<" do you want to continue? (y/n)"<<endl;
        cin >> cont;
        
    }
    
    
    cout<<"winnings = $"<<money<<endl<<"hope to see you soon :)"<<endl;
    
    
    
    
    return 0;
}