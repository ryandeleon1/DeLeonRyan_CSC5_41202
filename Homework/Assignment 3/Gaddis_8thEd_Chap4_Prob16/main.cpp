/* 
 * File:   main.cpp
 * Author: Ryan Deleon
 * Created on January 20, 2016, 8:36 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
    //Declare an initialize
    string name1, name2, name3; //Names of runners
    float time1, time2, time3; //times for runners
    
    //Problem Information
    cout << "Gaddis 8th Ed. Chap4 Prob16." << endl;
    cout << "Who Won the race?" << endl;
    

    //Inputs
    cout<<"Enter the first runner's name."<<endl;
    getline(cin, name1);
    cout<<"Enter the second runner's name."<<endl;
    getline(cin, name2);
    cout<<"Enter the third runner's name."<<endl;
    getline(cin, name3);
    
    do{
        cout<<endl<<"Enter the first runner's time (secs) "<<endl;
        cin>>time1;
        cout<<"Enter the second runner's time (secs) "<<endl;
        cin>>time2;
        cout<<"Enter the third runner's time (secs) "<<endl;
        cin>>time3;
    } while (time1<0 || time2<0 || time3<0);
    
    //Calculate and Output Results
    if(time1<=time2 && time1<=time3){
        cout<<"The first place runner is "<<name1<<endl;
        if(time2 <= time3){
            cout<<"The second place runner is "<<name2<<endl;
            cout<<"The third place runner is "<<name3<<endl;
        }
        else{ 
            cout<<"The second place runner is "<<name3<<endl;
            cout<<"The third Place runner is "<<name2<<endl;
        }
    }
    else if(time2<=time1 && time2<=time3) {
        cout<<"The first place runner is "<<name2<<endl;
        if(time1 <= time3){ 
            cout<<"The second place runner is " <<name1<<endl;
            cout<<"The third place runner is  "<<name3<<endl;
        }
        else{ 
            cout<<"The second place runner is "<<name3<<endl;
            cout<<"The third place runner is "<<name1<<endl;
        }
    }
    else if (time3<=time1 && time3<=time2){ 
        cout<<"The first place runner is "<<name3<<endl;
        if(time1 <= time2){ 
           cout<<"The second place runner is "<<name1<<endl;
           cout<<"The third place runner is  "<<name2<<endl;
        }
        else{ 
            cout<<"The second place runner is "<<name2<<endl;
            cout<<"The third place runner is  "<<name1<<endl;
        }
        
    }
    
    //Exit
    return 0;
}