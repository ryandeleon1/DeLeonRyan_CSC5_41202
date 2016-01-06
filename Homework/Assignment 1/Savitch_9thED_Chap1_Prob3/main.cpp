/* 
 * Author: Ryan DeLEon
 * Created on January 6, 2016, 10:42 am
 * Purpose:  Quarters Nickels Dimes         
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvQrts=25;//Cents per quarter
const char cnvDime=10;//Cents per dime
const char cnvNikl=5; //Cents per nickel
const char cnvPnDl=100; //Conversion from pennies to dimes

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nQrts,nNikl,nDime;  //Number of Q, N, D
    unsigned short total;             //total
    
    //Input the number of coins
    cout<<"How many quarters do you have?"<<endl;
    cin>>nQrts;
    cout<<"How many dimes do you have?"<<endl;
    cin>>nDime;
    cout<<"How many nickels do you have?"<<endl;
    cin>>nNikl;
    
    //Calculate the total
    total=((nQrts)*cnvQrts+(nDime)*cnvDime+(nNikl)*cnvNikl)/cnvPnDl;
    
    
    //Output the results
    cout<<"Number of Quarters input = "<<nQrts<<endl;
    cout<<"Number of Dimes input    = "<<nDime<<endl;
    cout<<"Number of Nickels input  = "<<nQrts<<endl;
    cout<<"The dollar amount        = $"<<total<<endl;


    //All Done!
    return 0;
}