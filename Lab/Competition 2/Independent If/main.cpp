/* 
    Author: Ryan DeLeon
    Created on January 11, 2016, 11:40 AM
    Purpose: Independent if grading system
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
   
    //Independent IF
    cout<<""<<endl;
    cout<<"Independent If"<<endl;
    cout<<"Input score."<<endl;
    cin>>score;
    if (score>=90)
        cout<<"A"<<endl;
    if (score>=80 && score<90)
        cout<<"B"<<endl;
    if (score>=70 && score<80)
        cout<<"C"<<endl;
    if (score>=60 && score<70)
        cout<<"D"<<endl;
    if (score<60)
        cout<<"F"<<endl;
    
    return 0;
   
}

