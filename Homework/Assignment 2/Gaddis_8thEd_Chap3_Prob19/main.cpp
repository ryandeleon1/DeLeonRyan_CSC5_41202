/* 
 * Author: Ryan DeLeon
 * Created on January 13, 2016, 8:42 AM
 * Car loan Payment
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    float payment, intRate, totInt, temp;
    unsigned short numPaym, loan;
    
//Inputs
    cout<<"Input the interest rate."<<endl;
    cin>>intRate;
    cout<<"Input the desired number of payments."<<endl;
    cin>>numPaym;
    cout<<"Input the loan amount."<<endl;
    cin>>loan;
    
 //calculate
    temp=pow(1+(intRate/12),numPaym);
    payment=(((intRate/12)*temp)/(temp-1))*loan;  
    totInt=(payment*48)-10000;
    
 //Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your payments would be = $"<<payment<<" per month"<<endl;
    cout<<"The total interest you would pay = $"<<totInt<<endl;
    
    return 0;
}

