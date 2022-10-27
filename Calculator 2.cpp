#include<iostream>
using namespace std;
int main()
{
    // Step 1: variable declarations
    int num1, num2, sum, product, difference, division;

    // Step 2: Capture input from user
    cout<< "Enter Value 1: ";
    cin>> num1;

    cout<< "Enter value 2: ";
    cin>> num2;

    // Step 3: Logic operations
    product = num1 * num2;
    sum = num1 + num2;
    difference = num1 - num2;
    division = num1/num2;
    cout<<num1<<" + "<<num2 <<" = "<<sum;
    cout<<"\n"<<num1<<" * "<<num2 <<" = "<<product;
    cout<<"\n"<<num1<<" - "<<num2 <<" = "<<difference;
    cout<<"\n"<<num1<<" / "<<num2 <<" = "<<division;
    return 0;
}