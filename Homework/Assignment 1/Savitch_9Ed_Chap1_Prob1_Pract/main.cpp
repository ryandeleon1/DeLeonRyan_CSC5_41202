/* 
 * Author: Ryan DeLeon
 * Created on January 7, 2016, 10:48 am
 * Purpose: How far does it drop?       
 */

//System Libraries
#include <iostream>//I/O library
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;//Sea level earth acceleration constant in ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int numPods, peaPPod, totPeas;
    
    //Calculate the number of pods
     totPeas=numPods*peaPPod;
    
    //Output the results
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods."<<endl;
    cin>>numPods;
    cout<<"Enter the number of peas in a pod."<<endl;
    cin>>peaPPod;
    cout<<"If you have "<<numPods<<" pea pods"<<endl;
    cout<<"and "<<peaPPod<<" peas in each pod, then you have ";
    cout<<totPeas<<" peas in all the pods."<<endl;

    //All Done! 
    return 0;
}