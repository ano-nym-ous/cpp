/*
Write a program to display the formatted output as given below.
Formatting the output :
----------------------------
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8 : | 3.1416|
The value of pi 4 decimal place of total width 10 : | 3.1416|
The value of pi 4 decimal place of total width 8 : |--3.1416|
The value of pi 4 decimal place of total width 10 : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status in number : 0
Status in alphabet : false
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1416;
    cout << "The value of pi : " << pi << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << setprecision(4) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << setprecision(4) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << setprecision(4) << showpos << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << setprecision(4) << showpos << pi << "|" << endl;
    cout << "The value of pi in scientific format is : " << scientific << pi << endl;
    cout << "Status in number : " << boolalpha << 0 << endl;
    cout << "Status in alphabet : " << boolalpha << false << endl;
    return 0;
}