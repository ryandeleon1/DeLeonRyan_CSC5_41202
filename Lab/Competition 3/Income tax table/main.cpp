/* 
 * Author: Ryan DeLeon
 * Created on January 13, 2016, 11:55 AM
 * Calculate the amount of income tax paid
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables   
    float gincome, nincome; //gross and net income
    int numDep, redTax; //number of dependents
//Inputs
    cout<<"Input your gross income."<<endl;
    cin>>gincome;
    cout<<"Input number of dependents."<<endl;
    cin>>numDep;
    //calculate reduced tax by dependents
    redTax=750*numDep;
  
    if (gincome<5000)
        cout<<"Your net income =$"<<gincome+redTax;
    else if (gincome>=5000 && gincome<10000)
        cout<<"Your net income =$"<<gincome-(gincome-5000)*.1+redTax;
    else if (gincome>=10000 && gincome<15000)
        cout<<"Your net income =$"<<gincome-(gincome-10000)*.15-500+redTax;
    else if (gincome>=15000 && gincome<20000)
        cout<<"Your net income =$"<<gincome-(gincome-15000)*.2-1250+redTax;
    else if (gincome>=20000 && gincome<25000)
        cout<<"Your net income =$"<<gincome-(gincome-20000)*.25-2250+redTax;        
    else if (gincome>=25000 && gincome<30000)
        cout<<"Your net income =$"<<gincome-(gincome-25000)*.3-3500+redTax; 
    else if (gincome>=30000 && gincome<35000)
        cout<<"Your net income =$"<<gincome-(gincome-30000)*.35-5000+redTax; 
    else if (gincome>=35000 && gincome<40000)
        cout<<"Your net income =$"<<gincome-(gincome-35000)*.4-6750+redTax; 
    return 0;
}

