#include <iostream>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(const string &accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void DepositMoney(double amount) {
        balance += amount;
        cout << "Deposit successful.Current balance: " << balance << '\n';
    }

    void WithdrawMoney(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal succesful.Current balance: " << balance << '\n';
        }
        else
        {
            cout << "Insufficient balance.Cannot withdraw.'\n'";
        }
    }
};

int main()
{
    double openingBalance = 1000;
    double deposit, withdrawal;

    BankAccount account("SB-123", openingBalance);

    deposit = 1500;
    cout << "Deposit Amount: " << deposit << '\n';
    account.DepositMoney(deposit);

    withdrawal = 750;
    std::cout << "Withdrawal Amount: " << withdrawal << std::endl; 
    account.WithdrawMoney(withdrawal);

}
