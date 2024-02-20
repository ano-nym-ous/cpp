/*
Consider a class named `Car` with private, protected, and public members. Create an object of the class 
and demonstrate how each type of access specifier works in accessing the members.
*/

#include <iostream>
using namespace std;

class Car
{
    private:
        int price;
    protected:
        string brand;
    public:
        string model;
};

int main()
{
    Car c;
    // c.price = 1000000; // Error: 'int Car::price' is private within this context
    // c.brand = "BMW"; // Error: 'std::__cxx11::string Car::brand' is protected within this context
    c.model = "X5";
    cout << "Model: " << c.model << endl;
    return 0;
}
