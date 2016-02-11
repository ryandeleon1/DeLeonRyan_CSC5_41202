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
void fillVecOd(vector<int> &);
void prntVecOd(vector<int> &);

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int size=0;
    int row=0;
    int array[row][2];
    //Getting the size of the vectors
    cout<<"What is the size of the vectors?"<<endl;
    cin>>size;        
    vector<int> v1(size);
    vector<int> v2(size);
    
    //Fill the vectors with random 4 digit numbers
    fillVecEv(v1);
    fillVecOd(v2);
    
    //Print the vectors
    cout<<endl<<"Using vectors."<<endl;
    cout<<"Evens";
    prntVecEv(v1);
    cout<<endl<<"Odds";
    prntVecEv(v2);
    
    //Getting the size of the array
    cout<<endl<<"How many rows for the array?"<<endl;
    cin>>row;      
    
    //Print the Array
    cout<<"Using Array."<<endl;
    cout<<"Evens  Odds"<<endl;
    
    for(int i=0; i<row; i++){   //Loop for the rows
        array[i][0] =(rand()%9000+1000)/2*2; //Evens first column
        array[i][1] =((rand()%9000+1000)/2*2)+1;  //odds second column    
    }
    for(int i=0; i<row; i++){ 
            for(int j=0; j<2; j++) cout<<array[i][j]  << "   ";
            cout << endl;
    }
    //Exit stage right
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Vector
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
//******************************************************************************
void fillVecEv(vector<int> &v){
    //Loop and fill the array with random numbers
    for(int i=0;i<v.size();i++){
        v[i]=(rand()%9000+1000)/2*2;//[1000,9999] even only
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Vector
//******************************************************************************
void prntVecOd(vector<int> &v){
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Fill Vector
//******************************************************************************
void fillVecOd(vector<int> &v){
    //Loop and fill the array with random numbers
    for(int i=0;i<v.size();i++){
        v[i]=((rand()%9000+1000)/2*2)+1;//[1000,9999] odd only
    }
}