#include <iostream>
#include <vector>
#include <string>
#include "Food.h"

using namespace std;

int main(){
    
    vector<Food>info{
        Food("Grilled Chicken Breast", 165.0, 3.6, 0.0, 31.0, 74.0),
        Food("Brown Rice (Cooked)", 216.0, 1.8, 0.2, 4.5, 9.0),
        Food("Salmon (Baked)", 206.0, 10.9, 0.0, 22.6, 64.0),
        Food("Quinoa (Cooked)", 222.0, 3.6, 0.9, 8.1, 13.0),
        Food("Avocado", 234.0, 21.4, 0.9, 2.9, 10.0),
        Food("Greek Yogurt (Non-fat)", 59.0, 0.4, 3.6, 10.0, 36.0),
        Food("Spinach (Raw)", 23.0, 0.4, 0.4, 2.9, 79.0),
        Food("Almonds", 579.0, 49.9, 3.9, 21.2, 1.0),
        Food("Broccoli (Cooked)", 55.0, 0.6, 1.6, 4.3, 82.0),
        Food("Banana", 105.0, 0.4, 14.4, 1.3, 1.0)};
    Food ff("Total Intake:", 0.0, 0.0, 0.0, 0.0, 0.0);
    
    int Exit=0;
    int input=0;
    
    
    while(Exit==0){
    input=0;
    for(int i=0; i< info.size();i++){
    cout << i+1 << "- " << info.at(i).getName() << endl;
    }
    
    cout<<"Select item consumed"<<endl<<"Type 0 when done"<<endl;
    cin>>input;
    
    if(input>0 && input<=10){
    input=input-1;
    cout<<info.at(input).getName()<<" Added"<<endl<<endl;
    ff=ff+info.at(input);
    }
    else if(input==0){
        Exit=1;
    }
    else{
        cout<<"invalid input"<<endl;
    }
    }
    
    
    
    
    ff.print();
    cout<<"Goodbye :)"<<endl;
    



    return 0;
}









