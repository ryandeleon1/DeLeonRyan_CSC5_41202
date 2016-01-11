/* 
    Author: Ryan DeLeon
    Created on January 4, 2016, 9:00 AM
    Purpose: Display truth table and compare swaps
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
   bool x=true;
   bool y=true;
   int a=2,b=3,temp;
    //create heading
    cout<<"X  Y !X !Y  X&&Y  X||y  X^Y  (X^Y)^Y  (X^Y)^X  !(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    //First row
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    
    //second row
    x=true,y=false;
   cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    //third row
     x=false,y=true;
     cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    
    //fourth row
    x=false,y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"   "<<endl;
    //Swap using temp
    cout<<""<<endl;
    cout<<"Swap using temp."<<endl;
    cout<<"before swap  a="<<a<<" and b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swap   a="<<a<<" and b="<<b<<endl;
    
    //Swap using exclusive or
    cout<<""<<endl;
    cout<<"Swap using exclusive or."<<endl;
    cout<<"before swap  a="<<a<<" and b="<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"after swap   a="<<a<<" and b="<<b<<endl;
    
    //0utput the values
    
    
    // And done!
    return 0;
}

