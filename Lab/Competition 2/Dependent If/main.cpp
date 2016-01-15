/* 
    Author: Ryan DeLeon
    Created on January 12, 2016, 11:40 AM
    Purpose: Dependent if grading system
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
    
    //Dependent IF
    cout<<""<<endl;
    cout<<"Dependent If"<<endl;
    cout<<"Input score."<<endl;
    cin>>score;
     if (score<60)
    cout << "F";
    else if (score< 70)
    cout << "D";
    else if (score< 80)
    cout << "C";
    else if (score< 90)
    cout << "B";
    else if (score<= 100)
    cout << "A";
    
    return 0;
   
}

