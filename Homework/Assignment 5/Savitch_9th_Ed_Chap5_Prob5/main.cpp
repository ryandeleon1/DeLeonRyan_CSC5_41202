/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on February 3, 2016, 8:38 AM
 * Purpose: Converting pound and ounces to grams and kilograms
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void input(int&, int&);
void convrsn(int, int, int&, float&);
void output(int, float);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int   pounds, ounces; //user input pounds and ounces
    int   kiloG;          //total kilo grams
    float grams;          //total grams
    
//Input Data
    input(pounds, ounces);
//calculate or map inputs to outputs
    convrsn(pounds, ounces, kiloG, grams);
//Output the results    
    output(kiloG,grams);
    
//Exit stage right

    return 0;
}
/******************************************************************************/
/**                               Read inputs                                **/
/******************************************************************************/
void input(int& lbs, int& ounce){
    cout<<"How many pounds have you measured?"<<endl;
    cin>>lbs;
    cout<<"How many ounces have you measured?"<<endl;
    cin>>ounce;
}
/******************************************************************************/
/*                             Conversion                                     */
/******************************************************************************/
void convrsn(int lbs, int ounce, int& kiloG, float& grams){
//declare variables
    const float LBS2KG=1/2.2046f;  //conversion for pounds to Kg
    const float OUN2LBS=1.0/16.0f; //conversion for ounces to pounds
    float ouPound, pounds, kiloGm, deciKg;                

    
//calculation of pounds and ounces to Kg
    ouPound=ounce*OUN2LBS;
    pounds=lbs+ouPound;
    kiloGm=pounds*LBS2KG;
    
//calculation of separation of Kg and g
    deciKg=kiloGm-static_cast<int>(kiloGm);
    grams=deciKg*1000;
    kiloG=kiloGm;
    
}
//******************************************************************************
//                                Output
//******************************************************************************
void output(int kiloG, float grams){
    
        cout<<"The number of Kg = "<<kiloG<<endl;
        cout<<"The number of g = "<<grams<<endl;
}