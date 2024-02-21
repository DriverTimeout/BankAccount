#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

int main() {
    string raux;
    double withdraw;
    double deposit;
    double balance;

    cout << "Enter the name: ";
    cin >> raux;
    cout << "Enter your balance: ";
    cin >> balance;
    cout << "Enter how much you want to deposit: ";
    cin >> deposit;
    cout << "Enter how much you want to withdraw: ";
    cin >> withdraw;

    BankAccount spice(raux);

    cout << "Your account name: " << spice.GetName() << endl;

    spice.BankAccount(raux, balance);
    cout << "Your account name: " << spice.GetName() << " and the current balance: " << balance << endl;

    spice.Withdraw(withdraw);

    spice.Deposit(deposit);

    cout << "Your previous balance: " << balance << endl;

    spice.SetBalance(balance);
    cout << "Your updated balance is now: " << spice.GetBalance() << endl;
    cout << "The name registered to the account: " << spice.GetName() << endl;

    // No return statement here, as it's not necessary in C++

}
