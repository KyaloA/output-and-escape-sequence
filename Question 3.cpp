#include <iostream>
using namespace std;

int main()
{
    // Step 1: variable declarations
    int gross_salary, net_salary, PAYE_rate;
    gross_salary = 10000;

    // Step 3: Arithmetic operations
    PAYE_rate = 0.25 * gross_salary;
    net_salary = gross_salary - PAYE_rate;

    // Step 4: Output
    cout<<"The net_salary is "<<net_salary;

    return 0;
}