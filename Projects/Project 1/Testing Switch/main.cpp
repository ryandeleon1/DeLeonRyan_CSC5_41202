/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on January 26, 2016, 10:50 PM
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
    

    
 //Declare Variables
    string player, opponent;
    unsigned short selOp, court;
    unsigned char selFor, CselFor;
    
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
    }while (selOp<1 || selOp>4);
 //Selecting arena     
    cout<<"One last thing, pick the arena you would like to play in."<<endl;
    cout<<"1. Staples Center"<<endl;
    cout<<"2. Madison Square Garden"<<endl;
    cout<<"3. Pauley Pavilion"<<endl;
    cout<<"4. Rucker Park"<<endl;
    cout<<"Enter the number next to the court you want."<<endl<<endl;
    cin>>court;
    switch(court){
        case 1:{
            cout<<"Welcome to Staples Center. Home of the LA Lakers."<<endl;
            break;
        }
        case 2:{
            cout<<"Welcome to Madison Square Garden. Home of the NY Knicks."<<endl;
            break;
        }
        case 3:{
            cout<<"Welcome to Pauley Pavilion. Home of the UCLA Bruins."<<endl;
            break;
        }
        case 4:{
            cout<<"Welcome to Rucker Park. Streetball Central."<<endl;
            break;
        }
        default:{
            cout<<"Please select a court."<<endl;
            break;
        }
    }     
return (0);
}