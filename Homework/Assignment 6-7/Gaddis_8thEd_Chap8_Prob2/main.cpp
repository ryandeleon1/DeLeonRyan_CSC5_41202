/* 
 * File:   main.cpp
 * Author: Ryan DeLeon
 * Purpose: Winning the lotto
 * Created on February 6, 2016, 5:07 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool contains(const int[], int, int);

//Begin Execution
int main(int argc, char** argv) {
    //Declaration and Initialization
    const int SIZE = 10; //Number of lottery numbers to pick
    int winNum; //The winning number
    int myNums[SIZE]; //A collection of picked lottery numbers
    
    srand(static_cast<int>(time(0))); //Seed PRNG
    
    //Generate picked lottery numbers at random
    cout << "Your numbers:" << endl;
    for(int i = 0; i < SIZE; ++i){
        myNums[i] = rand() % 89999 + 10000; //Generate a number between 10000 and 99999
        cout << myNums[i] << " "; //Output each number
    }
    cout << endl;
    
    //Input Data
    do{ //Input Validation
        cout << "Enter this weeks winning number: ";
        cin >> winNum;
    } while(winNum < 10000 || winNum > 99999);
    
    //Calculate and output results
    cout << "YOU " << (contains(myNums, SIZE, winNum) ? "WIN!" : "LOSE!") 
         << endl;
    
    //Exit
    return 0;
}

/******************************************************************************/
/**                               Check                                      **/
/******************************************************************************/
bool contains(const int arr[], int length, int key){
    for(int i = 0; i < length; ++i){ 
        if(arr[i] == key){ 
            return true; 
        }
    }
    
    return false; //Otherwise return false
}