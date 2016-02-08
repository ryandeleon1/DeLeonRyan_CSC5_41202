/* 
    File:   main.cpp
    Author: Ryan DeLeon
    Created on Feb 3, 2016, 8:35 PM
    Purpose:  Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<endl<<endl<<"Assignment 5 Problem Set"<<endl;
        cout<<"Type 1 to Display Savitch 9thEd Chap5 Prob1"<<endl;
        cout<<"Type 2 to Display Savitch 9thEd Chap5 Prob2"<<endl;
        cout<<"Type 3 to Display Savitch 9thEd Chap5 Prob5"<<endl;
        cout<<"Type 4 to Display Gaddis 8thEd Chap6 Prob1"<<endl;
        cout<<"Type 5 to Display Gaddis 8thEd Chap6 Prob5"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);

    //Exit stage right
    return 0;
}

/******************************************************************************/
/************************** Problem 1 *****************************************/
/******************************************************************************/
void problem1(){
    
    //Function prototypes
    void getNums(int[], int);
    void prntAry(int[],int);
    float average(int[], int);
    float stdDev(int[], float, int);

        //Initialize the seed
        srand(static_cast<unsigned int>(time(0)));

        const int SIZE=4;
        int array[SIZE];

        //Fill the array with random 2 digit numbers
        getNums(array,SIZE);

        //Print the array
        prntAry(array,SIZE);

         float avrg;
        avrg=average(array,SIZE);

        //output the average
        cout<<endl<<"The average of these values = "<<avrg<<endl;



        //Output the standard deviation
        cout<<endl<<"The standard deviation of these values = "
                <<setprecision(2)<<fixed<<showpoint<<stdDev(array,avrg,SIZE)<<endl;
}
    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                     Print Array
    //******************************************************************************
    void prntAry(int a[],int n){
        //Loop and fill the array with random numbers
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                     Fill Array
    //******************************************************************************
    void getNums(int a[], int n=4){
        //Loop and fill the array with random numbers
        for(int i=0;i<n;i++){
            a[i]=rand()%99;//[1,99]
        }
    }
    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                     Average
    //******************************************************************************
    float average(int a[],int n=4){
        //Declare Variables
        float avg;
        int sum;
        //Loop and fill the array with random numbers
        for(int i=0;i<n;i++){
            sum+=a[i];
        }avg=static_cast<float>(sum)/n;
        return avg;
    }
    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                     Standard Deviation
    //******************************************************************************
    float stdDev(int a[], float avg, int n=4){
        //Declare Variables
        float stdDevi;
        float sumV=0;
        float var=0;

        //variance
        for(int i=0;i<n;i++)
            sumV+=pow((a[i]-avg),2);
        var=(sumV)/n;          
        stdDevi=sqrt(var);
        return stdDevi;
    }


/******************************************************************************/
/************************** Problem 2 *****************************************/
/******************************************************************************/
void problem2(){
    //Function prototypes
    void inputs(int &, int &);
    float conv1(int,int);
    float conv2(float);
    void outputs(float);

        float totFeet,totMeters;
        int feet, inches;
        //Call inputs function
        inputs(feet,inches);

        //Call conversion 1
        totFeet=conv1(feet,inches);

        //Call conversion 2
        totMeters=conv2(totFeet);

        //call output
        outputs(totMeters)  ;

    }

    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                     Inputting Numbers 
    //******************************************************************************
    void inputs(int &feet,int &inches){
        //Loop and fill the array with random numbers
        cout<<"Enter the amount of feet : ";
        cin>>feet;
        cout<<"Enter the amount of inches : ";
        cin>>inches;
        cout<<endl;
    }

    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                                    Converting step 1
    //******************************************************************************
    float conv1(int feet, int inches){
        //putting the amount of feet as a decimal
        float totFeet=0;
        totFeet=(static_cast<float>(inches)/12)+feet;
        return totFeet;
    }
    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                                    Converting step 2
    //******************************************************************************
    float conv2(float totFeet){
        float totMeters;
        totMeters=totFeet*.3048;
        return totMeters;
    }
    //000000011111111112222222222333333333344444444445555555555666666666677777777778
    //345678901234567890123456789012345678901234567890123456789012345678901234567890
    //                                    Outputs
    //******************************************************************************
    void outputs(float totMeters){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"That is equal to "<<totMeters<<" meters"endl;
    }
/******************************************************************************/
/************************** Problem 3 *****************************************/
/******************************************************************************/
void problem3(){
    //Function Prototypes
void input(int&, int&);
void convrsn(int, int, int&, float&);
void output(int, float);

//Declare and initialize variables
    int   pounds, ounces; //user input pounds and ounces
    int   kiloG;          //total kilo grams
    float grams;          //total grams
    
//Input Data
    input(pounds, ounces);
//calculate or map inputs to outputs
    convrsn(pounds, ounces, kiloG, grams);
//Output the results    
    output(kiloG,grams);
    
}
/******************************************************************************/
/**                               Read inputs                                **/
/******************************************************************************/
void input(int& lbs, int& ounce){
    cout<<"How many pounds have you measured?"<<endl;
    cin>>lbs;
    cout<<"How many ounces have you measured?"<<endl;
    cin>>ounce;
}
/******************************************************************************/
/*                             Conversion                                     */
/******************************************************************************/
void convrsn(int lbs, int ounce, int& kiloG, float& grams){
//declare variables
    const float LBS2KG=1/2.2046f;  //conversion for pounds to Kg
    const float OUN2LBS=1.0/16.0f; //conversion for ounces to pounds
    float ouPound, pounds, kiloGm, deciKg;                

    
//calculation of pounds and ounces to Kg
    ouPound=ounce*OUN2LBS;
    pounds=lbs+ouPound;
    kiloGm=pounds*LBS2KG;
    
//calculation of separation of Kg and g
    deciKg=kiloGm-static_cast<int>(kiloGm);
    grams=deciKg*1000;
    kiloG=kiloGm;
    
}
//******************************************************************************
//                                Output
//******************************************************************************
void output(int kiloG, float grams){
    
        cout<<"The number of Kg = "<<kiloG<<endl;
        cout<<"The number of g = "<<grams<<endl;
}

/******************************************************************************/
/************************** Problem 4 *****************************************/
/******************************************************************************/
void problem4(){
    //Constants
    float GRAVITY=9.81f;
    //Function Prototypes
    float fallDist(short);
  
    //Calculate and Output results
    cout<<fixed<<setprecision(1)<<showpoint;
    for(int i=1; i<=10;++i){ 
        cout<<"If you fall for "<<i<<" seconds you will fall "<<fallDist(i)<<" meters."<<endl;
    }
}

/******************************************************************************/
/**                           Falling Distance                               **/
/******************************************************************************/
float fallDist(short time){
    float GRAVITY=9.81f;
    return 0.5f*GRAVITY*pow(time,2);
}

/******************************************************************************/
/************************** Problem 5 *****************************************/
/******************************************************************************/
void problem5(){
    //Function Prototypes
    float retail(unsigned int, unsigned int);

    //Declaration and Initialization
    short value;
    unsigned short cost, markUp; 

    //Inputs
    do { 
        cout<<"Enter the wholesale cost of the product: $";
        cin>>value;
    } while (value < 0);
    cost=value; 
    do { 
        cout<<"Enter the markup percentage:     ";
        cin>>value;
    } while (value<0);
    markUp=value; 
    
    //Calculate and Output Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The retail value is $"<<retail(cost,markUp);
}


/******************************************************************************/
/**                        Calculate Retail Price                            **/
/******************************************************************************/
float retail(unsigned int cost, unsigned int markUp) {
    return cost*(1.0f+static_cast<float>(markUp)/100);
}


