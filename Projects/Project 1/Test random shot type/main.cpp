/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on January 27, 2016, 10:50 PM
 */

//User Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

//System Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here

int main(){
 //Header
    cout<<"*************************************************************"<<endl;
    cout<<"**                    BASKETBALL ALL STARS                 **"<<endl;
    cout<<"**                  Created By:  Ryan DeLeon               **"<<endl;
    cout<<"*************************************************************"<<endl;
    
 //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
 //Declare Variables
    string player, oponent;
    unsigned short guesTyp, actTyp;
    bool force=true;       
    int ppts=2, opts=1;
 //Player input
    cout<<"WELCOME TO BASKETBALL ALLSTARS"<<endl;
    cout<<"Please enter the name of your player."<<endl;
    getline(cin, player);
 //Picking opponent
    cout<<endl<<"Cool, so you're "<<player<<". "<<endl;

        cout<<"Enter 2 if you think he will take a two pointer."<<endl;
        cout<<"Enter 3 if you think he will take a three pointer."<<endl;
        cin>>guesTyp;
        //Randomly generate a 2 or 3
        do{
        actTyp=rand()%3+1;
        }while(actTyp==1);
        cout<<"Player guess = "<<guesTyp<<endl;
        cout<<"Random shot  = "<<actTyp<<endl;
return (0);
}