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
#include <fstream> //Reading/writing to a file
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
    ofstream out; //Declare a file stream object called out
    float drpTime, dist; //Time in second, distance in feet
    
    //inputting the time with a random number and opening a file
    drpTime=rand()%11+10; //[10,20]secs
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //Calculate the distance dropped
    dist=0.5*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time = "<<drpTime<<" sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint<<endl; //format the distance to 3 decimals
    cout<<"Distance dropped ="<<setw(9)<<dist<<" ft"<<endl;
    
    //Output the results to a file
    out<<fixed<<setprecision(3)<<showpoint<<endl;
    out<<"Distance dropped ="<<setw(9)<<dist<<" ft"<<endl;

    //All Done! make sure to close files
    out.close();
    return 0;
}