/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 10:15 AM
 * Babylonian square roots using a loop 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    float quant=.1f; //A value to add repeatedly
    float sum=0;     //The result of repetitive addition
    float nloops=10000000; //Number of times to loop
    float answer; //The computed answer
//Inputs
    for(int i=1;i<=nloops;i++){
        sum+=quant;
    }

//Calculate  what answer should be
    answer=nloops*quant;
  
 //Outputs results
    cout<<"The product answer = "<<answer<<endl;
    cout<<"The sum answer     = "<<sum<<endl;
    cout<<"The percent error  = "<<(answer-sum)/answer*100<<"%"<<endl;
    return 0;
}

