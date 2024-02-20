/*
Design a class for managing inventory items with private data members. Use access specifiers to 
control access and implement methods for item addition and display
*/

#include <iostream>
using namespace std;

class Inventory
{
    private:
        string item;
        int quantity;
    public:
        void addItem(string i, int q)
        {
            item = i;
            quantity = q;
        }
        void displayItem()
        {
            cout << "Item: " << item << endl;
            cout << "Quantity: " << quantity << endl;
        }
};

int main()
{
    Inventory i;
    i.addItem("Laptop", 10);
    i.displayItem();
    return 0;
}
