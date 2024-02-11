/*
ABC Corporation decides to give 11.5% for its workers as a compensation pay for a period of six
months. Develop a program to read employee’s previous annual salary. Output the new annual salary,
new monthly salary and old monthly salary. Also specify the exact amount received as compensation
pay. Use a variable declaration with the modifier const to express the pay increase.
*/

#include <iostream>
using namespace std;

int main() {
    const double compensation = 0.115;
    double old_annual_salary, new_annual_salary, old_monthly_salary, new_monthly_salary, compensation_pay;
    cout << "Input the employee's previous annual salary: ";
    cin >> old_annual_salary;
    new_annual_salary = old_annual_salary + (old_annual_salary * compensation);
    old_monthly_salary = old_annual_salary / 12;
    new_monthly_salary = new_annual_salary / 12;
    compensation_pay = new_annual_salary - old_annual_salary;
    cout << "The new annual salary: " << new_annual_salary << endl;
    cout << "The new monthly salary: " << new_monthly_salary << endl;
    cout << "The old monthly salary: " << old_monthly_salary << endl;
    cout << "The exact amount received as compensation pay: " << compensation_pay << endl;
    return 0;
}