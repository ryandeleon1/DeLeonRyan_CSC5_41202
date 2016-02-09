/* 
    File:   main.cpp
    Author: Ryan DeLeon
    Created on February 9, 2016, 8:20 AM
    Purpose: Filling a vector
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
#include <vector>   //Dynamic array element
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void fillVecEv(vector<int> &);
void prntVecEv(vector<int> &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Getting the size
    int size=0;
    cout<<"What is the size of the vectors?"<<endl;
    cin>>size;        
    vector<int> v1(size);
    
    //Fill the array with random 2 digit numbers
    fillVecEv(v1);
    
    //Print the array
    prntVecEv(v1);
    
    //Exit stage right
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Vector
//Inputs:
//  v->List
//Outputs:
//  a->Printed List
//******************************************************************************
void prntVecEv(vector<int> &v){
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Fill Vector
//Inputs:
//  v->List
//  n->Size of the array
//Outputs:
//  a->List initialized with random 2 digit numbers
//******************************************************************************
void fillVecEv(vector<int> &v){
    //Loop and fill the array with random numbers
    for(int i=0;i<v.size();i++){
        v[i]=rand()%9000+1000;//[1000,9999]
    }
}