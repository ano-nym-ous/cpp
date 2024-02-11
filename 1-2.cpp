/*
Write a C++ program to find the area of any triangle using Heron's formula.
Visual Presentation:

Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, s, area;
    cout << "Input the length of 1st side of the triangle : ";
    cin >> a;
    cout << "Input the length of 2nd side of the triangle : ";
    cin >> b;
    cout << "Input the length of 3rd side of the triangle : ";
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is : " << area << endl;
    return 0;
}