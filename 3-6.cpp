/*
Write a C++ program to display product detail using classes.
*/

#include <iostream>
using namespace std;

class Product
{
    private:
        int productId;
        string productName;
        float productPrice;
    public:
        void get()
        {
            cout << "Enter the product ID: ";
            cin >> productId;
            cout << "Enter the product name: ";
            cin >> productName;
            cout << "Enter the product price: ";
            cin >> productPrice;
        }
        void display()
        {
            cout << "Product ID: " << productId << endl;
            cout << "Product name: " << productName << endl;
            cout << "Product price: " << productPrice << endl;
        }
};

int main()
{
    Product obj;
    obj.get();
    obj.display();
    return 0;
}
