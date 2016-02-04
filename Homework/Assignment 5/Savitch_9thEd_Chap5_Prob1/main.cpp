/* 
    File:   main.cpp
    Author: Ryan DeLeon
    Created on February 2nd, 2016, 8:20 AM
    Purpose:  Average and Standard Deviation
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void getNums(int[], int);
void prntAry(int[],int);
float average(int[], int);
float stdDev(int[], float, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    const int SIZE=4;
    int array[SIZE];
    
    //Fill the array with random 2 digit numbers
    getNums(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE);
    
     float avrg;
    avrg=average(array,SIZE);
    
    //output the average
    cout<<endl<<"The average of these values = "<<avrg<<endl;
    
   
    
    //Output the standard deviation
    cout<<endl<<"The standard deviation of these values = "
            <<setprecision(2)<<fixed<<showpoint<<stdDev(array,avrg,SIZE)<<endl;
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Array

//******************************************************************************
void prntAry(int a[],int n){
    //Loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Fill Array
//******************************************************************************
void getNums(int a[], int n=4){
    //Loop and fill the array with random numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%99;//[1,99]
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Average
//******************************************************************************
float average(int a[],int n=4){
    //Declare Variables
    float avg;
    int sum;
    //Loop and fill the array with random numbers
    for(int i=0;i<n;i++){
        sum+=a[i];
    }avg=static_cast<float>(sum)/n;
    return avg;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Standard Deviation
//******************************************************************************
float stdDev(int a[], float avg, int n=4){
    //Declare Variables
    float stdDevi;
    float sumV=0;
    float var=0;
    
    //variance
    for(int i=0;i<n;i++)
        sumV+=pow((a[i]-avg),2);
    var=(sumV)/n;          
    stdDevi=sqrt(var);
    return stdDevi;
}
