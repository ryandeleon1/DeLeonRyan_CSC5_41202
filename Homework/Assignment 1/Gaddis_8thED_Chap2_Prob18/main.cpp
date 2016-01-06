/* 
 * Author: Ryan DeLEon
 * Created on January 6, 2016, 9:37 am
 * Purpose:  Energy Drink Survey
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvPerc=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short cstSurv=16500; //Customers Surveyed
    unsigned char peDrnk=15;      //Percentage of energy drinkers surveyed
    unsigned char pcDrnk=58;      //Percentage of citrus drinkers surveyed
    unsigned short neDrnk, ncDrnk; //Number of energy and citrus drinkers
    
    //Calculate the number of drinkers
    neDrnk=cstSurv*peDrnk/cnvPerc;
    ncDrnk=neDrnk*pcDrnk/cnvPerc;
    
    //Output the results
    cout<<"The number of customers surveyed         = "<<cstSurv<<endl;
    cout<<"The percentage of energy drinkers        = "<<static_cast<int>(peDrnk)<<"%"<<endl;
    cout<<"The percentage of energy citrus drinkers = "<<static_cast<int>(pcDrnk)<<"%"<<endl;
    cout<<"The number of energy drinkers            = "<<neDrnk<<endl;
    cout<<"The number of energy citrus drinkers     = "<<ncDrnk<<endl;
    
    //All Done!
    return 0;
}