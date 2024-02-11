/*
Write a C++ program that takes a number as input and prints its multiplication table up to 10.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input a number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}
