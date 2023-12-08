/*
    This pointer special pointer in C++, available inside the methods of a class and points to the current instance of the class.
    Main use is to distinguish class members from method parameters when they have the same name.
*/

#include<iostream>

using namespace std;

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    BankAccount(const std::string& holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds!" << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Account holder: " << accountHolder << ", Balance: $" << balance << std::endl;
    }

    void transferTo(BankAccount* otherAccount, double amount) {
        if (balance >= amount) {
            balance -= amount;
            otherAccount->deposit(amount);
            std::cout << "Transfer successful!" << std::endl;
        } else {
            std::cout << "Insufficient funds for transfer!" << std::endl;
        }
    }
};


int main() {
    BankAccount aliceAccount("Alice", 100.0);
    BankAccount bobAccount("Bob", 500.0);

    aliceAccount.displayBalance();
    bobAccount.displayBalance();

    aliceAccount.transferTo(&bobAccount, 300.0);

    aliceAccount.displayBalance();
    bobAccount.displayBalance();

    return 0;
}