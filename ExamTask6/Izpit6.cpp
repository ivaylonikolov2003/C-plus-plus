#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
private:
    string name;
    string number;
    double balance;
    double percent;
public:
    BankAccount(string name, string number, double balance, double percent) {
        this->name = name;
        this->number = number;
        this->balance = balance;
        this->percent = 1.2;
    }
    
    void display() {
        cout << name << endl;
        cout << number << endl;
        cout << balance << endl;
        cout << percent << endl;
    }

    void lihva(int month) {
        cout << percent * month << endl;
    }

    double DepositMoney(double money) {
        return balance += money;
    }

    double WithdrawMoney(double money) {
        return balance -= money;
    }
    double getBalance() const {
        return balance;
    }

    string getNumber() const {
        return number;
    }
};

class DepAccount : public BankAccount {
private:
    string date;

public:
    DepAccount(string name, string number, double balance, double percent, string date) : BankAccount(name, number, balance, percent) {
        this->date = date;
    
    }
    string getDate() const {
        return date;
    }

};

int main()
{
    vector<DepAccount> accounts = {
        DepAccount("Maria Petrova", "BG789101", 2000.0, 1.2, "2024-06-14"),
        DepAccount("Ivan Ivanov", "BG123456", 1500.0, 1.5, "2024-06-14"),
        DepAccount("Georgi Georgiev", "BG555666", 3000.0, 1.0, "2024-06-13")
    };

    string currentDate = "2024-06-14";

    cout << "\nAccounts available for withdrawal on " << currentDate << ":\n";
    for (const auto& acc : accounts) {
        if (acc.getDate() == currentDate) {
            cout << "Account Number: " << acc.getNumber() << " | Balance: " << acc.getBalance() << endl;
        }
    }

    return 0;
}

