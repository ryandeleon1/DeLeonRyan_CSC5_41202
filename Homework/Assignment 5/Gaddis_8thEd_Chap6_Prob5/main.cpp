/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Purpose: Retail Price calculator
 * Created on February 4, 2016, 10:11 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float retail(unsigned int, unsigned int);

//Begin Execution
int main(int argc, char** argv) {
    //Declaration and Initialization
    short value;
    unsigned short cost, markUp; 

    //Inputs
    do { 
        cout<<"Enter the wholesale cost of the product: $";
        cin>>value;
    } while (value < 0);
    cost=value; 
    do { 
        cout<<"Enter the markup percentage:     ";
        cin>>value;
    } while (value<0);
    markUp=value; 
    
    //Calculate and Output Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The retail value is $"<<retail(cost,markUp);

    //All done
    return 0;
}


/******************************************************************************/
/**                        Calculate Retail Price                            **/
/******************************************************************************/
float retail(unsigned int cost, unsigned int markUp) {
    return cost*(1.0f+static_cast<float>(markUp)/100);
}