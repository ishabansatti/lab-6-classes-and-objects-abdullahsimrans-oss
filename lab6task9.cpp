#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;
    int pin;

public:
    BankAccount(string acc, double bal, int p) : accountNumber(acc), balance(bal), pin(p) {}

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount, int enteredPin)
    {

        if (enteredPin == pin)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal successful.\n";
            }
            else
                cout << "Insufficient balance.\n";
        }
        else
            cout << "Invalid PIN.\n";
    }

    double getBalance() 
    const { return balance; }
};

int main()
{
    BankAccount myAcc("12345", 1000.0, 1122);
    myAcc.deposit(500);
    myAcc.withdraw(200, 1122); // Correct PIN
    cout << "Current Balance: " << myAcc.getBalance() << endl;
    return 0;
}