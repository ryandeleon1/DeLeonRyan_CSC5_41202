/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on January 27, 2016, 10:04 AM
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
    unsigned short guesTyp, ranTyp;     
    unsigned short ppts=1, opts=1; //Players and opponents points 
    
    

    //Third Possession
    if (ppts==1&&opts==1){
        cout<<"Final Possession. Next score wins!"<<endl;
        cout<<"For this possession you have to guess what type of shot"<<endl
                <<"you think he is going to take."<<endl;
        cout<<"Enter 2 if you think he will take a two pointer."<<endl;
        cout<<"Enter 3 if you think he will take a three pointer."<<endl;
        cin>>guesTyp;
        //Randomly generate a 2 or 3
        do{
        ranTyp=rand()%3+1;
        }while(ranTyp==1);
        if (guesTyp==ranTyp){
            ppts++;
            cout<<"You guessed right and blocked the shot! Then scored the final Basket!"<<endl;
        }else if (guesTyp==2 && ranTyp==3){
            opts++;
            cout<<"Oh No! You guessed wrong and started backing up expecting a drive"<<endl;
            cout<<"but he shot it from outside and scored."<<endl<<endl;
        }else if (guesTyp==3 && ranTyp==2){
            opts++;
            cout<<"Oh No! You guessed wrong and jumped expecting a shot"<<endl;
            cout<<"but he pump faked and scored an easy layup."<<endl<<endl;
        }
    }
    cout<<"Random number = "<<ranTyp<<endl;
    cout<<"Guess number = "<<guesTyp<<endl;
return (0);
}