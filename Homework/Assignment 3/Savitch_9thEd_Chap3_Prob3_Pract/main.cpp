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
    unsigned char answer;
    unsigned int month, day; //Month and day of birthday
    bool reDsply;
    cout<<endl<<"Savitch 9thEd Chap3 Prob3."<<endl;
    cout<<"Zodiac sign indicator."<<endl;
        //input the users birth date
        cout<<"What is the month of your birthday? (Enter as a number 1-12)"<<endl;
        cin>>month;
        cout<<"Now enter the day."<<endl;
        cin>>day;
        
        //determine the sign
        switch(month){
            case(12):{
            if (day>=22) cout<<"Your zodiac sign is Capricorn."<<endl;
            else cout<<"Your zodiac sign is Sagittarius"<<endl; 
            break;}
            case(1):{
            if (day>=20){ cout<<"Your zodiac sign is Aquarius."<<endl;}
            else cout<<"Your zodiac sign is Capricorn."<<endl;
            break;}
            case(2):{
            if (day>=19) cout<<"Your zodiac sign is Pisces."<<endl;
            else cout<<"Your zodiac sign is Aquarius."<<endl;
            break;}
            case(3):{
            if (day>=21) cout<<"Your zodiac sign is Aries."<<endl;
            else cout<<"Your zodiac sign is Pisces."<<endl; 
            break;}
            case(4):{
            if (day>=20){ cout<<"Your zodiac sign is Taurus."<<endl;}
            else cout<<"Your zodiac sign is Aries."<<endl;
            break;}
            case(5):{
            if (day>=21) cout<<"Your zodiac sign is Gemini."<<endl;
            else cout<<"Your zodiac sign is Taurus."<<endl;
            break;}
            case(6):{
            if (day>=22) cout<<"Your zodiac sign is Cancer."<<endl;
            else cout<<"Your zodiac sign is Gemini."<<endl; 
            break;}
            case(7):{
            if (day>=23){ cout<<"Your zodiac sign is Leo."<<endl;}
            else cout<<"Your zodiac sign is Cancer."<<endl;
            break;}
            case(8):{
            if (day>=23) cout<<"Your zodiac sign is Virgo."<<endl;
            else cout<<"Your zodiac sign is Leo."<<endl;
            break;}
            case(9):{
            if (day>=23) cout<<"Your zodiac sign is Libra."<<endl;
            else cout<<"Your zodiac sign is Virgo."<<endl; 
            break;}
            case(10):{
            if (day>=23){ cout<<"Your zodiac sign is Scorpio."<<endl;}
            else cout<<"Your zodiac sign is Libra."<<endl;
            break;}
            case(11):{
            if (day>=22) cout<<"Your zodiac sign is Sagittarius."<<endl;
            else cout<<"Your zodiac sign is Scorpio."<<endl;
            break;}
        }
    
    
    // And done!
    return 0;
}

