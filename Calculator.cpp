#include<iostream>
using namespace std;
int main()
{
    // Step 1: variable declarations
    int length, width, area;

    // Step 2: Capture input from user
    cout<< "Please enter length: \n";
    cin>> length;

    cout<< "Please enter width: \n";
    cin>> width;

    // Step 3: Logic operations
    area = length * width;
    cout<<"Area of a rectangle whose length is "<<length<<" and width is "<<width<<" is "<<area;
    return 0;
}