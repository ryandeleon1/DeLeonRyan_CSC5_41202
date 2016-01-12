/* 
    Author: Ryan DeLeon
    Created on January 11, 2016, 11:40 AM
    Purpose: Switch grading system
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
   
    //Switch
    cout<<""<<endl;
    cout<<"Switch"<<endl;
    cout<<"Input score."<<endl;
    cin>>score;
    switch (score/10%10){
        case 0: cout<<"A"<<endl;
        break;
        case 9: cout<<"A"<<endl;
            break;
        case 8: cout<<"B"<<endl;
            break;
        case 7: cout<<"C"<<endl;
            break;
        case 6: cout<<"D"<<endl;
            break;
        default: cout<<"F"<<endl;
            break;
    }
    return 0;
   
}

