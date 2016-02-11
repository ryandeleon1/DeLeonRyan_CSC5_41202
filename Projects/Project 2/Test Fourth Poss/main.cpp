/* 
    File:   main.cpp
    Author: Ryan DeLeon
    Created on February 9, 2016, 8:20 PM
    Purpose: Testing the court
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void fillCrt(int [],int);
void prntCrt(int [],int);
bool assgnOp(int [], short, short);
//Execution Begins Here
int main(int argc, char** argv) {

    //Declare variables
    const int SIZE=6;
    int court[SIZE];
    short selOp;
    short loc;
    
    cout<<"Select Opponent : ";
    cin>>selOp;
    
    //Fill the array with random 2 digit numbers
    fillCrt(court,SIZE);
    
    //Print the array
    prntCrt(court,SIZE);
    
    cout<<"Select the location : ";
    cin>>loc;
    
    if (assgnOp(court, selOp, loc)){
        cout<<endl<<"you win"<<endl;
    }
    else cout<<endl<<"you lose"<<endl;
    
    //Exit stage right
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Array
//******************************************************************************
void prntCrt(int crt[],int n){
    cout<<endl;
    cout<<" __________________________________"<<endl;
    cout<<"|    |     |           |      |    |"<<endl;
    cout<<"|  "<<crt[1]<<" |     |           |      | "<<crt[5]<<"  |"<<endl;
    cout<<"|    |     |           |      |    |"<<endl;
    cout<<"|    |     |___________|      |    |"<<endl;
    cout<<"|    \\      \\          /      /    |"<<endl;
    cout<<"|     \\      \\        /      /     |"<<endl;
    cout<<"|      \\      \\______/      /      |"<<endl;
    cout<<"|     "<<crt[2]<<"  \\                /  "<<crt[4]<<"     |"<<endl;
    cout<<"|          \\            /          |"<<endl;
    cout<<"|            \\________/            |"<<endl;
    cout<<"|                 "<<crt[3]<<"                |"<<endl;
    cout<<"|__________________________________|"<<endl;        
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Fill Array
//******************************************************************************
void fillCrt(int crt[],int n){
    //Loop and fill the array with random numbers
    for(int i=1;i<n;i++){
        crt[i]=i;//[10,99]
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Assign opponent a different location
//******************************************************************************
bool assgnOp(int crt[], short selOp, short loc){
    if (selOp==1 && loc==1) return true;
    else if (selOp==2 && loc==2) return true;
    else if (selOp==3 && loc==3) return true;
    else if (selOp==4 && loc==4) return true;
    else return false;
}

