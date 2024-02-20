/*
Design a base class Vehicle with protected data members like speed and color. Derive classes Car and 
Bike with additional features. Implement methods to display vehicle details.
*/

#include <iostream>
using namespace std;

class Vehicle
{
    protected:
        int speed;
        string color;
};

class Car : public Vehicle
{
    public:
        void setCarDetails(int s, string c)
        {
            speed = s;
            color = c;
        }
        void displayCarDetails()
        {
            cout << "Car Details" << endl;
            cout << "Speed: " << speed << endl;
            cout << "Color: " << color << endl;
        }
};

class Bike : public Vehicle
{
    public:
        void setBikeDetails(int s, string c)
        {
            speed = s;
            color = c;
        }
        void displayBikeDetails()
        {
            cout << "Bike Details" << endl;
            cout << "Speed: " << speed << endl;
            cout << "Color: " << color << endl;
        }
};

int main()
{
    Car c;
    c.setCarDetails(200, "Red");
    c.displayCarDetails();
    Bike b;
    b.setBikeDetails(100, "Black");
    b.displayBikeDetails();
    return 0;
}
