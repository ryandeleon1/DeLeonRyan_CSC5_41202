/* 
 * Author: Ryan DeLeon
 * Created on January 11, 2016, 7:47 am
 * Purpose: Velocity of sound       
 */

//System Libraries
#include <iostream> //I/O library
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float tstart, tstop, delT=1; //First and second integers
    float temp,velS; // Sum and product of the integers
    
    //inputting the 2 integers
    cout<<"Input the starting temperature."<<endl;
    cin>>tstart>>endl;
    cout<<"Input the end temperature."<<endl;
    cin>>tstop>>endl;
    
    //Calculate the sum and product
    temp=tstart;
    velS=331.3+0.61*temp;
       
    
    //Output the results
    cout<<"The temperature is = "<<temp<<endl;
    cout<<"The velocity of sound = "<<velS<<endl;

    //All Done! 
    return 0;
}