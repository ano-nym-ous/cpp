/*
You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5 and
adding 32. Write a program that allows the user to enter a floating-point number representing degrees
Celsius, and then displays the corresponding degrees Fahrenheit.
*/

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Input the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "The temperature in Celsius: " << celsius << endl;
    cout << "The temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}