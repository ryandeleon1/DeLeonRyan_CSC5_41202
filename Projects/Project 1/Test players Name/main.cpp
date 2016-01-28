/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on January 26, 2016, 10:04 AM
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
    string player, opponent;
    unsigned short selOp;
    
 //Player input
    cout<<"WELCOME TO BASKETBALL ALLSTARS"<<endl;
    cout<<"Please enter the name of your player."<<endl;
    getline(cin, player);
 //Picking opponent
    cout<<"Cool, so you're "<<player<<". "<<endl;
    cout<<"Which NBA ALL-STAR would you like to go up against?"<<endl;
    do{
    cout<<"Enter the number of the opponent you choose."<<endl;
    cout<<"1. Lebron James"<<endl;
    cout<<"2. Kobe Bryant"<<endl; 
    cout<<"3. Steph curry"<<endl;
    cout<<"4. James Harden"<<endl<<endl;
    cin>>selOp;
    if(selOp==1){
        cout<<"You chose to face the King, Good Luck."<<endl<<endl;
        opponent="Lebron";
    }
    else if(selOp==2){
        cout<<"They dont call Kobe the Black Mamba for nothing, Good Luck!"<<endl<<endl;
        opponent="Kobe";
    }
    else if(selOp==3){
        cout<<"Dont let the babyface fool you, Steph is an assasin, Good Luck!."<<endl<<endl;
        opponent="Steph";
    }
    else if(selOp==4){
        cout<<"Fear the beard, Good Luck!"<<endl<<endl;
        opponent="Kevin";
    }
    else if(selOp<1 || selOp>4){
        cout<<"Sorry, I know you're scared but you gotta pick one"<<endl<<endl;
    }
    } while (selOp<1 || selOp>4);  
return (0);
}