/*
Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and
6 rows.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input a single-digit number: ";
    cin >> n;
    cout << n << n << n << n << endl;
    cout << n << " " << " " << " " << n << endl;
    cout << n << " " << " " << " " << n << endl;
    cout << n << n << n << n << endl;
    cout << n << " " << " " << " " << n << endl;
    cout << n << " " << " " << " " << n << endl;
    return 0;
}