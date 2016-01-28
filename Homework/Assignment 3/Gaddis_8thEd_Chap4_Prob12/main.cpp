/* 
 * File:   main.cpp
 * Author: Ryan Deleon
 * Created on January 20, 2016, 8:36 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//GLobal Constants

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned short price=99; //price for software
    float tier1 = 0.2f,tier2 = 0.3f,tier3 = 0.4f, tier4 = 0.5f;
    unsigned short numSft,total; 
    float discount; 
    
    //Problem Information
    cout << "Gaddis 8th Ed Chap4 Prob12" << endl;
    cout << "Discount Calculator For Software Purchase"<<endl<<endl;
    
    //Input Data
    do{ 
        cout<<"How many software downloads are you buying? ";
        cin>>numSft;
    } while(numSft< 0);
    
    //Output
    if (numSft < 10){ 
        discount=0.0f;
    }
    else if (numSft < 20){
        discount=tier1;
    }
    else if (numSft < 50){ 
        discount=tier2;
    }
    else if (numSft < 100){
        discount=tier3;
    }
    else{ 
        discount=tier4;
    }
    
    //Calculate the total price
    total = (price * numSft) - ((price * numSft) * discount);
    
    //Output Results
    cout<<"SubTotal     = $" <<price*numSft<<endl;
    cout<<"Discount     =  " <<discount*100<<"%"<<endl;
    cout<<"Total        = $" <<total<<endl; 
    
    //All Done!
    return 0;
}