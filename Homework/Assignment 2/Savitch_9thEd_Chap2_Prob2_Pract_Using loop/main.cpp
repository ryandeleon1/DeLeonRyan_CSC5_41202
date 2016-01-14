/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 10:15 AM
 * Babylonian square roots using a loop 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    float n;        //Input the value to obtain its square root
    float r, guess; //Intermediate values which asymptotically approach sqrt(n)
    float tol=.001f; //Accuracy of results
    
//Inputs
    cout<<"Input the value to compute the square root of."<<endl;
    cin>>n;

//Approximate the square root
    guess=n/2; //Only perform once to start
    do{
    r=n/guess;
    guess=(guess+r)/2;
    }while (abs((r-guess)/guess)*100>tol);
 //Outputs results first pass
    cout<<"The actual square root of "<<n<<" = "<<sqrt(n)<<endl;
    cout<<"The r     = "<<r<<endl;
    cout<<"The guess = "<<guess<<endl;   
    return 0;
}

