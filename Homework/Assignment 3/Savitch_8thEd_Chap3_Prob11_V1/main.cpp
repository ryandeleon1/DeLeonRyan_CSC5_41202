/* 
    Author: Ryan DeLeon
    Created on January 19, 2016, 8:35 AM
    Purpose: Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables for e to the x
    const unsigned char nTerms=13;
    float etox=1,x; //e^x
    //Input x
    cout<<"Input the x of e to the x computation."<<endl;
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=nTerms;n++){
        
        //Declare and initialize variables
        unsigned int factN=1;
        //Calculate the factorial
        for (int i=1;i<=n;i++){
            factN*=i;
        }
    //Calculate e^x with the above factorial
    etox+=pow(x,n)/factN;
    } 
    //Output the results
    cout<<"The exact value of e^"<<x<<"       = "<<exp(x)<<endl;
    cout<<"The approximate value of e^"<<x<<" = "<<etox<<endl;
    
    // And done!
    return 0;
}

