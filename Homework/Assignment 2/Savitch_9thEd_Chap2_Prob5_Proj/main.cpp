/* 
 * Author: Ryan DeLeon
 * Created on January 13, 2016, 10:06 AM
 * Determine if it is legal to hold a meeting
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    unsigned short maxCap, numPpl; //Maximum capacity , number of people
    
//Inputs
    cout<<"Input the maximum capacity of the room."<<endl;
    cin>>maxCap;
    cout<<"Input the number of people attending the meeting."<<endl;
    cin>>numPpl;
    
 //If statement/ outputs
    if (numPpl<=maxCap)
        cout<<"It is legal to hold the meeting";
    
    else {
        cout<<"The number of people is too many."<<endl;
        cout<<"You must exclude "<<numPpl-maxCap<<" people"<<endl;
    }
    return 0;
}

