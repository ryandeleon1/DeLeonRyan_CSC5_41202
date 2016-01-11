/* 
    Author: Ryan DeLeon
    Created on January 11, 2016, 11:40 AM
    Purpose: Determine if pass or fail
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
   int score1, score2;
   
    //Outputs
    cout<<"Input first score."<<endl;
    cin>>score1;
    cout<<"Input second score."<<endl;
    cin>>score2;
    cout<<"Score 1 is "<<score1<<" and it "<<(score1>=70?"Passed":"Failed")<<endl;
    cout<<"Score 2 is "<<score2<<" and it "<<(score2>=70?"Passed":"Failed")<<endl;
    
    // And done!
    return 0;
}

