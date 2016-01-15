/* 
    Author: Ryan DeLeon
    Created on January 11, 2016, 11:40 AM
    Purpose: Ternary operator grading system
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
   int score;
   
    //Outputs
    cout<<"Ternary Operator"<<endl;   
    cout<<"Input score."<<endl;
    cin>>score;
    cout<<(score>=90?"A":(score>=80?"B":(score>=70?"C":(score>=60?"D":"F"))))<<endl;
    
    return 0;
   
}

