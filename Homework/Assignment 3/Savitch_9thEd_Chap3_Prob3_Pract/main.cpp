/* 
    Author: Ryan DeLeon
    Created on January 21, 2016, 11:00 AM
    Purpose: Astrology signs
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned char month, day, answer; //Month and day of birthday
    bool reDsply=true;
    cout<<endl<<"Savitch 9thEd Chap3 Prob3."<<endl;
    cout<<"Zodiac sign indicator."<<endl;
    
    do{
        //input the users birth date
        cout<<"What is the month of your birthday? (Enter as a number 1-12)"<<endl;
        cin>>month;
        cout<<"Now enter the day."<<endl;
        cin>>day;
        
        //determine the sign
        if (month=12){
            if (day>=22) cout<<"Your zodiac sign is Capricorn."<<endl;
            else cout<<"Your zodiac sign is Sagittarius"<<endl;      
    }else if (month=1){
        if (day>=20){ cout<<"Your zodiac sign is Aquarius."<<endl;}
        else cout<<"Your zodiac sign is Capricorn."<<endl;
    }else if (month==2){
        if (day>=19) cout<<"Your zodiac sign is Pisces."<<endl;
        else cout<<"Your zodiac sign is Aquarius."<<endl;
    }else if (month==3){
        if (day>=21) cout<<"Your zodiac sign is Aries."<<endl;
        else cout<<"Your zodiac sign is Pisces."<<endl;
    }else if (month==4){
        if (day>=20) cout<<"Your zodiac sign is Taurus."<<endl;
        else cout<<"Your zodiac sign is Aries."<<endl;
    }
        cout<<"Would you like to try again?"<<endl;
        cin>>answer;
        if (answer='y')
            reDsply=true;
        else 
            reDsply=false;
    }while (reDsply);
    
    
    // And done!
    return 0;
}

