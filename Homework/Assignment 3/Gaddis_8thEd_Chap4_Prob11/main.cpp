/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Purpose: Addition problem for a student to perform
 * Created on January 22, 2016, 6:30 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned short num1, num2, answer, stuAns;
    
    //Set random number seed
    srand(static_cast<int>(time(0))); 
    
    num1=rand()%1000; //Generate a random value [0,1000]
    num2=rand()%1000; //Generate a random value [0,1000]
    
    answer = num1 + num2; //Set the answer to num1 + num2
    
    //Problem Information
    cout<<"Gaddis 8th Ed Chap4 Prob11."<<endl;
    cout<< "Adding problems for students"<<endl<<endl;
    
    //Input Data
    cout << "Try to answer the following problem." << endl;
    cout << num1 << " + " << num2 << " = ";
    cin >> stuAns;
    
    //Output Results
    if(stuAns==answer){ //If the input answer is correct
        cout << "That is Correct" << endl;
    }
    else{ //If the input answer is incorrect
        cout << "That is incorrect" << endl;
    }
    
    //Exit
    return 0;
}
