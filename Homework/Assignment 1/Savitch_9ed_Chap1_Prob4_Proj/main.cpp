/* 
 * Author: Ryan DeLeon
 * Created on January 7, 2016, 10:48 am
 * Purpose: How far does it drop?       
 */

//System Libraries
#include <iostream>//I/O library
#include <cstdlib> //Random Function Location
#include <cmath>   //Math functions
#include <ctime>   //Time to set the random speed
#include <iomanip> //Format library
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;//Sea level earth acceleration constant in ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0))) ;  //
    
    //Declare Variables
    float drpTime, distance; //Time in second distance in feet
    
    //inputting th time with a random number
    drpTime=rand()%11+10; //[10,20]secs
    
    //Calculate the 
    distance=0.5*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time = "<<drpTime<<" sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint<<endl;
    cout<<"Distance dropped = "<<distance<<" ft"<<endl;

    //All Done!
    return 0;
}