/* 
    Author: Ryan DeLeon
    Created on February 2, 2016, 8:19 AM
    Purpose: Develop a sorting routine called Mark Sort
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

// Function prototype
void fillAry(int [],int);
void prntAry (int[],int,int);
void swap(int &,int &);
void lstSmal(int[],int,int);
void mrkSrt(int [], int);

//Execution begins here
int main(int argc, char** argv) {
    
    //initialize seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare and initialize variables
    const int SIZE=100;
    int array[SIZE];
            
    //FIll array
    fillAry(array, SIZE);
    
    //Print array
    prntAry(array, SIZE, 10);
    
    //Test Swap
    swap(array[0], array[99]);
    
    //Test Finding smallest element in the list
    mrkSrt(array,SIZE);
    
    //Print array swapped
    prntAry(array, SIZE, 10);
    
    // And done!
    return 0;
}
/******************************************************************************/
//**                             Smallest in list                            **//
//Inputs: 
//  a->Array or list
//  n->Size of list
//pos->To place smallest in list that follows
//Outputs:
//  a[pos]->Smallest element in [a[pos],a[n-1]]
void lstSmal(int a[],int n,int pos){
    //loop and compare
    for (int i=pos+1; i<n; i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}
/******************************************************************************/
//**                              MArk Sort                            **//
//Inputs: 
//  n->size of lise
//  
//Outputs:
//  a->sorted array
void mrkSrt(int a[], int n){
    //loop
    for(int i=0;i<n-1;i++){
        lstSmal(a,n,i);
    }
}
/******************************************************************************/
//**                              Swap Variables                            **//
//Inputs: 
//  a->first variables
//  b->second variable
//Outputs:
//  a->first variables
//  b->second variable 
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
/******************************************************************************/
//**                              Print Array                               **//
//Inputs: 
//  a->List
//  perLine->How many list elements per line
//Outputs:
//  a->Printed List
void prntAry(int a[],int n,int perLine){
    //Loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1)) 
            cout<<endl;
    }
    cout<<endl;
}
/******************************************************************************/
//**                              Fill Array                                **//
//Inputs: 
//  a->List
//  n->Size of array
//Outputs:
//  a->List initialize with random 2 digit number
void fillAry(int a[],int n){
    //Loop and fill the array with random numbers
    for(int i=0;i<n;i++)
        a[i]=rand()%90+10;//[10,99]
}
