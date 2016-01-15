/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 9:59 am
 * Purpose: Number of cereal boxes to get a metric ton     
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
    float wghtCer, CNV=1/35273.92; // weight of a cereal box, conversion from ounce to metric ton
    
    //inputting the 2 integers
    cout<<"Input the eight of the cereal box in ounces."<<endl;
    cin>>wghtCer>>endl;
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