/*
Write a C++ program to compute the sum of the two given integers and count the number of digits in
the sum value.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, sum, count = 0;
    cout << "Input the first integer: ";
    cin >> a;
    cout << "Input the second integer: ";
    cin >> b;
    sum = a + b;
    cout << "The sum of the two integers is: " << sum << endl;
    while (sum != 0) {
        sum /= 10;
        count++;
    }
    cout << "The number of digits in the sum value is: " << count << endl;
    return 0;
}