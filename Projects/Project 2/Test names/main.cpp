/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ryand
 *
 * Created on February 12, 2016, 9:30 AM
 */


#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

//Global Constants
const int COL=2;
const int ROW=4;

//Function Prototypes
void fillNames(string [ROW][COL],int ,int ,string &);

int main(int argc, char** argv) {
    //Declare variables
    string names[ROW][COL];
    string name;
    
    
    cout<<"Final Posession. Next Score wins."<<endl;
    cout<<"This last round is a little different so read carefully."<<endl;
    cout<<"To score this last point you must list the playable opponents "
            <<"in order of youngest to oldest."<<endl;
    cout<<"Be sure to press enter once you've finished typing each person."<<endl;
    cout<<"Also, make sure to capitalize the first letter of each name...Proper english."<<endl;
    
    //Call names function
    fillNames(names,ROW,COL,name);
    
    //label columns
    cout<<"Correct Order   Your order"<<endl;
    for(int i=0; i<ROW; i++)
        cout<<names[i][0]<<setw(20)<<names[i][1]<<endl;
  
    
    
    //check the columns 
    if(names[0][0]==names[0][1] && names[1][0]==names[1][1] &&
       names[2][0]==names[2][1] && names[3][0]==names[3][1]) {
        cout<<endl<<"You know your basketball."<<endl;
    }
    else {
      cout<<endl<<"Looks like you dont know your basketball."<<endl;
    }
    return 0;
}

void fillNames(string n[r][c],int row, int col, string &nam){
    
    //Filling first column
    n[0][0]="Steph";
    n[1][0]="James";
    n[2][0]="Lebron";
    n[3][0]="Kobe";
    cout<<endl<<"Enter the players name in order of youngest to oldest."<<endl<<endl;
    //Filling second column
    for(int i=0; i<row; i++){     
        cin>>nam;//Loop for the rows
        n[i][1] = nam;  //Fills second column    
    }
}