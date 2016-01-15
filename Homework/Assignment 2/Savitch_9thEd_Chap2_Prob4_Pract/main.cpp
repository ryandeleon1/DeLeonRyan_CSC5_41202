/* 
 * Author: Ryan DeLeon
 * Created on January 14, 2016, 4:55 PM
 * Mad lib Game
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    
//declare variables
    string urName, num, insName, food, adject, color, animal; //Inputs for the mad lib
    
//Inputs
    cout<<"Input your instructor's first or last name."<<endl;
    cin>>insName;
    cout<<"Input your name."<<endl;
    cin>>urName;
    cout<<"Input a food."<<endl;
    cin>>food;
    cout<<"Input a number between 100 and 120."<<endl;
    cin>>num;
    cout<<"Input an adjective."<<endl;
    cin>>adject;
    cout<<"Input an animal."<<endl;
    cin>>animal;
    cout<<"Input a color."<<endl;
    cin>>color;
    cout<<"Here is the funny story!"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
            
 //Outputs results
    cout<<"Dear Instructor "<<insName<<","<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<num<<". Next, my "<<adject<<" pet"<<endl;
    cout<<animal<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late."<<endl;
    cout<<""<<endl;
    cout<<"Sincerely,"<<endl; 
    cout<<urName<<endl;
    return 0;
}

