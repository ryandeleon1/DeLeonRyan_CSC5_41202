/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 6:50 pm
 * Purpose: Cost of an item several years from now       
 */

//System Libraries
#include <iostream> //I/O library
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float cost, infRate; //Cost of item, inflation rate
    int numYrs, count=0; //Number of years from now, Counter
    
    //inputting the 2 integers
    cout<<"Input the cost of the item now."<<endl;
    cin>>cost;
    cout<<"Input the number of years from now that the item will be sold."<<endl;
    cin>>infRate;
    cout<<"Input the inflation rate as a percent."<<endl;
    cin>>numYrs;

    //Conversion of the percent to a decimal
    infRate=infRate/100;
    
    //Calculate the cost of the item in the future
       while (count<numYrs){
        cost=cost+(cost*infRate);
        count++; 
       }
    //Output the results
    cout<<"The cost of the item in "<<numYrs<<" years will be $";
    cout<<cost<<endl;

    //All Done! 
    return 0;
}