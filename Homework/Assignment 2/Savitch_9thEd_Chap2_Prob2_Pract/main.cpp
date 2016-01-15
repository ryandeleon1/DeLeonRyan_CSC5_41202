/* 
 * Author: Ryan DeLeon
 * Created on January 13, 2016, 10:48 AM
 * Babylonian square roots 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    float n;        //Input the value to obtain its square root
    float r, guess; //Intermediate values which asymptotically approach sqrt(n)
    
//Inputs
    cout<<"Input the value to compute the square root of."<<endl;
    cin>>n;

//Approximate the square root first pass
    guess=n/2; //Only perform once to start
    r=n/guess;
    guess=(guess+r)/2;

 //Outputs results first pass
    cout<<"The actual square root of "<<n<<" ="<<sqrt(n)<<endl;
    cout<<"The first pass guess ="<<guess<<endl;
    
 //Approximate the square root second pass
    r=n/guess;
    guess=(guess+r)/2;
 
 //Outputs results second pass
    cout<<"The second pass guess ="<<guess<<endl;
    
 //Approximate the square root third pass
    r=n/guess;
    guess=(guess+r)/2;
 
 //Outputs results third pass
    cout<<"The third pass guess ="<<guess<<endl;
 
 //Approximate the square root fourth pass
    r=n/guess;
    guess=(guess+r)/2;
 
 //Outputs results fourth pass
    cout<<"The fourth pass guess ="<<guess<<endl;
    
 //Approximate the square root fifth pass
    r=n/guess;
    guess=(guess+r)/2;
 
 //Outputs results fifth pass
    cout<<"The fifth pass guess ="<<guess<<endl;
       
    return 0;
}

