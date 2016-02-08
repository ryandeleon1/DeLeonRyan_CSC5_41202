/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Purpose: How far will it fall
 * Created on February 4, 2016, 8:41 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=9.81f;

//Function Prototypes
float fallDist(short);

//Begin Execution
int main(int argc, char** argv) {
    
    //Calculate and Output results
    cout<<fixed<<setprecision(1)<<showpoint;
    for(int i=1; i<=10;++i){ 
        cout<<"If you fall for "<<i<<" seconds you will fall "<<fallDist(i)<<" meters."<<endl;
    }
    
    //Exit
    return 0;
}

/******************************************************************************/
/**                           Falling Distance                               **/
/******************************************************************************/
float fallDist(short time){
    return 0.5f*GRAVITY*pow(time,2);
}
