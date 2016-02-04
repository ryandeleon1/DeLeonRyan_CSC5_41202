/* 
    File:   main.cpp
    Author: Ryan DeLeon
    Created on February 2nd, 2016, 8:20 AM
    Purpose:  Converting feet and inches to meters and centimeters
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void inputs(int &, int &);
float conv1(int,int);
float conv2(float);
void outputs(float);
//Execution Begins Here
int main(int argc, char** argv) {
    float totFeet,totMeters;
    int feet, inches;
    //Call inputs function
    inputs(feet,inches);
    
    //Call conversion 1
    totFeet=conv1(feet,inches);
    
    //Call conversion 2
    totMeters=conv2(totFeet);
    
    //call output
    outputs(totMeters)  ;
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Inputting Numbers 
//******************************************************************************
void inputs(int &feet,int &inches){
    //Loop and fill the array with random numbers
    cout<<"Enter the amount of feet : ";
    cin>>feet;
    cout<<"Enter the amount of inches : ";
    cin>>inches;
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                    Converting step 1
//******************************************************************************
float conv1(int feet, int inches){
    //putting the amount of feet as a decimal
    float totFeet=0;
    totFeet=(static_cast<float>(inches)/12)+feet;
    return totFeet;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                    Converting step 2
//******************************************************************************
float conv2(float totFeet){
    float totMeters;
    totMeters=totFeet*.3048;
    return totMeters;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                    Outputs
//******************************************************************************
void outputs(float totMeters){
    cout<<totMeters<<endl;
}