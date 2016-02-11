/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on February , 11, 12:38 AM
 */

//User Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

//System Libraries
//Global Constants
//Function Prototypes
void fillCrt(int [], int);
void prntCrt(int [], int);
bool assgnLoc (int [], short, short);
//Execution Begins Here

int main(){
    
    //Redisplay
    bool reDsply=true; 
    do{
        
 //Header
    cout<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<"**                    NBA ALL STARS                        **"<<endl;
    cout<<"**                  Created By:  Ryan DeLeon               **"<<endl;
    cout<<"*************************************************************"<<endl;
    
 //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
 //Declare Variables
    string player, oponent, crtNam;
    unsigned int selOp, court, guesTyp, ranTyp;
    unsigned char selFor, ready, shoot, plyAgn;
    bool force=true;       
    unsigned short ppts=0, opts=0; //Players and opponents points 
    unsigned int begTime, endTime, totTime=5, n=0;
    const int SIZE=6;
    int crt[SIZE];
    short loc;
    int col=2;
    int row=4;
    string names[row][col];
    string name;  
    
 //Open a file for game summary
    ofstream out;
    out.open("Game Summary.dat");
    
 //Player input
    cout<<"WELCOME TO NBA ALLSTARS"<<endl;
    cout<<"Please enter the name of your player. (First name only please)"<<endl;
    cin>>player;
    
 //Picking opponent
    cout<<endl<<"Cool, so you're "<<player<<". "<<endl;
    cout<<"Which NBA ALL-STAR would you like to go up against?"<<endl;
    do{
    cout<<"Enter the number of the opponent you choose."<<endl;
    cout<<"1. Lebron James"<<endl;
    cout<<"2. Kobe Bryant"<<endl; 
    cout<<"3. Steph curry"<<endl;
    cout<<"4. James Harden"<<endl<<endl;
    cin>>selOp;
    if(selOp==1){
        cout<<endl<<"You chose to face the King, Good Luck."<<endl<<endl;
        oponent="Lebron";
    }
    else if(selOp==2){
        cout<<endl<<"They dont call Kobe the Black Mamba for nothing, Good Luck!"<<endl<<endl;
        oponent="Kobe";
    }
    else if(selOp==3){
        cout<<endl<<"Dont let the babyface fool you, Steph is an assasin, Good Luck!."<<endl<<endl;
        oponent="Steph";
    }
    else if(selOp==4){
        cout<<endl<<"Fear the beard, Good Luck!"<<endl<<endl;
        oponent="James";
    }
    else if(selOp<1 || selOp>4){
        cout<<"Sorry, I know you're scared but you gotta pick one"<<endl<<endl;
    }
    }while (selOp<1 || selOp>4);
    
 //Selecting arena     
    cout<<"One last thing, pick the arena you would like to play in."<<endl;
    cout<<"1. Staples Center"<<endl;
    cout<<"2. Madison Square Garden"<<endl;
    cout<<"3. Pauley Pavilion"<<endl;
    cout<<"4. Rucker Park"<<endl;
    cout<<"Enter the number next to the court you want."<<endl<<endl;
    cin>>court;
    switch(court){
        case 1:{
            cout<<endl<<"Welcome to Staples Center. Home of the LA Lakers."<<endl;
            crtNam="Staples Center";
            break;
        }
        case 2:{
            cout<<endl<<"Welcome to Madison Square Garden. Home of the NY Knicks."<<endl;
            crtNam="Madison Square Garden";
            break;
        }
        case 3:{
            cout<<endl<<"Welcome to Pauley Pavilion. Home of the UCLA Bruins."<<endl;
            crtNam="Pauley Pavilion";
            break;
        }
        case 4:{
            cout<<endl<<"Welcome to Rucker Park. Streetball Central."<<endl;
            crtNam="Rucker Park";
            break;
        }
        default:{
            cout<<"Please select a court."<<endl;
            break;
        }
    }
    cout<<endl<<endl;
    cout<<"Ok now lets start the game. First player to score 2 points wins."<<endl;
    cout<<"Each possession will have a different set of instructions and you"<<endl
            <<"may need to react quickly so pay attention. BEGIN!"<<endl<<endl;
    
 //First posession
    cout<<"First Possession."<<endl<<endl;
    cout<<"You check the ball to "<<oponent<<". Now since you're on defense"<<endl
            <<"you have to force him to his off hand."<<endl;
    cout<<"Enter 'L' to force "<<oponent<<" left. Or 'R' to force him right"<<endl;
    cin>>selFor;
    selFor=toupper(selFor);
    
    //Using ternary operator / And "For loop" for quick spacing
    if (selFor=='L')
        force=false;
    if (oponent=="Steph"){
        cout<<endl<<"Sorry, unfortunately you chose to play the best ball handler"<<endl 
            <<"in the world so he has no off hand. You got crossed up and scored on. Your ball"<<endl;
        opts++;
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;
        for(unsigned short i=0;i<=5;i++){
            cout<<endl;
        }
    }else if (oponent=="Kobe"){
        if (selFor=='R')
            opts++;
        else ppts++;
        cout<<(force?"Wrong move, Kobe is right handed and you get dunked on. Your ball":
            "Nice move, forcing him left caused a turnover and an easy lay up for you. Your ball")<<endl;
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;
        for(unsigned short i=0;i<=5;i++){
            cout<<endl;
        }
    }else if (oponent=="Lebron"){
        if (selFor=='R')
            opts++;
        else ppts++;
        cout<<(force?"Wrong move, Lebron is right handed and you get dunked on. Your ball":
            "Nice move, forcing him left caused a turnover and an easy lay up for you. Your ball")<<endl;
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;
        for(unsigned short i=0;i<=5;i++){
            cout<<endl;
        }
    }else if (oponent=="James"){
        if (selFor=='L')
            opts++;
        else ppts++;
        cout<<(!force?"Wrong move, James is left handed and you get dunked on":
            "Nice move, forcing him right caused a turnover and an easy lay up for you. Your ball")<<endl;
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;
        for(unsigned short i=0;i<=5;i++){
            cout<<endl;
        }
    }
    
    //Second Possession, use while loop for quick spacing this time
    cout<<"Second Possession."<<endl<<endl;
    cout<<"Ok now its your turn to show what you got. This possession requires"<<endl
            <<"some quick reflexes so enter any character when ready."<<endl<<endl;
    cin>>ready;
    if (oponent=="Steph"){
        begTime=static_cast<unsigned int>(time(0));
        cout<<endl<<"You were able to back down the smaller Curry, "<<endl 
            <<"quick, press 'S' to shoot."<<endl;
        cin>>shoot;
        endTime=static_cast<unsigned int>(time(0));
        if (totTime<=endTime-begTime){
            opts++;
            cout<<endl<<"You were to slow and the shot got blocked, causing an easy"<<endl
                    <<"bucket for "<<oponent<<"."<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
             while(n<5){
                cout<<endl;
                n++;
            }
        }else if(totTime>endTime-begTime) {
            ppts++;
            cout<<endl<<"Awesome! Your quick reactions paid off. Swish!"<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
            while(n<5){
                cout<<endl;
                n++;
            }
        }         
    }else if (oponent=="Kobe"){
        begTime=static_cast<unsigned int>(time(0));
        cout<<endl<<"You were able to create space against the much older Bryant, "<<endl 
            <<"quick, press 'S' to shoot."<<endl;
        cin>>shoot;
        endTime=static_cast<unsigned int>(time(0));
        if (totTime<=endTime-begTime){
            opts++;
            cout<<endl<<"You were to slow and the shot got blocked, causing an easy"<<endl
                    <<"bucket for "<<oponent<<"."<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
             while(n<5){
                cout<<endl;
                n++;
            }
        }else if(totTime>endTime-begTime) {
            ppts++;
            cout<<endl<<"Awesome! Your quick reactions paid off. Swish!"<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
             while(n<5){
                cout<<endl;
                n++;
            }
        }
    }else if (oponent=="Lebron"){
        begTime=static_cast<unsigned int>(time(0));
        cout<<endl<<"You were able to run away form the slow giant Lebron, "<<endl 
            <<"quick, press 'S' to shoot."<<endl;
        cin>>shoot;
        endTime=static_cast<unsigned int>(time(0));
        if (totTime<=endTime-begTime){
            opts++;
            cout<<endl<<"You were to slow and the shot got blocked, causing an easy"<<endl
                    <<"bucket for "<<oponent<<"."<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
             while(n<5){
                cout<<endl;
                n++;
            }
        }else if(totTime>endTime-begTime) {
            ppts++;
            cout<<endl<<"Awesome! Your quick reactions paid off. Swish!"<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
             while(n<5){
                cout<<endl;
                n++;
            }
        }
    }else if (oponent=="James"){
        begTime=static_cast<unsigned int>(time(0));
        cout<<"You were able to grab James' Beard and distract him., "<<endl 
            <<"quick, press 'S' to shoot."<<endl;
        cin>>shoot;
        endTime=static_cast<unsigned int>(time(0));
        if (totTime<=endTime-begTime){
            opts++;
            cout<<endl<<"You were to slow and the shot got blocked, causing an easy"<<endl
                    <<"bucket for "<<oponent<<"."<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
             while(n<5){
                cout<<endl;
                n++;
            }
        }else if(totTime>endTime-begTime) {
            ppts++;
            cout<<endl<<"Awesome! Your quick reactions paid off. Swish!"<<endl;
            cout<<"The score is "<<ppts<<" - "<<opts<<endl;
             while(n<5){
                cout<<endl;
                n++;
            }
        }
    }
    //Third Possession
    cout<<"Third Possession."<<endl<<endl;
    cout<<"For this possession you have to guess what type of shot"<<endl
            <<"you think "<<oponent<<" is going to take."<<endl;
    cout<<"Enter 2 if you think he will take a two pointer."<<endl;
    cout<<"Enter 3 if you think he will take a three pointer."<<endl;
    cin>>guesTyp;
    //Randomly generate a 2 or 3
    do{
    ranTyp=rand()%3+1;
    }while(ranTyp==1);
    if (guesTyp==ranTyp){
        ppts++;
        cout<<endl<<"You guessed right and blocked the shot! Then scored a Basket!"<<endl;
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;
    }else if (guesTyp==2 && ranTyp==3){
        opts++;
        cout<<endl<<"Oh No! You guessed wrong and started backing up expecting a drive"<<endl;
        cout<<"but "<<oponent<<" shot it from outside and scored."<<endl<<endl;
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;
    }else if (guesTyp==3 && ranTyp==2){
        opts++;
        cout<<endl<<"Oh No! You guessed wrong and jumped expecting a shot"<<endl;
        cout<<"but "<<oponent<<" pump faked and scored an easy layup."<<endl<<endl;
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;
    }
    
    
    //Fourth possession
     for(unsigned short i=0;i<=5;i++){
            cout<<endl;
        }
    if (ppts==2 || opts==2){
        cout<<"Fourth possession."<<endl;
        cout<<"For this posession you have to choose which spot you think "
                <<oponent<<" will shoot from on the court. Good Luck!"<<endl;
        cout<<endl;
        
        //fill array
        fillCrt(crt,SIZE);    
        //print the court
        prntCrt(crt,SIZE);
        
        //Get players guess
        cout<<"Where do you think "<<oponent<<" will shoot from?"<<endl;
        cin>>loc;
        
        if (assgnLoc(crt, selOp, loc)){
        cout<<endl<<"You chose correctly and beat him to the spot! You scored!"<<endl;
        ppts++;
        }
        else {
            cout<<endl<<"Sorry you ran to the wrong spot..."<<endl;
            opts++;
        }
        cout<<"The score is "<<ppts<<" - "<<opts<<endl;     
    }
    
    //Fifth possession
     for(unsigned short i=0;i<=5;i++){
            cout<<endl;
        }
    if(ppts==opts){
    cout<<"Final Posession. Next Score wins."<<endl;
    cout<<"This last round is a little different so read carefully."<<endl;
    cout<<"To score this last point you must list the playable opponents "
            <<"in order of youngest to oldest."<<endl;
    cout<<"Be sure to press enter once you've finished typing each person."<<endl;
    cout<<"Also, make sure to capitalize the first letter of each name...Proper english."<<endl;
    
    //Filling first column
    names[0][0]="Steph";
    names[1][0]="James";
    names[2][0]="Lebron";
    names[3][0]="Kobe";
    cout<<endl<<"Enter the players name in order of youngest to oldest."<<endl<<endl;
   
    //Filling second column
    for(int i=0; i<row; i++){     
        cin>>name;//Loop for the rows
        names[i][1] = name;  //odds second column    
    }
    //label columns
    cout<<"Correct Order     Your order"<<endl<<endl;
    for(int i=0; i<row; i++){ 
            for(int j=0; j<col; j++) cout<<names[i][j]  <<"      ";
            cout << endl;
    }
    
    //check the columns 
    if(names[0][0]==names[0][1] && names[1][0]==names[1][1] &&
       names[2][0]==names[2][1] && names[3][0]==names[3][1]) {
        cout<<endl<<"You know your basketball."<<endl;
        ppts++;
    }
    else {
      cout<<endl<<"Looks like you dont know your basketball."<<endl;
      opts++;
    }
    }
    
    //Outputting to a file
    out<<endl<<"Your player name was "<<player<<"."<<endl;
    out<<"You played against "<<oponent<<"."<<endl;
    out<<"The game took place at "<<crtNam<<"."<<endl;
    
    if (ppts==3){
            cout<<endl<<"Congratulations "<<player<<" you beat "<<oponent<<" in a 1v1"<<endl
            <<"pickup game!! The game summary will be output to a file. Thank you"<<endl;
            out<<"You won the game."<<endl;
            out<<"The score was "<<ppts<<" - "<<opts<<endl;  
    }else if (opts==3){
        cout<<endl<<"Im sorry "<<player<<" you lost to "<<oponent<<" in a 1v1"<<endl
            <<"pickup game!! The game summary will be output to a file."<<endl;
        out<<"You lost the game."<<endl;
        out<<"The score was "<<ppts<<" - "<<opts<<endl;  
    }
    //Ask to play again
    cout<<"Would you like to play again? 'Y' or 'N'? "<<endl;
    cin>>plyAgn;
    plyAgn=toupper(plyAgn);
    if(plyAgn!='Y') reDsply=false;
    
    //Close file
    out.close();
    }while(reDsply);
    
    //Say goodbye 
    cout<<endl<<"Thank you for playing NBA ALLSTARS!"<<endl;
return (0);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Print Court
//******************************************************************************
void prntCrt(int crt[],int n){
    cout<<endl;
    cout<<" __________________________________"<<endl;
    cout<<"|    |     |           |      |    |"<<endl;
    cout<<"|  "<<crt[1]<<" |     |           |      | "<<crt[5]<<"  |"<<endl;
    cout<<"|    |     |           |      |    |"<<endl;
    cout<<"|    |     |___________|      |    |"<<endl;
    cout<<"|    \\      \\          /      /    |"<<endl;
    cout<<"|     \\      \\        /      /     |"<<endl;
    cout<<"|      \\      \\______/      /      |"<<endl;
    cout<<"|     "<<crt[2]<<"  \\                /  "<<crt[4]<<"     |"<<endl;
    cout<<"|          \\            /          |"<<endl;
    cout<<"|            \\________/            |"<<endl;
    cout<<"|                 "<<crt[3]<<"                |"<<endl;
    cout<<"|__________________________________|"<<endl;        
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Fill Array
//******************************************************************************
void fillCrt(int crt[],int n){
    for(int i=1;i<n;i++){
        crt[i]=i;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Assign opponent a different location
//******************************************************************************
bool assgnLoc(int crt[], short selOp, short loc){
    if (selOp==1 && loc==1) return true;
    else if (selOp==2 && loc==2) return true;
    else if (selOp==3 && loc==4) return true;
    else if (selOp==4 && loc==5) return true;
    else return false;
}