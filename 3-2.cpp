/*
Write a C++ program to add two numbers using the concept of data abstraction
*/

#include <iostream>
using namespace std;

class Add
{
    private:
        int a, b;
    public:
        void get()
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        void display()
        {
            cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
        }
};

int main()
{
    Add obj;
    obj.get();
    obj.display();
    return 0;
}
