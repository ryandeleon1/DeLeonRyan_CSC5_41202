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
const char cnvQrts=25;//
const char cnvDime=10;//
const char cnvNikl=5; //
const char cnvPnDl=100; //

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nQrts,nNikl,nDime;  //
    unsigned short total;             //
    
    //Input the number of coins
    cout<<" "<<endl;
    cin>>nQrts;
    cout<<" "<<endl;
    cin>>nDime;
    cout<<" "<<endl;
    cin>>nNikl;
    
    //Calculate the total
    total=(nQrts*cnvQrts+nDime*cnvDime+nNikl*cnvNikl);
    
    
    //Output the results
    cout<<"Number of Quarters input = "<<nQrts<<endl;
    cout<<"Number of Dimes input    = "<<nDime<<endl;
    cout<<"Number of Nickels input  = "<<nQrts<<endl;
    cout<<"The dollar amount        = $"<<1.0f*total/cnvPnDl<<endl;


    //All Done!
    return 0;
}