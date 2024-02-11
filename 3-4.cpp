/*
Create a class to represent a student in a grading system. Include attributes for the student's name, ID,
and an array to store grades. Implement methods to calculate the average grade, display the student's
information, and add a new grade.
*/
#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int id;
        int grades[5];
    public:
        void get()
        {
            cout << "Enter the student's name: ";
            cin >> name;
            cout << "Enter the student's ID: ";
            cin >> id;
            cout << "Enter the student's grades: ";
            for (int i = 0; i < 5; i++)
            {
                cin >> grades[i];
            }
        }
        void display()
        {
            cout << "Student's name: " << name << endl;
            cout << "Student's ID: " << id << endl;
            cout << "Student's grades: ";
            for (int i = 0; i < 5; i++)
            {
                cout << grades[i] << " ";
            }
            cout << endl;
        }
        void addGrade()
        {
            int grade;
            cout << "Enter the grade to add: ";
            cin >> grade;
            for (int i = 0; i < 5; i++)
            {
                if (grades[i] == 0)
                {
                    grades[i] = grade;
                    break;
                }
            }
        }
        void averageGrade()
        {
            float sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum += grades[i];
            }
            cout << "Average grade: " << sum / 5 << endl;
        }
};

int main()
{
    Student obj;
    obj.get();
    obj.display();
    obj.addGrade();
    obj.display();
    obj.averageGrade();
    return 0;
}
