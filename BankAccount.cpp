#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(string raux) {
    this->raux = raux;
    this->balance = 0; // Initialize balance to 0
}

BankAccount::BankAccount(string raux, double balance) {
    this->raux = raux;
    this->balance = balance;
}

void BankAccount::Withdraw(double withdraw) {
    this->withdraw = withdraw;
    if (withdraw >= balance) {
        cout << "You cannot withdraw more than your current balance of: " << balance << endl;
    }
}

void BankAccount::Deposit(double deposit) {
    this->deposit = deposit;
    if (deposit >= 1000) {
        cout << "You cannot deposit 1000 or more" << endl;
    }
}

void BankAccount::SetBalance(double balance) {
    this->balance = balance;
}

string BankAccount::GetName() {
    return this->raux;
}

double BankAccount::GetBalance() {
    double juio = deposit + (balance - withdraw);
    return juio;
}
