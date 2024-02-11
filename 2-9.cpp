/*
Write the program to determine the raise and new salary for an employee to compute the raise. The
input to the program includes the current annual salary for the employee and a number indicating the
performance rating (1=excellent, 2=good, and 3=poor). An employee with a rating of 1 will receive a
6% raise, an employee with a rating of 2 will receive a 4% raise, and one with a rating of 3 will receive
a 1.5% raise.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double current_salary, raise, new_salary;
    int rating;
    cout << "Input the current annual salary: ";
    cin >> current_salary;
    cout << "Input the performance rating (1=excellent, 2=good, 3=poor): ";
    cin >> rating;
    if (rating == 1) {
        raise = current_salary * 0.06;
    } else if (rating == 2) {
        raise = current_salary * 0.04;
    } else {
        raise = current_salary * 0.015;
    }
    new_salary = current_salary + raise;
    cout << "The raise is: " << raise << endl;
    cout << "The new salary is: " << new_salary << endl;
    return 0;
}