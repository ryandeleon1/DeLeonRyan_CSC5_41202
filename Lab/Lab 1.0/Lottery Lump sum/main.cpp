/* 
 * Author: Ryan DeLeon
 * Created on January 11, 2016, 10:48 am
 * Purpose: Lotto Calculator    
 */
 
//System Libraries
#include <iostream>//I/O library
using namespace std;
 
//User Libraries
 
//Global Constant
 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
 
 
    //Declare Variables
    float jackpot=1.4e9f, lumpSum, aftTax, married;
 
    //Calculate the anount received
    lumpSum=.62*jackpot;
    aftTax=lumpSum*.52;
    married=aftTax*.5;
 
    //Output the results
    cout<<"The amount you would receive if you took the lump sum."<<endl;
    cout<<"before taxes=$"<<static_cast<int>(lumpSum)<<endl;
    cout<<"after taxes=$"<<static_cast<int>(aftTax)<<endl;
    cout<<"if married =$"<<static_cast<int>(married)<<endl;
 
    //All Done!
    return 0;
}
