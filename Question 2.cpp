#include <iostream>
using namespace std;

int main()
{
    // Step 1: variable declarations
    int celsius, fahrenheit;

    // Step 2: Capture input from user
    cout<< "Enter temperature in F: ";
    cin>> fahrenheit;

    // Step 3: Arithmetic operations
    celsius = 5.0/9.0 * (fahrenheit - 32.0);

    // Step 4: Output
    cout<<"The temperature in celsius is "<<celsius;

    return 0;
}