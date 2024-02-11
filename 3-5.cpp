/*
Develop a class to represent an employee in a payroll system. Include attributes for the employee's
name, ID, hourly wage, and hours worked. Implement methods to calculate the weekly salary and
display the employee's information.
*/
#include <iostream>
using namespace std;

class Employee
{
    private:
        string name;
        int id;
        float hourlyWage;
        float hoursWorked;
    public:
        void get()
        {
            cout << "Enter the employee's name: ";
            cin >> name;
            cout << "Enter the employee's ID: ";
            cin >> id;
            cout << "Enter the employee's hourly wage: ";
            cin >> hourlyWage;
            cout << "Enter the employee's hours worked: ";
            cin >> hoursWorked;
        }
        void display()
        {
            cout << "Employee's name: " << name << endl;
            cout << "Employee's ID: " << id << endl;
            cout << "Employee's hourly wage: " << hourlyWage << endl;
            cout << "Employee's hours worked: " << hoursWorked << endl;
        }
        void weeklySalary()
        {
            cout << "Weekly salary: " << hourlyWage * hoursWorked << endl;
        }
};

int main()
{
    Employee obj;
    obj.get();
    obj.display();
    obj.weeklySalary();
    return 0;
}
