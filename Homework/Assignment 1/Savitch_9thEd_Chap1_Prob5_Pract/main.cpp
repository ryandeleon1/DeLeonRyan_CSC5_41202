/* 
 * Author: Ryan DeLeon
 * Created on January 11, 2016, 5:19 pm
 * Purpose: Length of fence     
 */

//System Libraries
#include <iostream>//I/O library
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int width,length,totFence;
    
    //Output the results
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the width of the desired fence."<<endl;
    cin>>width;
    cout<<"Enter the length of the desired fence."<<endl;
    cin>>length;
   
    //Calculate the number of pods
    totFence=width+length;
    cout<<"If the width of your fence is "<<width<<" ft"<<endl;
    cout<<"and the length is "<<length<<" ft"<<endl;
    cout<<"Then you will need "<<totFence<<" feet of total fence."<<endl;
    cout<<"Goodbye"<<endl;

    //All Done! 
    return 0;
}