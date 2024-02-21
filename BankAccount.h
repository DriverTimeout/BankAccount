#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

using namespace std;

class BankAccount {
private:
    string raux;
    double balance;
    double withdraw;
    double deposit;
    double vnfi;
    int a = 1000;

public:
    BankAccount(string raux);
    BankAccount(string raux, double balance);

    void Withdraw(double withdraw);
    void Deposit(double deposit);
    void SetBalance(double balance);
    string GetName();
    double GetBalance();
};

#endif // BANKACCOUNT_H
