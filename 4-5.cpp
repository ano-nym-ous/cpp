/*
Design a simple program to manage student information using methods in C++. The program should be 
able to add new students, display student details, and calculate the average marks of all students. 
Define some functions outside class using the scope resolution operator
*/

#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int roll;
        int marks[3];
    public:
        void addStudent(string n, int r, int m1, int m2, int m3)
        {
            name = n;
            roll = r;
            marks[0] = m1;
            marks[1] = m2;
            marks[2] = m3;
        }
        void displayStudent()
        {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        }
        static float averageMarks(Student s[], int n)
        {
            float avg = 0;
            for (int i = 0; i < n; i++)
            {
                avg += (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]);
            }
            return avg / (n * 3);
        }
};

int main()
{
    Student s[3];
    s[0].addStudent("John", 1, 90, 80, 70);
    s[1].addStudent("Jane", 2, 85, 75, 65);
    s[2].addStudent("Doe", 3, 95, 85, 75);
    for (int i = 0; i < 3; i++)
    {
        s[i].displayStudent();
    }
    cout << "Average Marks: " << Student::averageMarks(s, 3) << endl;
    return 0;
}
