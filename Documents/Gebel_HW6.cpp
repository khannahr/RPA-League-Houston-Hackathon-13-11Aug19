//Program Name: Minimum and Maximum
//Purpose: This is a simple program to determine and return the lowest and highest values of two numbers. 
//Author: Kristina Gebel
//Date Last Modified: 1/27/2019

//Minimum and Maximum Program 


#define _USE_MATH_DEFINES
#include <cmath>
# include <iostream>
using namespace std;
int main () {
//double input1 and initialize it with 65,	
double input1 = 65;
//double input2 and initialize it with 23,
double input2= 23;
//double minimumValue (lower inputted value)
double minimumValue = fmin(input1, input2);
//double maximumValue (higher inputted value
double maximumValue=fmax(input1,input2);
// Welcome 
cout << "Welcome to Minimum and Maximum!" <<  endl;
//
cout << "The number " << input2 << " is lower than "<< input1 << endl;
return 0;
}
