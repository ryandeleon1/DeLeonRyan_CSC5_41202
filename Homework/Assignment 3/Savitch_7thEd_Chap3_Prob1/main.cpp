/* 
    Author: Ryan DeLeon
    Created on January 20, 2016, 8:55 AM
    Purpose: Rock paper scissors
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
     cout<<"Rock Paper Scissor Game."<<endl;
     
    //set random number seed
     srand(static_cast<unsigned int>(time(0)));
    
    //Loop until the player wants to quit
      char qstion;  //Does the player want to play again
do{ 
             
    //Declare variables
    char computr; //The computers choice
    char player;  //The players choice 
    
    //Input the players choice
     do{
         cout<<"Choose rock paper or scissors. R, P, S"<<endl;
         cin>>player;
         player=toupper(player);
                
     }while(!(player=='P'||player=='R'||player=='S'));
     
    //Output the player move
     cout<<"You played "<<player<<endl;
     
    //Computer generated move
     do{
         computr=rand()%4+80;
     }while(computr=='Q');
     
    //Output the computers move
     cout<<"The Computer played "<<computr<<endl;
     
    //results
     if(computr==player){
         cout<<"The result is a tie"<<endl<<endl;
     }else if(player=='P'&&computr=='R'){
         cout<<"You Win! :)"<<endl<<endl;
     }else if(player=='R'&&computr=='S'){
         cout<<"You Win! :)"<<endl<<endl;
     }else if(player=='S'&&computr=='P'){
         cout<<"You Win! :)"<<endl<<endl;
     }else{
         cout<<"You Lose! :("<<endl<<endl;
     }
     cout<<"Do you want to play again?"<<endl;
     cin>>qstion;
}while(toupper(qstion)=='Y');
    // And done!
    return 0;
}

