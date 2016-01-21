/* 
    Author: Ryan DeLeon
    Created on January 20, 2016, 10:37 AM
    Purpose: Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    cout<<"Gaddis 8thEd Chap3 Prob12."<<endl;
    cout<<"Display a Temperature Table."<<endl;

    //Declare variables
    float slope=5.0f/9;            //slope of line
    char intrcpt=-32;              //y-intercept
    unsigned char c1=0,c2=100,f1=32,f2=212; //Data points of freezing and boiling
    
    //Loop to generate the degree Celsius
    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int f=f1;f<=f2;f++){
        float ceq=slope*(f+intrcpt);
        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
    }
    // And done!
    return 0;
}

