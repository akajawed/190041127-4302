#include <bits/stdc++.h>

using namespace std;

class BankAccount
{


    int accountNumber;
    string accountHolderName;
    bool accountType;
    double currentBalance;
    double minBalance;

public:
    BankAccount(int accountnumberinput, string accountHolderNameinput, bool accountTypeinput, double currentBalanceinput, double minBalanceinput)
        : accountNumber(accountnumberinput), accountHolderName(accountHolderNameinput), accountType(accountTypeinput), currentBalance(currentBalanceinput), minBalance(minBalanceinput)
    {
    }
    BankAccount()
    {
        string inp;
        int i;
        cout << "accountNumber: " ;
        cin >> inp;
        accountNumber = inp;
        cout << "accountHolderName :";
        cin >> inp;
        accountHolderName = inp;
        cout
                << "accountType :";
        cin >> inp;
        if (inp == "savings")
            accountType = savings;
        else if (inp == "current")
            accountType = current;
        cout
                << "currentBalance :";
        cin >> inp;
        currentBalance = inp;
        cout
                << "minBalance :";
        cin >> inp;
        minBalance = inp;
    }
    void showBalance()
    {
        cout << currentBalance << endl;
    }
    void display()
    {
        cout << "accountNumber :" << accountNumber << endl;
        cout << "accountHolderName :" << accountHolderName << endl;
        cout << "accountType :" << accountType << endl;
        cout << "currentBalance :" << currentBalance << endl;
    }
    void deposit(double inp)
    {
        currentBalance += inp;
    }
    void withdrawal(double inp)
    {

        if (currentBalance - inp >= minBalance)
            currentBalance -= inp;
        else
            cout << "withdrawal failed" << endl;
    }
    double giveInterst(double rate = 2.5)
    {
        double interest = currentBalance * rate / 100;
        deposit(interest * .9);
        return interest;
    }
    ~BankAccount()
    {
        cout << "Account of Mr. " << accountHolderName << " with account no " << accountNumber << " is destroyed with a balance BDT " << currentBalance << endl;
    }
};
int BankAccount::no_of_accounts = 0;
int main()
{
    BankAccount acc1;
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    acc1.showBalance();
    acc1.deposit(500);
    acc1.withdrawal(500);
    acc1.withdrawal(5000);
}
