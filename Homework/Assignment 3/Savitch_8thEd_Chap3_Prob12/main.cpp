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
  unsigned int nTerms;
  unsigned int denom=3;
  float Pi=4.0f;
  bool condition=true;
  cout << "How many terms for your approximation? ";
  cin >> nTerms;
  for (unsigned int i=1;i<=nTerms;i++) {
    if (condition) {
      Pi-=(4.0/denom);
      condition=false;
      denom+=2;
    } else {
      Pi+=(4.0/denom);
      condition=true;
      denom+=2;
    }
  }
  cout<<"Pi calculated with "<<nTerms<<" terms is = "<<Pi<<endl;
  
    // And done!
    return 0;
}

