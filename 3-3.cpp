/*
Develop a class to represent a bank account. Include methods to deposit money, withdraw money, and
check the account balance. Ensure that the withdrawal method checks for sufficient funds.
*/
#include <iostream>
using namespace std;

class BankAccount
{
    private:
        int accountNumber;
        string accountHolderName;
        float balance;
    public:
        void get()
        {
            cout << "Enter the account number: ";
            cin >> accountNumber;
            cout << "Enter the account holder's name: ";
            cin >> accountHolderName;
            cout << "Enter the balance: ";
            cin >> balance;
        }
        void deposit()
        {
            float amount;
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            balance += amount;
        }
        void withdraw()
        {
            float amount;
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            if (amount > balance)
            {
                cout << "Insufficient funds" << endl;
            }
            else
            {
                balance -= amount;
            }
        }
        void display()
        {
            cout << "Account number: " << accountNumber << endl;
            cout << "Account holder's name: " << accountHolderName << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main()
{
    BankAccount obj;
    obj.get();
    obj.deposit();
    obj.withdraw();
    obj.display();
    return 0;
}
