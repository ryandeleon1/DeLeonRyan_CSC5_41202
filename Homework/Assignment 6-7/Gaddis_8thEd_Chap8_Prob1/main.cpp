/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Purpose: Account Validation
 * Created on February 5, 2016, 9:32 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool library(const int[], int, int);

//Begin Execution
int main(int argc, char** argv) {
    //Declaration and Initialization
    const int numAcnts = 15; //Number of accounts
    const int acntNum[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 
                            1302850, 8080152, 4562555, 5552012, 5050552,
                            7825877, 1250255, 1005231, 6545231, 3852085 }; //Valid account numbers
    int userAcnt;
    
    //Inputs
    cout << "Enter the account number: ";
    cin >> userAcnt;
    
    //Outputs
    cout<<"Your account number is  "<<(library(acntNum,numAcnts,userAcnt)?"Valid.":"Invalid")<<endl;
    
    //Exit
    return 0;
}

/******************************************************************************/
/**                                Contains***********************************/
/******************************************************************************/
bool library(const int array[], int length, int check){
    for(int i = 0;i<length;++i){
        if(array[i]==check){
            return true;
        }
    }
    return false;
}