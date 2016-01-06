/* 
 * Author: Ryan DeLEon
 * Created on January 6, 2016, 11:35 am
 * Purpose:  Number of people to rob a bank         
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const unsigned short wtBill=1;//Weight of a bill in grams
const float cnvGlbs=1.0f/453.5f;//Conversion of grams to pounds

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int amtStl;  //Amount to steal
    unsigned short denom; //Denomination of bill
    unsigned  char wtPrsn=80,nPerps; //weight a person can carry, Number of perpatrators
    
    //Inputs
    cout<<"How much money would you like to aquire?"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination?"<<endl;
    cin>>denom;
    
    //Calculate the number of fellow perps
    nPerps=cnvGlbs*amtStl*wtBill/denom/wtPrsn;
    
    
    //Output the results
    cout<<"Amount Deisred                  = $"<<amtStl<<endl;
    cout<<"Denomination Desired            = $"<<denom<<endl;
    cout<<"Number of Individuals required  = "<<static_cast<int>(nPerps)<<endl;

    //All Done!
    return 0;
}