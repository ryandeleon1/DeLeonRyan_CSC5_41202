/* 
 * Author: Ryan DeLeon
 * Created on January 9, 2016, 12:57 pm
 * Purpose: Adding and multiplying integers       
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
    int int1, int2; //First and second integers
    int sum, prod; // Sum and product of the integers
    
    //inputting the 2 integers
    cout<<"Input the first integer."<<endl;
    cin>>int1;
    cout<<"Input the second integer."<<endl;
    cin>>int2;
    
    //Calculate the sum and product
    prod=int1*int2;
    sum=int1+int2;
    
    //Output the results
    cout<<"The sum of your two integers is = "<<sum<<endl;
    cout<<"The product of your two integers is = "<<prod<<endl;

    //All Done! 
    return 0;
}