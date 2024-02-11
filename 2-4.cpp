/*
Ganesh aims to become a police officer and so applies for the job of Inspector. When he appeared for
physical test, he failed in the test due to overweight. Now Ganesh decides to do intense training to
reduce weight. The trainer asks his BMI for deciding the level of training required. Help him to
calculate the BMI using the formula: BMI = weight / height
2
*/

#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Input the weight of Ganesh: ";
    cin >> weight;
    cout << "Input the height of Ganesh: ";
    cin >> height;
    bmi = weight / (height * height);
    cout << "The BMI of Ganesh is: " << bmi << endl;
    return 0;
}