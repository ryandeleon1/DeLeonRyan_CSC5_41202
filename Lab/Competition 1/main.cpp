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
    cout<<"Test Scores"<<endl;   
    cout<<"Input first score."<<endl;
    cin>>score1;
    cout<<"Input second score."<<endl;
    cin>>score2;
    cout<<"Score 1 is "<<score1<<" and it "<<(score1>=70?"Passed":"Failed")<<endl;
    cout<<"Score 2 is "<<score2<<" and it "<<(score2>=70?"Passed":"Failed")<<endl;
    
    //Declare and initialize variables
   int payRate=10, hrsWrkd1,hrsWrkd2,ovrTime=15;
   
    //Outputs
    cout<<""<<endl;
    cout<<"Paycheck"<<endl;
    cout<<"Input hours worked for week 1."<<endl;
    cin>>hrsWrkd1;
    cout<<"Input hrsWrked for week 2"<<endl;
    cin>>hrsWrkd2;
    cout<<"In week 1 you worked "<<hrsWrkd1<<" hours, and made $"<<(hrsWrkd1>=40?ovrTime*hrsWrkd1:payRate*hrsWrkd1)<<endl;
    cout<<"In week 2 you worked "<<hrsWrkd1<<" hours, and made $"<<(hrsWrkd2>=40?ovrTime*hrsWrkd2:payRate*hrsWrkd2)<<endl;
    
    // And done!
    return 0;
    
    // And done!
    return 0;
}

