/*
Tamilnadu land registration authority is panning to keep track of the native addresses and total area of
the flats people have across the state. Since the total population and area need to be monitored is huge.
Government is looking for the software which does this task. Can you help them with proper
programming logic for implementing the same?
Constraints:
1≤ hno<500
1< no room< 10
1≤ length < 50
1< breadth < 50
1≤ height < 50
Input Format:
The first line of the input contain a single string denoting the house name.
The second line of the input contain three values of type Integer String and String separated
by a space representing house number, city and state respectively. The third line of the input has a single Integer representing the number of rooms.
The subsequent lines of input must have length, breadth and height of each room
Output Format:
Print the details of the house in the expected format.
*/
#include <iostream>
using namespace std;

class House
{
    private:
        string houseName;
        int houseNumber;
        string city;
        string state;
        int numberOfRooms;
        int totalArea;
    public:
        House(string hn, int hno, string c, string s, int nor)
        {
            houseName = hn;
            houseNumber = hno;
            city = c;
            state = s;
            numberOfRooms = nor;
            totalArea = 0;
        }
        void getRoomDetails()
        {
            int length, breadth, height;
            for (int i = 0; i < numberOfRooms; i++)
            {
                cout << "Enter the length, breadth, and height of room " << i + 1 << ": ";
                cin >> length >> breadth >> height;
                totalArea += length * breadth * height;
            }
        }
        void display()
        {
            cout << "House Name: " << houseName << endl;
            cout << "House Number: " << houseNumber << endl;
            cout << "City: " << city << endl;
            cout << "State: " << state << endl;
            cout << "Total Area: " << totalArea << endl;
        }
};

int main()
{
    string houseName, city, state;
    int houseNumber, numberOfRooms;
    cout << "Enter the house name: ";
    cin >> houseName;
    cout << "Enter the house number, city, and state: ";
    cin >> houseNumber >> city >> state;
    cout << "Enter the number of rooms: ";
    cin >> numberOfRooms;
    House obj(houseName, houseNumber, city, state, numberOfRooms);
    obj.getRoomDetails();
    obj.display();
    return 0;
}