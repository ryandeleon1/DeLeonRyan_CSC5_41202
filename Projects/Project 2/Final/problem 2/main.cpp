/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on February 9, 2016, 9:03 AM
 * Purpose: Problem 2
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    srand(static_cast<int>(time(0))); //Set random number seed
    
    //Declare Variables
    short x; 
    short guesses=0;   //Number of guesses
    int number=0;      //Number to guess
    int range=0;       //Range of random numbers to generate
    int player;        //Player'sguess
    unsigned char plyAgn; //players response to playing again
   
    do{
    //Inputs
    cout<<endl<<"Input x : ";
    cin>>x;
    
    //Calculate
    range=pow(10,x);               //Guess number Range
    number=(rand()%range)+1;       //Selecting a random number
    guesses=(log(range)/log(2))+1; //Determining number of guesses
    cout<<endl<<"I have a number between 1 and "<<range<<"."<<endl;
    cout<<"Can you guess my number? You will be "<<endl;
    cout<<"given a maximum of "<<guesses<<" guesses."<<endl;
    
    //Start the game
    while(guesses!=0 && player!=number){
        cout<<endl<<"Please type your guess."<<endl;
        cin>>player;
           if(player==number){     //Player guesses the number correctly
                cout<<"Congratulations, You guessed the number!"<<endl;
            }
           else if(player<number){ //Players guess is less than the number
                cout<<"Too low."<<endl;
                guesses-=1;
                cout<<"You have "<<guesses<<" guesses left."<<endl;      
            }
           else if(player>number){ //Players guess is greater than the number
                cout<<endl<<"Too high."<<endl;
                guesses-=1;
                cout<<"You have "<<guesses<<" guesses left."<<endl; 
            }
    }
    if(guesses==0) cout<<endl<<"Sorry you lose."<<endl;
    cout<<"Would you like to play again (y or n)?"<<endl;
    cin>>plyAgn;
    plyAgn=toupper(plyAgn);
    }while(plyAgn=='Y');
    cout<<"Thank you for playing."<<endl;
    return 0;
}

