/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 10:15 AM
 * Babylonian square roots using a loop 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    float n;        //Input the value to obtain its square root
    float r, guess; //Intermediate values which asymptotically approach sqrt(n)
    float tol=.001f; //Accuracy of results
    int counter=0; //counts the number of loops to get to answer
    
//Inputs
    cout<<"Input the value to compute the square root of."<<endl;
    cin>>n;

//Approximate the square root
    guess=n/2; //Only perform once to start
    do{
    r=n/guess;
    guess=(guess+r)/2;
    counter++;
    }while (abs((r-guess)/guess)*100>tol); //end the loop when close enough
    
 //Outputs results
    cout<<"The actual square root of "<<n<<" = "<<sqrt(n)<<endl;
    cout<<"The r     = "<<r<<endl;
    cout<<"The guess = "<<guess<<endl; 
    cout<<"The loop executed "<<counter<< " times."<<endl;
    return 0;
}

