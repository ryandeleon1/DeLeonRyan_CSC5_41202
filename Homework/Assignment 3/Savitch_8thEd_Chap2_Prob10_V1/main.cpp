/* 
    Author: Ryan DeLeon
    Created on January 19, 2016, 8:35 AM
    Purpose: Fibonacci Crud Problem
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
   cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10."<<endl;
   cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
   //Declare Variables
   unsigned int fi,fim1,fim2; //Designations in the sequence
   unsigned short nTerms;     //Number of terms in the sequence
   unsigned short counter;    //Current position in the sequence
   const char DREPRO=5;         //Days to reproduce
   float crudWt;              //Weight of crud
   unsigned int nDays;        //Number of days to grow crud
   //Initialize the sequence
   fim2=fim1=1;               //start the sequence
   counter=2;                 //Initialize the counter
   //Input the initial weight of crud and number of days  
   cout<<"Input the initial weight of crud in pounds."<<endl;
   cin>>crudWt;
   cout<<"How many days will the crud be allowed to grow?"<<endl;
   cin>>nDays;
   //Calculate the number of terms
   nTerms=nDays/DREPRO+1;
   //Output or calculate the output required
   if(nTerms==1){
        cout<<"After "<<nDays<<" days the crud weighs "<<fim2*crudWt<<" lbs."<<endl<<endl;
   }else if (nTerms==2){
        cout<<"After "<<nDays<<" days the crud weighs "<<fim1*crudWt<<" lbs."<<endl<<endl;
   }else{
       do{
           fi=fim1+fim2;
           counter++;
           fim2=fim1;
           fim1=fi;
       }while(counter<nTerms);
        cout<<"After "<<nDays<<" days the crud weighs "<<fi*crudWt<<" lbs."<<endl<<endl;
   }
 //all done
    return 0;
}

