/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Created on January 27, 2016, 10:04 AM
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
//Execution Begins Here

int main(){
    //Header
    cout<<"*************************************************************"<<endl;
    cout<<"**                    BASKETBALL ALL STARS                 **"<<endl;
    cout<<"**                  Created By:  Ryan DeLeon               **"<<endl;
    cout<<"*************************************************************"<<endl;
    
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short player,opponent,court,shoot,block,pts;
    unsigned int ans,ans1,ans3,ans4,ans5,ans6,ans7,begTime,endTime,totTime,wake=1,guess=1;
    string name,roll,mssgans;
    char ans10;
    unsigned short dgnans;
    float dgnnum=rand()%10+1;
    int add1=rand()%100;
    int add2=rand()%100;
    int dicegen=rand()%6+1;
    
    //Player input
    cout<<"WELCOME TO BASKETBALL ALLSTARS"<<endl;
    cout<<"Please enter the name of your player."<<endl;
    getline(cin, player);
    //Picking opponent
    cout<<"Cool, so your "<<player<<". "<<endl;
    cout<<"Which NBA ALL-STAR would you like to go up against?"<<endl;
    do{
    cout<<"Enter the number of the opponent you choose."<<endl;
    cout<<"1. Lebron James"<<endl;
    cout<<"2. Kobe Bryant"<<endl; 
    cout<<"3. Steph curry"<<endl;
    cout<<"4. Kevin Durant"<<endl<<endl;
    cin>>opponent;
    if(opponent==1){
        cout<<"Your chose to face the King, Good Luck."<<endl;
    }
    else if(opponent==2){
        cout<<"They dont call Kobe the Black Mamba for nothing, Good Luck!"<<endl;
    }
    else if(opponent==3){
        cout<<"Dont let the babyface fool you, Steph is an assasin, Good Luck!."<<endl;
    }
    else if(opponent==4){
        cout<<"The Duranchula is 7 foot point guard, Good Luck!"<<endl;
    }
    else if(opponent<1 || opponent>4){
        cout<<"Sorry, I know you're scared but you gotta pick one"<<endl;
    }
    }while (opponent<1 || opponent>4);
    
    cout<<"One last thing, pick the arena you would like to play in."<<endl;
    cout<<"1. Staples Center"<<endl;
    cout<<"2. Madison Square Garden"<<endl;
    cout<<"3. Pauley Pavilion"<<endl;
    cout<<"4. Rucker Park"<<endl;
    cout<<"Enter the number next to the court you want."<<endl<<endl;
    cin>>court;
    switch(court){
        case 1:{
            cout<<"Welcome to Staples Center. Home of the LA Lakers."<<endl;
            break;
        }
        case 2:{
            cout<<"Welcome to Madison Square Garden. Home of the NY Knicks."<<endl;
            break;
        }
        case 3:{
            cout<<"Welcome to Pauley Pavilion. Home of the UCLA Bruins."<<endl;
            break;
        }
        case 4:{
            cout<<"Welcome to Rucker Park. Streetball Central."<<endl;
            break;
        }
        default:{
            cout<<"Please select a court."<<endl;
            break;
        }
    }
    cout<<"\n"<<endl;
    cout<<"Here is where we begin our adventure.\n"<<endl;
    cout<<"--------------------------------------------\n"<<endl;
    cout<<"You live in a kingdom known only as "<<name<<"-land."<<endl;
    cout<<"Here, you are considered the greatest dragon slayer in all of the land."<<endl;
    cout<<"However, word has come about that a new dragon has made its home somewhere in this land.";
    cout<<" It is your duty to find and slay this dragon to restore peace in the land."<<endl;
    cout<<"Now in order to begin your adventure, pull out the magic dice that are in your pocket and roll";
    cout<<" them to see where your journey will begin.\nYou also have 5 Lifepoints. If damaged in combat"
            "or attack or wounded, you will lose a lifepoint.\nIf you reach 0 Lifepoints, then"
            " GAME OVER\nThe smaller the number you roll, the further you";
    lifepts=5;
    cout<<" must travel to find the dragon.\n"<<endl;
    cout<<"[All of your character information as well as your lifepoints will be recorded to a text file called 'stats'.]"<<endl;
    //Output to stats file
    output.open("stats.txt");
    output<<"Your name is "<<name<<". \r\n"<<endl<<endl;
    if(chchoic==1)
        output<<"You are a warrior. \r\n"<<endl<<endl;
    else if(chchoic==2)
        output<<"You are a mage. \r\n"<<endl<<endl;
    else if(chchoic==3)
        output<<"You are a thief. \r\n"<<endl<<endl;
    else if(chchoic==4)
        output<<"You are an Archer. \r\n"<<endl<<endl;
    if(wpchoic==1)
        output<<"You wield a sword. \r\n"<<endl<<endl;
    else if(wpchoic==2)
        output<<"You wield a dagger. \r\n"<<endl<<endl;
    else if(wpchoic==3)
        output<<"You wield a bow. \r\n"<<endl<<endl;
    else if(wpchoic==4)
        output<<"You wield a wand. \r\n"<<endl<<endl;
    else if(wpchoic==5)
        output<<"You wield a mace. \r\n"<<endl<<endl;
    else if(wpchoic==6)
        output<<"You wield an axe. \r\n"<<endl<<endl;
    if(hmchoic==1)
        output<<"You live in dark caverns. \r\n"<<endl<<endl;
    else if(hmchoic==2)
        output<<"You live in a small village. \r\n"<<endl<<endl;
    else if(hmchoic==3)
        output<<"You live in a large castle. \r\n"<<endl<<endl;
    else if(hmchoic==4)
        output<<"You live in a humid swamp. \r\n"<<endl<<endl;
    else if(hmchoic==5)
        output<<"You live in a green forest. \r\n"<<endl<<endl;
    else if(hmchoic==6)
        output<<"You now have no home and wander from land to land. \r\n"<<endl<<endl;
    output<<"Your current lifepoints are "<<lifepts<<". \r\n"<<endl<<endl;
    cout<<"Input 'roll' to roll your dice."<<endl;
    //Roll Dice
    cin>>roll;
    cout<<"You roll a "<<dicegen<<endl;
    if(dicegen<7&&dicegen>4){
        cout<<"This means you have a long journey ahead of you."<<endl;
        cout<<"You begin traveling through a dark forest. On your travels, you come across a tiger. It looks hungry.\n"
                "You take out your weapon and ready yourself."<<endl;
        cout<<"The tiger then begins to speak!\nIt asks 'What is "<<add1<<" + "<<add2<<" ?'"<<endl;
        //Answer
        cin>>ans1;
        //If answer is correct
        if(ans1==add1+add2)
            cout<<"'You may pass through.'"<<endl;
        //If answer is incorrect
        else{
            cout<<"'Incorrect. Prepare to die!'"<<endl;
            //Timed Response
            begTime=static_cast<unsigned int>(time(0));
            cout<<"The tiger lunges at you.\nTo dodge, press 1. Quickly!"<<endl;
            cin>>dodge;
            endTime=static_cast<unsigned int>(time(0));
            //Total time allowed for user to input something
            totTime=15;
            //If user was fast enough
            if(totTime>endTime-begTime){
                begTime=(time(0));
                cout<<"You dodged the tiger! Quickly, kill it with your weapon!\nInput 2."<<endl;
                //Loop attacking the tiger
                for(int i=0;i<=2;i++){
                    cin>>kill;
                    cout<<"Keep attacking! Press 2"<<endl;
                }
                cout<<"The tiger is dead! You can now move along on your journey."<<endl;
            }
            //If user was not fast enough
            else{
                cout<<"Too slow! The tiger bites you and takes away one of you life points."<<endl;
                cout<<"You manage you kill it while it is biting you. And you carry on with your"
                        "journey, but with one less life point."<<endl;
                lifepts=lifepts-1;
                cout<<"You currently have "<<lifepts<<" lifepoints remaining."<<endl;
            }
        }
        cout<<"\nYou safely leave the forest now and must cross a bridge to continue on your journey."<<endl;
        cout<<"There stands a tall guardian blocking your way. As you approach he asks you a question"
                " in order to cross the bridge. He says you only have 15 seconds to answer the question."<<endl;
        cout<<"Are you ready?"<<endl;
        //Timed based response
        begTime=(time(0));
        cout<<"Hello "<<name<<".\n What is "<<add1<<" + "<<add2<<" ?"<<endl;
        cin>>ans3;
        cout<<ans3<<endl;
        endTime=(time(0));
        //Total time allowed for user to input something
        totTime=15;
        //If user was fast enough
        if(totTime>endTime-begTime){
            //If user was correct
            if(ans3==add1+add2)
                cout<<"'Correct. You may now pass the bridge.'"<<endl;
            //If user was incorrect
            else{
                cout<<"'Incorrect. You may NOT cross the bridge. You may have one more chance to answer a question "
                        "correctly or must seek another way around the bridge, which will cost you a lifepoint for the "
                        "extra amount of time it will take.'\nInput 1 to try again or 2 to give up a lifepoint and"
                        " find another way around."<<endl;
                cin>>ans4;
                //If user wants to try again
                if(ans4==1){
                    //Timed response
                    begTime=(time(0));
                    cout<<"'Your second and final chance.\nWhat is "<<add1<<" + "<<add2<<" ?"<<endl;
                    cin>>ans5;
                    endTime=(time(0));
                    //If user was fast enough
                    if(totTime>endTime-begTime){
                        //If user was correct
                        if(ans5==add1+add2)
                            cout<<"'Correct. You may pass the bridge.'"<<endl;
                        //If user was incorrect
                        else{
                            cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                            //Take away one lifepoint
                            lifepts=lifepts-1;
                            cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                        }
                    }
                    //If user was too slow
                    else{
                        cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                        //Take away one lifepoint
                        lifepts=lifepts-1;
                        cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                    } 
                }
                //If user didn't want to try again
                else{
                    cout<<"'You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                    //Take away one lifepoint
                    lifepts=lifepts-1;
                    cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                }
              }
           }
        //If user was not fast enough
        else{
            cout<<"You took too long to answer my questions."<<endl;
            cout<<"'Incorrect. You may NOT cross the bridge. You may have one more chance to answer a question "
                        "correctly or must seek another way around the bridge, which will cost you a lifepoint for the "
                        "extra amount of time it will take.'\nInput 1 to try again or 2 to give up a lifepoint and"
                        "find another way around."<<endl;
            cin>>ans6;
            //If user wants to play again
            if(ans6==1){
                //Time response
                begTime=(time(0));
                cout<<"'Your second and final chance.\nWhat is "<<add1<<" + "<<add2<<" ?"<<endl;
                cin>>ans7;
                endTime=(time(0));
                //If user was fast enough
                if(totTime>endTime-begTime){
                    //If user was correct
                    if(ans7==add1+add2)
                        cout<<"'Correct. You may pass the bridge.'"<<endl;
                    //If user was incorrect
                    else{
                        cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                        //Take away one lifepoint
                        lifepts=lifepts-1;
                        cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                    }
                }
                //If user was too slow
                else{
                    cout<<"'You still took too long to answer. You must lose a lifepoint and find another way around this bridge.'"<<endl;
                    //Take away one lifepoint
                    lifepts=lifepts-1;
                    cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                }
            }
            //If user doesn't want to try again
            else{
                cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                    //Take away one lifepoint
                    lifepts=lifepts-1;
                    cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
            }
        }
        //Output lifepoints to text file
        output<<"Your current lifepoints are "<<lifepts<<". \r\n"<<endl;
    }
    //If dice roll was 3 or 4
    else if(dicegen<5&&dicegen>2){
        cout<<"This means you have a 1 day hike to travel."<<endl;
        cout<<"You see a forest to your left, but manage to traverse it with ease. Then you begin to approach "
                "a large bridge that blocks your path between yourself and the dragon's lair."<<endl;
        cout<<"There stands a tall guardian blocking your way. As you approach he asks you a question"
                    " in order to cross the bridge. He says you only have 20 seconds to answer the question."<<endl;
        //Timed response
        begTime=(time(0));
        cout<<"Hello "<<name<<".\n What is "<<add1<<" + "<<add2<<" ?"<<endl;
        cin>>ans;
        endTime=(time(0));
        totTime=20;
        //If user was fast enough
        if(totTime>endTime-begTime){
            //If user was correct
            if(ans==add1+add2)
                cout<<"'Correct. You may pass the bridge.'"<<endl;
            //If user was incorrect
            else{
                cout<<"'Incorrect. You may NOT cross the bridge. You may have one more chance to answer a question "
                        "correctly or must seek another way around the bridge, which will cost you a lifepoint for the "
                        "extra amount of time it will take.'\nInput 1 to try again or 2 to give up a lifepoint and"
                        "find another way around."<<endl;
                cin>>ans;
                //If user wants to try again
                if(ans==1){
                    //Timed response
                    begTime=(time(0));
                    cout<<"'Your second and final chance.\nWhat is "<<add1<<" + "<<add2<<" ?"<<endl;
                    cin>>ans;
                    endTime=(time(0));
                    //If user was fast enough
                    if(totTime>endTime-begTime){
                        //If user was correct
                        if(ans==add1+add2)
                            cout<<"'Correct. You may pass the bridge.'"<<endl;
                        //If user was incorrect
                        else{
                            cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                            //Take away one lifepoint
                            lifepts=lifepts-1;
                            cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                        }
                    }
                    //If user was too slow
                    else{
                        cout<<"'You took too long. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                        //Take away one lifepoint
                        lifepts=lifepts-1;
                        cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                    }
                }
                //If user didn't want to try again
                else{
                    cout<<"'You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                        //Take away one lifepoint
                        lifepts=lifepts-1;
                        cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                }
            }
        }
        //If user was too slow
        else{
            cout<<"You took too long to answer my questions."<<endl;
            cout<<"'Incorrect. You may NOT cross the bridge. You may have one more chance to answer a question "
                        "correctly or must seek another way around the bridge, which will cost you a lifepoint for the "
                        "extra amount of time it will take.'\nInput 1 to try again or 2 to give up a lifepoint and"
                        " find another way around."<<endl;
                cin>>ans;
                //If user wants to try again
                if(ans==1){
                    //Timed response
                    begTime=(time(0));
                    cout<<"'Your second and final chance.\nWhat is "<<add1<<" + "<<add2<<" ?"<<endl;
                    cin>>ans;
                    endTime=(time(0));
                    //If user was fast enough
                    if(totTime>endTime-begTime){
                        //If user was correct
                        if(ans==add1+add2)
                            cout<<"'Correct. You may pass the bridge.'"<<endl;
                        //If user was incorrect
                        else{
                            cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                            //Take away one lifepoint
                            lifepts=lifepts-1;
                            cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                        }
                    }
                    //If user was too slow
                    else{
                        cout<<"'You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                        //Take away one lifepoint
                        lifepts=lifepts-1;
                        cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                    }
                }
                //If user did not want to try again
                else{
                    cout<<"'You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                    //Take away one lifepoint
                    lifepts=lifepts-1;
                    cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                }
        }
        cout<<"Once on the other side of the bridge, the dragon's lair is finally in sight."<<endl;
        //Output lifepoints to text file
        output<<"Your current lifepoints are "<<lifepts<<". \r\n"<<endl;
    }
    //If dice roll is 1 or 2
    else if(dicegen<3&&dicegen>0){
        cout<<"This means you are close enough to the suspected dragon's lair that a journey is not needed."<<endl;
    }
    cout<<"You finally reach the dragon's lair.\nNow you cautiously enter the dragon's lair."<<endl;
    cout<<"Roll your dice to determine how you find the dragon."<<endl;
    //Roll dice
    cin>>roll;
    cout<<dicegen<<endl;
    //If dice roll is 5 or 6
    if(dicegen<7&&dicegen>4){
        cout<<"You find the dragon asleep. If your have all of your lifepoints, you should be able to silently slay the dragon."<<endl;
        //If user has full lifepoints, he can slay dragon 
        if(lifepts==5){
            cout<<"You do, in fact, have full lifepoints. Enter kill to slay the dragon!"<<endl;
            cin>>kill;
            cout<<"It wakes up in screaming pain as it slowly dies until the dragon is no more."<<endl;
        }
        //If user has less than 5 lifepoints
        else{
            cout<<"You don't have a full amount of lifepoints.\nHowever, you notice strange words on the wall behind the dragon."<<endl;
            cout<<"It says:\n\t17,10,13,23 \nWhen decoded, this chant will kill the dragon."
                    "\nThere is only one clue to decode this message: A=6"<<endl;
            //Message means "lehr"
            cout<<"Enter the message now."<<endl;
            cin>>mssgans;
            //Verify string
            cout<<"You said "<<mssgans<<endl;
            if(mssgans=="lehr")
                cout<<"You cracked the code! Now that you say it, the dragon appears to die until it no longer moves."<<endl;
            else if(mssgans=="LEHR")
                cout<<"You cracked the code! Now that you say it, the dragon appears to die until it no longer moves."<<endl;
            else{    
                cout<< "Error: wrong code. The dragon wakes up from your talking and begins to attack you!\n"
                        "you lose a lifepoint while fighting him."<<endl;
                //Take away a lifepoint
                lifepts=lifepts-1;
                //Loop attack dragon
                do{
                    cout<<"Attack it with your weapon! Enter 1!"<<endl;
                    cin>>kill;
                    wake++;
                }while(wake<=2);
            }
            cout<<"The dragon is dead!"<<endl;
            cout<<"[Your current lifepoints are "<<lifepts<<" ]"<<endl;
            //Output lifepoints to text file
            output<<"Your current lifepoints are "<<lifepts<<". \r\n"<<endl;
        }
        output<<"Your current lifepoints are "<<lifepts<<". \r\n"<<endl;
    }
    //If dice roll is 3 or 4
    else if(dicegen<5&&dicegen>2){
        cout<<"You find the dragon asleep. He wakes up to your presence. However, he says he has a game for you.\nIf you can guess his number,"
                " then he will let you live and promise never to return to your kingdom. If you lose, he will kill you."<<endl;
        cout<<"Do you accept this game? Enter Y for yes, or N for no."<<endl;
        //Answer yes or no
        cin>>ans10;
        //If user said yes
        if(ans10=='Y'||ans10=='y'){
            cout<<"The dragon says 'I am thinking of a number between one and ten. What is it?\nYou get 4 guesses.'"<<endl;
            cin>>dgnans;
            //Loop for guessing the dragon's number
            while(dgnans!=dgnnum&&guess<=4){
                cout<<"'Incorrect ! Try again!'"<<endl;
                cin>>dgnans;
                guess++;
            }
            //If user guessed number in 4 tries or less
            if(guess<=4)
                cout<<"'You guessed my number. You may leave and I will never return.'"<<endl;
            //If it took more than 4 tries
            else if(guess>=5){
                cout<<"'You did not guess my number. You will die!'"<<endl;
                //If user has less than 4 lifepoints
                if(lifepts<4){
                    cout<<"The dragon took the remainder of your life points. You died. GAME OVER."<<endl;
                    //End program
                    return 0;
                }
                //If user has more than 4 lifepoints
                else{
                    cout<<"You survived the dragon's attack, but at the cost of 3 lifepoints. While the dragon stops to prepare for a "
                            "second attack, you manage to slay the dragon.\nIt is dead!"<<endl;
                    //Take away 3 lifepoints
                    lifepts=lifepts-3;
                }
            }     
        }
        //If user said no
        else{
            //If user has less than 4 lifepoints
            if(lifepts<4){
                cout<<"The dragon took the remainder of your life points. You died. GAME OVER."<<endl;
                //End program
                return 0;
            }
            //If user has at least 4 lifepoints
            else{
                cout<<"You survived the dragon's attack, but at the cost of 3 lifepoints. While the dragon stops to prepare for a "
                        "second attack, you manage to slay the dragon.\nIt is dead!"<<endl;
                //Take away 3 lifepoints
                lifepts=lifepts-3;
            }
        }
    }
    //If dice roll is 1 or 2
    else if(dicegen<3&&dicegen>0){
        cout<<"You enter his lair, but the dragon is ready for you and attacks you as soon as it sees you."<<endl;
        //If user has less than 4 lifepoints
        if(lifepts<4){
            cout<<"The dragon took the remainder of your life points. You died. GAME OVER."<<endl;
            //End program
            return 0;
        }
        //If user has at least 4 lifepoints
        else{
            cout<<"You survived the dragon's attack, but at the cost of 3 lifepoints. While the dragon stops to prepare for a "
                    "second attack, you manage to slay the dragon.\nIt is dead!"<<endl;
            //Take away 3 lifepoints
            lifepts=lifepts-3;
        }
    }
    cout<<"[Your current lifepoints are "<<lifepts<<" ]"<<endl;
    //Output lifepoints to text file
    output<<"Your current lifepoints are "<<lifepts<<". \r\n"<<endl;
    cout<<endl;
    //If user's final lifepoints are zero
    if(lifepts<1){
        cout<<"You have no lifepoints remaining. GAME OVER"<<endl;
        return 0;
    }
    //If user has more than zero lifepoints
    else{
        cout<<"Congratulations "<<name<<"! You beat the dragon, saved the kingdom, and won my game. Thank you for playing!"<<endl;
        cout<<"Your score is "<<lifepts<<". This is based off of your lifepoints."<<endl;
    }
    //Close file
    output.close();
    //Exit
    return 0;
}