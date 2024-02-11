/*
Write a C++ program that will display if a students is pass or not in his exam.

(50% or more is pass). If the student is Pass than your program should display
which letter the student has obtained.
?? 85% or more E for excellent
?? 75% or more but less than 85% O for Outstanding
?? 65% or more but less than 75% G for good
?? Less than 65% S for satisfactory
If however the student is Fail (below 50% marks) your program should display
1
whether the student should Resit or Redo depending on the following criteria.
?? 33% or more Resit in exam
?? Less than 33% Redo course
*/

#include <iostream>
using namespace std;

int main() {
    double marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if (marks >= 50) {
        if (marks >= 85) {
            cout << "E" << endl;
        } else if (marks >= 75) {
            cout << "O" << endl;
        } else if (marks >= 65) {
            cout << "G" << endl;
        } else {
            cout << "S" << endl;
        }
    } else {
        if (marks >= 33) {
            cout << "Resit in exam" << endl;
        } else {
            cout << "Redo course" << endl;
        }
    }
    return 0;
}