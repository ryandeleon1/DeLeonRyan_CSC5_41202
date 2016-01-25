/* 
    Author: Ryan DeLeon
    Created on January 25, 2016, 8:35 AM
    Purpose: Power function example
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

// Function prototype
int pow(int,int);
//Execution begins here
int main(int argc, char** argv) {
    //Variables to be using in time
    int begi,endi,begd,endd,loop=1000000000;
    
    //Declare and initialize variables
    int x; //Base of problem
    int y; //Exponent
    int z; //
    //Input data
    cout<<"Input a and b i.e. for a^b"<<endl;
    cin>>x>>y;      
    
    //calculate 
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<=1;i++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
            
    //0utput the values
    cout<<"The functions are called "<<loop<<" times"<<endl;
    cout<<"Our function result : "<<x<<"^"<<y<<" = "<<z<<endl; 
    cout<<"The total time taken = "<<endi-begi<<" secs"<<endl;
    
    //compare to the cmath library
    double dx=x,dy=y,dz;
    
    //call math library
    begd=static_cast<unsigned int>(time(0));
    for(int i=0;i<=1;i++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
            
    //output 
    cout<<"Math Library function : "<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"The total time taken = "<<endd-begd<<" secs"<<endl;
    
    // And done!
    return 0;
}
//0000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                              Power Function                                */
int pow(int a,int b){
    if(b<=0)return 1;
    if(b==1)return a;
    int abd2=pow(a,b/2);
    if(b%2)return abd2*abd2*a; //if odd
    return abd2*abd2;      //else even
}


