/* 
    File:   main.cpp
    Author: Ryan DeLeon
    Created on February 8, 2016, 11:03 AM
    Purpose:  Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<endl<<"Final Problem Set"<<endl;
        cout<<"Type 1 to Display Problem 1."<<endl;
        cout<<"Type 2 to Display Problem 2."<<endl;
        cout<<"Type 3 to Display Problem 3."<<endl;
        cout<<"Type 4 to Display Problem 4."<<endl;
        cout<<"Type 5 to Display Problem 5."<<endl;
        cout<<"Type 6 to Display Problem 6."<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
            case 6:{problem6();break;}
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);

    //Exit stage right
    return 0;
}

/******************************************************************************/
/************************** Problem 1 *****************************************/
/******************************************************************************/
void problem1(){
    cout<<endl<<"*************************************************"<<endl<<endl;
    cout<<endl<<"**              REVERSE YOUR NUMBER            **"<<endl<<endl;
    cout<<endl<<"*************************************************"<<endl<<endl;
    
    //Declare Variables
    unsigned int input;  //Number to flip
    short flipped=0;     //Number in reverse
    short r;             //Remainder 
    //Inputs
    cout<<"Enter the number to reverse: ";
    cin>>input;
    
    //Calculate
    if (input<=65535){         //signed short limit
    while(input!=0) {          //Loop till there is nothing left
        r=input%10;            //Find the last digit of the input 
        flipped=flipped*10+r;  //add on that last digit
        input/=10;             //take off the last digit
    }
    if (flipped>32767)         //Signed short limit
        cout<<"Your number cannot be reversed."<<endl; 
    
    //Output
    else {
        cout<<"Your number flipped = "<<flipped<<endl; 
        cout<<"The flipped number - 99 = "<<flipped-99<<endl;
    }
    }else cout<<"Your number cannot be reversed."<<endl;       
}

/******************************************************************************/
/************************** Problem 2 *****************************************/
/******************************************************************************/
void problem2(){
    cout<<endl<<"*************************************************"<<endl<<endl;
    cout<<endl<<"**               GUESS THE NUMBER              **"<<endl<<endl;
    cout<<endl<<"*************************************************"<<endl<<endl;
    
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
}
/******************************************************************************/
/************************** Problem 3 *****************************************/
/******************************************************************************/
void problem3(){
    cout<<endl<<"We are in problem 3"<<endl<<endl;
}
/******************************************************************************/
/************************** Problem 4 *****************************************/
/******************************************************************************/
void problem4(){
    cout<<endl<<"We are in problem 4"<<endl<<endl;
}
/******************************************************************************/
/************************** Problem 5 *****************************************/
/******************************************************************************/
void problem5(){
    cout<<endl<<"We are in problem 5"<<endl<<endl;
}
/******************************************************************************/
/************************** Problem 6 *****************************************/
/******************************************************************************/
void problem6(){
    cout<<endl<<"We are in problem 6"<<endl<<endl;
}