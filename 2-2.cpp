/*
Ananya bought a model globe for a project work and that was medium sized. She found the radius of
the globe. But she would like to know the volume of that globe. Can you help her in finding the
Volume of the globe using the formula: (4.0/3.0) * π* r^3, where π = 3.14 is a constant value.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, volume;
    cout << "Input the radius of the globe: ";
    cin >> r;
    volume = (4.0 / 3.0) * 3.14 * pow(r, 3);
    cout << "The volume of the globe is: " << volume << endl;
    return 0;
}