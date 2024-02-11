/*
Develop a C++ program that allows the user to enter a time in seconds. The output must show how far
an object in freefall for that length of time. There is no friction or resistance in air. The acceleration of
32 feet / second and this is to be defined as a constant variable. Equation to be used is distance = 0.5 *
acceleration * time2
*/

#include <iostream>
using namespace std;

int main() {
    const int acceleration = 32;
    int time, distance;
    cout << "Input the time in seconds: ";
    cin >> time;
    distance = 0.5 * acceleration * time * time;
    cout << "The distance an object in freefall for " << time << " seconds is: " << distance << " feet" << endl;
    return 0;
}