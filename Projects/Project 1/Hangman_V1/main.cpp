/* 
    Author: Ryan DeLeon
    Created on January 26, 2016, 11:13 AM
    Purpose: Testing the unknown output
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Heading
    cout<<"***********************************************"<<endl;
    cout<<"**             WELCOME TO HANGMAN            **"<<endl;
    cout<<"**           Created By: Ryan DeLeon         **"<<endl;
    cout<<"**                Lets Begin!                **"<<endl;
    cout<<"***********************************************"<<endl<<endl;
    //Declare and initialize variables
    string word;     //The word the player has to guess
    string unknowns; //The unknown spaces
    char guess;      //The guess
    bool inWord
    
    //Input the word to guess
    cout<<"Input the word you would like the person to guess."<<endl;
    cin>>word;
    
    //Output the number of letters and the unknown spaces
    cout<<endl<<"You have to guess a "<<word.length()<<" letter word."<<endl;
    
    for(int i=0; i<word.length(); i++){
        unknowns += "?";
    }
    
    cout<<unknowns<<endl;
    
    //Guessing
    do{
        if (word.find(guess) = 1)
            unkowns.replace(word.find(guess));
        cout<<unknowns<<endl;
    }
            
    
    //0utput the values
    
    
    // And done!
    return 0;
}

