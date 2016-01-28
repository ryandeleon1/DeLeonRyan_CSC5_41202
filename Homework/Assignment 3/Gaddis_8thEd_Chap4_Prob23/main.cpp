/* 
 * File:   main.cpp
 * Author: Ryan Deleon
 * Created on January 20, 2016, 8:36 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries


//Global Constants
const float PI=3.14159f;

//Function Protoypes

//Exucution begins here
int main(int argc, char** argv) {
    //Declaration and Initialization
    unsigned short shape; //which shape to calculate
    float radius, base, height, width, length; 
     
    cout<<"Gaddis 8th Ed. Chap4 Prob23"<<endl;
    cout<<"Area of Circle, Rectangle, and Triangle."<<endl;

    do { 
        cout<<"Input the number next to the shape youd like to get the area of"<<endl;
        cout<<"1. Area of a Circle"<<endl;
        cout<<"2. Area of a Rectangle"<<endl;
        cout<<"3. Area of a Triangle"<<endl;
        cout<<"4. Exit"<<endl;
        do {
            cin>>shape;
        } while (shape<0 && shape>4);
        
        cout << fixed << setprecision(4) << showpoint;
        //Switch between modes
        switch(shape){
            case 1:
            {
                cout<<"Input the radius of the circle."<<endl;
                cin>>radius;
                //Calculate the area
                cout<<"The area of the circle = "<<PI*(radius*radius)<<endl;
                break;
            }
            case 2:
            {   
                cout<<"Input the width of the rectangle. "<<endl;
                cin>>width;
                cout<<"Input the length of the rectangle: "<<endl;
                cin>>length;
                //Calculate the area
                cout<<"The area of the rectangle ="<<width*length<<endl;
                break;
            }  
            case 3: 
            {
                cout<<"Input the base of the triangle. "<<endl;
                cin>>base;
                //Input height
                cout<<"Input the height of the triangle. "<<endl;
                cin>>height;
                //Calculate the area
                cout<<"The area of the triangle = "<<base*height*0.5f<<endl;
                break;
            }
        }
    } while (shape != 4);
    
    //Exit
    return 0;
}