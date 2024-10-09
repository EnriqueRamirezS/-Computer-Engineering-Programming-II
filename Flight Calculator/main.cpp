#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double haversine(double lat1, double long1, double lat2, double long2, double RADIUS){
    double x;
    x = 2*RADIUS*asin(sqrt(pow(sin(((lat2*(M_PI/180))-(lat1*(M_PI/180)))/2), 2)+cos(lat1*(M_PI/180))*cos(lat2*(M_PI/180))*pow(sin(((long2*(M_PI/180))-(long1*(M_PI/180)))/2), 2)));
    return x;
    
}

double getFlightTime(double lat1, double long1, double lat2, double long2){
    double x;
    x = (2*3958.8*asin(sqrt(pow(sin(((lat2*(M_PI/180))-(lat1*(M_PI/180)))/2), 2)+cos(lat1*(M_PI/180))*cos(lat2*(M_PI/180))*pow(sin(((long2*(M_PI/180))-(long1*(M_PI/180)))/2), 2))))/500;
    return x;
}


int main(){
    double const RADIUS = 3958.8;
    
    vector<string> name;
    vector<double> lat;
    vector<double> longg;
    
    double lat1;
    double lat2;
    double long1;
    double long2;
    
    int user;
    int allow=1;
    
    name.push_back("Miami Beach, FL, USA");
    lat.push_back(25.793449);
    longg.push_back(-80.139198);
    
    name.push_back("Fargo, ND, USA");
    lat.push_back(46.877186);
    longg.push_back(-96.789803);
    
    name.push_back("Idaho City, ID, USA");
    lat.push_back(43.828850);
    longg.push_back(-115.837860);
    
    name.push_back("Peabody, MA, USA");
    lat.push_back(42.536457);
    longg.push_back(-70.985786);
    
    name.push_back("Terre Haute, IN, USA");
    lat.push_back(39.472298);
    longg.push_back(-87.401917);
    
    name.push_back("Washington, GA, USA");
    lat.push_back(33.740253);
    longg.push_back(-82.745857);
    
    name.push_back("Torrington, CT, USA");
    lat.push_back(41.806595);
    longg.push_back(-73.130592);
    
    name.push_back("Forestville, CA, USA");
    lat.push_back(38.473625);
    longg.push_back(-122.889992);
    
    name.push_back("Auburn, NY, USA");
    lat.push_back(42.933334);
    longg.push_back(-76.566666);
    
    name.push_back("Green Bay, WI, USA");
    lat.push_back(44.513332);
    longg.push_back(-88.015831);
    
    for(int i = 0; i < name.size(); i++){
        cout <<i+1<< ". " << name.at(i) << " Latitude:" << lat.at(i) << " Longitude:" << longg.at(i) << endl;
    }
    
    while (allow == 1){
        cout<<"What is your starting location(1:10)?";
        cin>>user;
        
        if(user >= 1 && user <= 10){
            user -=1;
            cout<<"Starting location: " << name.at(user) << " Latitude:" << lat.at(user) << " Longitude:" << longg.at(user) << endl;
            lat1=lat.at(user);
            long1=longg.at(user);
            allow = 0;
        }
        else{
            cout<<" Input does not exist please try again"<<endl;
        }
    }
    int number = 0;
    
    for(int i = 0; i < name.size(); i++){
    if(i==user){
        i+=1;
    }
    number+=1;
        cout <<number<< ". " << name.at(i) << " Latitude:" << lat.at(i) << " Longitude:" << longg.at(i) << endl;
    }
    int allow2= 1;
    int input2=0;
    while (allow2 == 1){
        cout<<"What is your destination(1:9)?";
        cin>>input2;
        if((input2 >= 1 && input2 <= 9) && (input2 <= user) ){
        
            input2 -=1;
            cout<<"Desintination: " << name.at(input2) << " Latitude:" << lat.at(input2) << " Longitude:" << longg.at(input2) << endl;
            lat2=lat.at(input2);
            long2=longg.at(input2);
            allow2 = 0;
        }
        else if((input2 >= 1 && input2 <= 9) && (input2 > user) ){
        
            cout<<"Desintination: " << name.at(input2) << " Latitude:" << lat.at(input2) << " Longitude:" << longg.at(input2) << endl;
            lat2=lat.at(input2);
            long2=longg.at(input2);
            allow2 = 0;
        }
        
        else{
            cout<<" Input does not exist please try again"<<endl;
        }
    }
    
    
    
    double miles = haversine(lat1, long1, lat2, long2,RADIUS);
    double hours = getFlightTime(lat1,long1,lat2,long2);
    cout<<endl<< "Total distance: "<< miles<<" miles"<<endl<<"Total time : "<<hours<<"hrs"<<endl;
    
    
    
    
    
    
    
    
     return 0;
}