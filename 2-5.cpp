/*
Demonstrates dynamic memory allocation using new to create an array of integers. It assigns values to
the dynamically allocated array, prints them, and deallocates the memory using delete[].
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input the number of elements to store in the array: ";
    cin >> n;
    int* array = new int[n];
    cout << "Input " << n << " elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    delete[] array;
    return 0;
}