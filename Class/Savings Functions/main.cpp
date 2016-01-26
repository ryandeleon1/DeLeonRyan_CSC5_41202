/* 
    Author: Ryan DeLeon
    Created on January 26, 2016, 8:45 AM
    Purpose: Variations on a Savings theme
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
const char PERCENT=100; //CONVERT DECIMAL TO PERCENT

// Function prototype
float save1(float,float,int);

//Execution begins here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    float pv=random()%9001+1000; //random value [1,000,10,000]
    float intRate=rand()%11+5; //random value [5,15]  
    char nComp=rand()%16; //random value [0,15]

    //Output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value   = $"<<pv<endl;
    cout<<"The interest rate   =  "<<intRate<<"%"<<endl;
    cout<<"The number of years =  "<<static_cast<int>(nComp)<<endl;
    
    //Calculate or map inputs to outputs
    
    //0utput the values
    cout<<"The savings using power function = $"<<save1=();
    // And done!
    return 0;
}

/******************************************************************************/
//                                 SAVE 1                                     //
//Inputs: p->present value $, i-> interest rate %, n->Number of compounding periods
//Outputs: fv->Future value $
//Note using power functions
float save1(float p,float i,int n){
   return  p*pow((1+i),n);
}