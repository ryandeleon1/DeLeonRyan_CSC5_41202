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
    cout<<endl<<"We are in problem 1"<<endl<<endl;
    //Declare Variables
    unsigned short input; //Number to flip
    short flipped=0;      //Number in reverse
    short r;              //Remainder 
    //Inputs
    cout<<"Enter the number to reverse: ";
    cin>>input;
    
    //Calculate
    if (input<=65535){
    while(input!=0) {
        r=input%10;
        flipped=flipped*10+r;
        input/=10;
    }
    //Output
    cout<<"Your number flipped = "<<flipped<<endl; 
    }else cout<<"Your number cannot be reversed.";       
}

/******************************************************************************/
/************************** Problem 2 *****************************************/
/******************************************************************************/
void problem2(){
    cout<<endl<<"We are in problem 2"<<endl<<endl;
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