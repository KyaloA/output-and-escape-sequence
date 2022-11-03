#include <iostream>
using namespace std;

int main()
{
    // Step 1: variable declarations
    float radius, volume, height, area;

    // Step 2: Capture input from user
    cout<< "Enter radius: ";
    cin>> radius;

    cout<< "Enter height: ";
    cin>> height;

    // Step 3: Arithmetic operations
    area = 2 * 3.141592 * radius * height + 2 * 3.141592 * radius * radius;
    volume = 3.141592 * radius * radius * height;

    // Step 4: Output
    cout<<"The volume of the cylinder is"<<volume;
    cout<<"\n The area of the cylinder is"<<area;

    return 0;
}