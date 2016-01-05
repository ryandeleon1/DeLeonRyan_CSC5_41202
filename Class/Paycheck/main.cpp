/* 
    Author: Ryan DeLeon
    Created on January 5, 2016, 9:30 AM
    Purpose: Calculate Paycheck
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
    unsigned char hrsWrkd=32; //Hours Worked
    float payRate=14.0f;        //Pay Rate in $'s/hour
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;
    
    //0utput the results
    cout<<"Pay Rate     = "<<payRate<<"$/hr" <<endl;
    cout<<"Hours Worked = "<<static_cast<int>(hrsWrkd)<<" hrs"<<endl;
    cout<<"Pay Check    = $"<<payChk<<endl;
           
    
    // And done!
    return 0;
}

