/* 
    Author: Ryan DeLeon
    Created on January 19, 2016, 8:35 AM
    Purpose: Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn; //Problem solution to display
    bool reDsply=true; //Exit Program
         
    //Menu to display
    do{
        //Input problem to display
    cout<<endl<<"Assignment 3 problem set"<<endl;
    cout<<"Type 1 to display Savitch 8thEd Chap3 Prob 10."<<endl;
    cout<<"Type 2 to display Savitch 8thEd Chap3 Prob 11."<<endl;
    cout<<"Type 3 to display Savitch 8thEd Chap3 Prob 12."<<endl;
    cout<<"Type 4 to display Savitch 7thEd Chap3 Prob 1."<<endl;
    cout<<"Type anything else to exit."<<endl;
    cin>>nSoltn;
    
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
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
               break; 
            }
            case 2:{
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob11."<<endl;
                cout<<endl<<"e to the x."<<endl<<endl;
                    //Declare and initialize variables for e to the x
                    const unsigned char nTerms=13;
                    float etox=1,x; //e^x
                    //Input x
                    cout<<"Input the x of e to the x computation."<<endl;
                    cin>>x;
                    //Calculate e^x
                    for(int n=1;n<=nTerms;n++){

                        //Declare and initialize variables
                        unsigned int factN=1;
                        //Calculate the factorial
                        for (int i=1;i<=n;i++){
                            factN*=i;
                        }
                    //Calculate e^x with the above factorial
                    etox+=pow(x,n)/factN;
                    } 
                    //Output the results
                    cout<<"The exact value of e^"<<x<<"       = "<<exp(x)<<endl;
                    cout<<"The approximate value of e^"<<x<<" = "<<etox<<endl<<endl;
                               break;
                            }
            case 3:{
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob12."<<endl<<endl;
                cout<<endl<<"Approximating pi as a sum."<<endl<<endl;
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
                  cout<<"Pi calculated with "<<nTerms<<" terms = "<<4*apprxPi<<endl<<endl;
               break; 
            }
            default:{
                cout<<"Exiting the program"<<endl;
                reDsply=false;
            }case 4:{
             cout<<endl<<"Rock Paper Scissor Game."<<endl;
     
                //set random number seed
                 srand(static_cast<unsigned int>(time(0)));

                //Loop until the player wants to quit
                  char qstion;  //Does the player want to play again
               do{           
                //Declare variables
                char computr; //The computers choice
                char player;  //The players choice 

                //Input the players choice
                 do{
                     cout<<"Choose rock paper or scissors. R, P, S"<<endl;
                     cin>>player;
                     player=toupper(player);

                 }while(!(player=='P'||player=='R'||player=='S'));

                //Output the player move
                 cout<<"You played "<<player<<endl;

                //Computer generated move
                 do{
                     computr=rand()%4+80;
                 }while(computr=='Q');

                //Output the computers move
                 cout<<"The Computer played "<<computr<<endl;

                //results
                 if(computr==player){
                     cout<<"The result is a tie"<<endl<<endl;
                 }else if(player=='P'&&computr=='R'){
                     cout<<"You Win! :)"<<endl<<endl;
                 }else if(player=='R'&&computr=='S'){
                     cout<<"You Win! :)"<<endl<<endl;
                 }else if(player=='S'&&computr=='P'){
                     cout<<"You Win! :)"<<endl<<endl;
                 }else{
                     cout<<"You Lose! :("<<endl<<endl;
                 }
                 cout<<"Do you want to play again?"<<endl;
                 cin>>qstion;
            }while(toupper(qstion)=='Y');
            }
        }
        
    }while(reDsply);
      
    // And done!
    return 0;
}

