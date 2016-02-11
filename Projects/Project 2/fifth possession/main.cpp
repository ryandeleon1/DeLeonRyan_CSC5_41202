/* 
    File:   main.cpp
    Author: Ryan DeLeon
    Created on February 9, 2016, 8:20 AM
    Purpose: Filling a vector
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
#include <vector>   //Dynamic array element
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    
    //Declare Variables
    int col=2;
    int row=4;
    string array[row][col];
    
    //Fifth possession
    cout<<"Final Posession. Next Score wins."<<endl;
    cout<<"This last round is a little different so read carefully."<<endl;
    cout<<"To score this last point you must list the playable opponents "
            <<"in order of youngest to oldest."<<endl;
    cout<<"Be sure to press enter once you've finished typing each person."<<endl;
    cout<<"Also, make sure to capitalize the first letter of each name...Proper english."<<endl;
            
    array[0][0]="Steph";
    array[1][0]="James";
    array[2][0]="Lebron";
    array[3][0]="Kobe";
    cout<<endl<<"Enter the players name in order of youngest to oldest."<<endl<<endl;
    //Print the Array
    
    for(int i=0; i<row; i++){
        string name;       
        cin>>name;//Loop for the rows
        array[i][1] = name;  //odds second column    
    }
    for(int i=0; i<row; i++){ 
            for(int j=0; j<col; j++) cout<<array[i][j]  <<"  ";
            cout << endl;
    }
    
    //check
    if(array[0][0]==array[0][1] && array[1][0]==array[1][1] &&
       array[2][0]==array[2][1] && array[3][0]==array[3][1]) cout<<"you win";
    else cout<<"you lose";
    //Exit stage right;
            
    return 0;
}
