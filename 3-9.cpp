/*
Tamilnadu Educational Minister has ordered the Director of Higher education to make the Libraries in
Government schools advanced. So they are planning to create a software which keeps track of the
books availability and respond to students request for books. Can you help the government to do this?
Functional Description:
Input values need to be passed to the Parameterized constructor and to output need to be
printed by accessing i t.
Constraints:
1< roll ≤100
100 ≤ bcode< 999
Input Format:
First and Second Line of Input has 3 values of type integer, String and Integer separated by a
space representing
Roll Number, Name and Book code respectively. Output Format:

Print the Details of Student and Book in the expected format.
*/

#include <iostream>
using namespace std;

class Library
{
    private:
        int roll;
        string name;
        int bcode;
    public:
        Library(int r, string n, int b)
        {
            roll = r;
            name = n;
            bcode = b;
        }
        void display()
        {
            cout << "Roll Number: " << roll << endl;
            cout << "Name: " << name << endl;
            cout << "Book Code: " << bcode << endl;
        }
};

int main()
{
    int roll, bcode;
    string name;
    cout << "Enter the roll number, name, and book code: ";
    cin >> roll >> name >> bcode;
    Library obj(roll, name, bcode);
    obj.display();
    return 0;
}
