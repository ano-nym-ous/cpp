/*
Write a C++ program to compute the distance between two points on the surface of the earth.
*/

#include <iostream>
#include <cmath>
using namespace std;

#define M_PI 3.14159265358979323846

int main() {
    double x1, y1, x2, y2, d;
    cout << "Input the latitude of coordinate 1: ";
    cin >> x1;
    cout << "Input the longitude of coordinate 1: ";
    cin >> y1;
    cout << "Input the latitude of coordinate 2: ";
    cin >> x2;
    cout << "Input the longitude of coordinate 2: ";
    cin >> y2;
    x1 = x1 * M_PI / 180;
    y1 = y1 * M_PI / 180;
    x2 = x2 * M_PI / 180;
    y2 = y2 * M_PI / 180;
    d = 6371.01 * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));
    cout << "The distance between the two points is: " << d << " km" << endl;
    return 0;
}