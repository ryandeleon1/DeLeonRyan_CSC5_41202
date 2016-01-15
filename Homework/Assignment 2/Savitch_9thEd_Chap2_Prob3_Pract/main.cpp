/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 4:44 PM
 * Converting running speed to pace 
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    float mph; //Speed in miles per hour
    float pace; //pace in minutes and second per mile
    int min, sec;
    
//Inputs
    cout<<"Input your speed in miles per hour."<<endl;
    cin>>mph;

//Calculate pace
    pace=(1/mph)*60;
    sec=(pace-(static_cast<int>(pace)))*60;
    min=static_cast<int>(pace);
            
    
 //Outputs results
    cout<<"The speed you are running at is "<<mph<<" miles per hour "<<endl;
    cout<<"The pace you are running at is "<<min<<" minutes"
    <<" and "<<sec<<" seconds per mile."<<endl;
    return 0;
}

