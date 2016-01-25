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
    cout<<"Type 5 to display Savitch 9thEd Chap3 Prob 3."<<endl;
    cout<<"Type 6 to display Savitch 9thEd Chap3 Prob3 Practice."<<endl;
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
            case 4:{
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
            case 5:{
                cout<<"Savitch 9thEd Chap3 Prob3."<<endl;;
                cout<<"Roman Numeral Converter."<<endl<<endl;

                //Declare and initialize variables
                 unsigned short number; //[1000,3000]
                 unsigned char n1000s, n100s, n10s, n1s; //number of 1000's, 100's, 10's, 1's

                //Input the number
                 cout<<"Input the number you would like to convert."<<endl;
                 cin>>number;

                //Calculate the number of 1000's, 100's, 10's, 1's
                 cout<<endl<<"The number to convert = "<<number<<endl;
                 n1000s=(number-number%1000)/1000; //Number of 1000's
                 number=(number-n1000s*1000);      //Subtract off 1000's
                 n100s=(number-number%100)/100;    //Number of 100's
                 number=(number-n100s*100);        //Subtract off 100's
                 n10s=(number-number%10)/10;       //Number of 10's
                 n1s=(number-n10s*10);             //Subtract off 10's to get 1's

                 //Output the number and its components
                 cout<<"The number to 1000's = "<<static_cast<int>(n1000s)<<endl; 
                 cout<<"The number to 100's  = "<<static_cast<int>(n100s)<<endl; 
                 cout<<"The number to 10's   = "<<static_cast<int>(n10s)<<endl; 
                 cout<<"The number to 1's    = "<<static_cast<int>(n1s)<<endl<<endl; 

                 //Output the results
                 cout<<"The Roman numeral equivalent = ";

                 //Output the thousands
                 switch(n1000s){
                     case 3: cout<<"M";
                     case 2: cout<<"M";
                     case 1: cout<<"M";
                 }
                 //Output the hundreds
                 switch(n100s){
                     case 9: cout<<"CM";break;
                     case 8: cout<<"DCCC";break;
                     case 7: cout<<"DCC";break;
                     case 6: cout<<"DC";break;
                     case 5: cout<<"D";break;
                     case 4: cout<<"CD";break;
                     case 3: cout<<"C";
                     case 2: cout<<"C";
                     case 1: cout<<"C";
                 }
                 //Output the tens
                 switch(n10s){
                     case 9: cout<<"XC";break;
                     case 8: cout<<"LXXX";break;
                     case 7: cout<<"LXX";break;
                     case 6: cout<<"LX";break;
                     case 5: cout<<"L";break;
                     case 4: cout<<"XL";break;
                     case 3: cout<<"X";
                     case 2: cout<<"X";
                     case 1: cout<<"X";
                 }
                 //Output the ones
                 switch(n1s){
                     case 9: cout<<"IX";break;
                     case 8: cout<<"VIII";break;
                     case 7: cout<<"VII";break;
                     case 6: cout<<"VI";break;
                     case 5: cout<<"V";break;
                     case 4: cout<<"IV";break;
                     case 3: cout<<"I";
                     case 2: cout<<"I";
                     case 1: cout<<"I";
                 }
            }case 6:{
                    //Declare and initialize variables
                unsigned char answer;
                unsigned int month, day; //Month and day of birthday
                bool reDsply;
                cout<<endl<<"Savitch 9thEd Chap3 Prob3."<<endl;
                cout<<"Zodiac sign indicator."<<endl;

                    //input the users birth date
                    cout<<"What is the month of your birthday? (Enter as a number 1-12)"<<endl;
                    cin>>month;
                    cout<<"Now enter the day."<<endl;
                    cin>>day;

                    //determine the sign
                    switch(month){
                        case(12):{
                        if (day>=22) cout<<"Your zodiac sign is Capricorn."<<endl;
                        else cout<<"Your zodiac sign is Sagittarius"<<endl; 
                        break;}
                        case(1):{
                        if (day>=20){ cout<<"Your zodiac sign is Aquarius."<<endl;}
                        else cout<<"Your zodiac sign is Capricorn."<<endl;
                        break;}
                        case(2):{
                        if (day>=19) cout<<"Your zodiac sign is Pisces."<<endl;
                        else cout<<"Your zodiac sign is Aquarius."<<endl;
                        break;}
                        case(3):{
                        if (day>=21) cout<<"Your zodiac sign is Aries."<<endl;
                        else cout<<"Your zodiac sign is Pisces."<<endl; 
                        break;}
                        case(4):{
                        if (day>=20){ cout<<"Your zodiac sign is Taurus."<<endl;}
                        else cout<<"Your zodiac sign is Aries."<<endl;
                        break;}
                        case(5):{
                        if (day>=21) cout<<"Your zodiac sign is Gemini."<<endl;
                        else cout<<"Your zodiac sign is Taurus."<<endl;
                        break;}
                        case(6):{
                        if (day>=22) cout<<"Your zodiac sign is Cancer."<<endl;
                        else cout<<"Your zodiac sign is Gemini."<<endl; 
                        break;}
                        case(7):{
                        if (day>=23){ cout<<"Your zodiac sign is Leo."<<endl;}
                        else cout<<"Your zodiac sign is Cancer."<<endl;
                        break;}
                        case(8):{
                        if (day>=23) cout<<"Your zodiac sign is Virgo."<<endl;
                        else cout<<"Your zodiac sign is Leo."<<endl;
                        break;}
                        case(9):{
                        if (day>=23) cout<<"Your zodiac sign is Libra."<<endl;
                        else cout<<"Your zodiac sign is Virgo."<<endl; 
                        break;}
                        case(10):{
                        if (day>=23){ cout<<"Your zodiac sign is Scorpio."<<endl;}
                        else cout<<"Your zodiac sign is Libra."<<endl;
                        break;}
                        case(11):{
                        if (day>=22) cout<<"Your zodiac sign is Sagittarius."<<endl;
                        else cout<<"Your zodiac sign is Scorpio."<<endl;
                        break;}

                    }break;
            }
            default:{
                cout<<endl<<"Exiting the program"<<endl;
                reDsply=false;}
        }
        
    }while(reDsply);
      
    // And done!
    return 0;
}

