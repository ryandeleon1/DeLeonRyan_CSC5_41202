/* 
    Author: Ryan DeLeon
    Created on January 19, 2016, 11:43 AM
    Purpose: Pi as a sum
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
  unsigned int nTerms;   //Desired number of terms
  unsigned int divide=3; //denominator for each term
  float apprxPi=1.0f;    //approximation of pi
  bool plmn=true;        //switching between plus and minus
  cout<<"How many terms for your approximation? "<<endl;
  cin>>nTerms;
  for (unsigned int n=1;n<=nTerms;n++) {
    if (plmn) {
      apprxPi-=(1.0/divide);
      plmn=false;
      divide+=2;
    } else {
      apprxPi+=(1.0/divide);
      plmn=true;
      divide+=2;
    }
  }
  cout<<"Pi calculated with "<<nTerms<<" terms = "<<4*apprxPi<<endl;
  
    // And done!
    return 0;
}

