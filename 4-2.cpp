/*
Create a class `Rectangle` with private attributes length and width. Implement methods inside the class 
to calculate the area and perimeter of the rectangle. Use appropriate access specifiers
*/

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int width;
    public:
        void setLength(int l)
        {
            length = l;
        }
        void setWidth(int w)
        {
            width = w;
        }
        int getArea()
        {
            return length * width;
        }
        int getPerimeter()
        {
            return 2 * (length + width);
        }
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setWidth(5);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    return 0;
}
