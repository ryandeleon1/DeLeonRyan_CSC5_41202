/* 
 * Author: Ryan DeLeon
 * Created on January 11, 2016, 4:08 am
 * Purpose: Number of peas in a pod     
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
    int numPods, peaPPod, totPeas;
    
    //Output the results
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods."<<endl;
    cin>>numPods;
    cout<<"Enter the number of peas in a pod."<<endl;
    cin>>peaPPod;
   
    //Calculate the number of pods
    totPeas=numPods*peaPPod;
    cout<<"If you have "<<numPods<<" pea pods"<<endl;
    cout<<"and "<<peaPPod<<" peas in each pod, then you have ";
    cout<<totPeas<<" peas in all the pods."<<endl;

    //All Done! 
    return 0;
}