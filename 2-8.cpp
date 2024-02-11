/*
As activity directory at Ocean Breeze Resort, it is your job to suggest appropriate activities to guests
based on the weather:
temp >= 80:
swimming 60 <= temp < 80:
tennis 40 <= temp < 60:
golf temp < 40: skiing
*/

#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;
    if (temp >= 80) {
        cout << "swimming" << endl;
    } else if (temp >= 60) {
        cout << "tennis" << endl;
    } else if (temp >= 40) {
        cout << "golf" << endl;
    } else {
        cout << "skiing" << endl;
    }
    return 0;
}