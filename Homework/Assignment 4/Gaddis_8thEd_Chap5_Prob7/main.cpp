/* 
    Author: Ryan DeLeon
    Created on January 20, 2016, 1:12 AM
    Purpose: Table of Salary doubling starting at a penny
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
    cout<<"Gaddis 8thEd Chap3 Prob7."<<endl;
    cout<<"Display a salary table."<<endl<<endl;

    //Declare variables
    unsigned int salary=1; //Salary starting at a penny
    float totPay=salary;         //Total pay by summing the salary
    
    //Loop to generate the salary table and total pay
    cout<<" Day          $Salary        $Total"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int day=2;day<=31;day++){
        salary*=2;
        totPay+=salary;\
        cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
    }
    // And done!
    return 0;
}

