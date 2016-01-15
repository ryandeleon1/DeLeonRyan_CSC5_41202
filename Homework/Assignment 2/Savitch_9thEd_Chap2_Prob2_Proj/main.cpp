/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 5:50 PM
 * Retroactive pay raise of 7.6%
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    float oldSal, newSal, retPay, newMon; //Old annual salary, New annual Salary, New monthly Salary, Retroactive pay owed
    
//Inputs
    cout<<"Input your previous annual salary."<<endl;
    cin>>oldSal;
    
//Calculate
    retPay=(oldSal/12)*.076*6;
    newSal=oldSal+(oldSal*.076);
    newMon=newSal/12;
    
 
            
 //Outputs results
    cout<<"Your new annual salary is $"<<newSal<<endl;
    cout<<"Your new monthly salary is $"<<newMon<<endl;
    cout<<"The retroactive pay owed to you is $"<<retPay<<endl;
    
    return 0;
}

