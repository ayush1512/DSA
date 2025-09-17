#include <iostream>
using namespace std;
class Account
{
private:
    int accNumber;
    string accHolder;
    double balance;

public:
    // Getter functions
    void getAccno() { cout << this->accNumber << endl; }
    void getHolder() { cout << this->accHolder << endl; }
    void getBalance() { cout << this->balance << endl; }

    // Setter functions
    void setAccno(int aNo) { this->accNumber = aNo; }
    void setHolder(string hol) { this->accHolder = hol; }
    void setBalance(int bal) { this->balance = bal; }

    void aInfo();
    void deposit(int bal);
    void withdraw(int bal);
    void display();
};

void Account::aInfo()
{
    int aNo;
    cout << "Enter the Account Number: ";
    cin >> aNo;
    setAccno(aNo);

    string hol;
    cout << "Enter the Holder Name: ";
    cin >> hol;
    setHolder(hol);

    int bal;
    cout << "Enter the Balance: ";
    cin >> bal;
    setBalance(bal);
}

void Account::deposit(int bal)
{
    this->balance += bal;
}

void Account::withdraw(int bal)
{
    this->balance -= bal;
}

void Account::display()
{
    cout << "Account Number: ";
    getAccno();
    cout << "Account Holder Name: ";
    getHolder();
    cout << "Account Balance: ";
    getBalance();
}

int main()
{
    Account s[5];
    int i = 0;
    int input, bal;
    do
    {
        cout << "\nMenu:" << endl;
        cout << "1. Accept Info" << endl;
        cout << "2. Display Info" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Previous Acc" << endl;
        cout << "6. Next Acc" << endl;
        cout << "7. Exit! " << endl;
        cout << "Enter the choice: ";
        cin >> input;
        cout << endl;

        switch (input)
        {
        case 1:
            for (int j = 0; j < 5; j++)
            {
                s[j].aInfo();
            }
            break;
        case 2:
            for (int j = 0; j < 5; j++)
            {
                s[j].display();
            }
            break;
        case 3:
            cout << "Enter the amount: ";
            cin >> bal;
            s[i].deposit(bal);
            break;
        case 4:
            cout << "Enter the amount: ";
            cin >> bal;
            s[i].withdraw(bal);
            break;

        case 5:
            if (i == 0)
            {
                cout << "First account." << endl;
            }
            else
            {
                i--;
            }
            break;

        case 6:
            if (i < 6)
            {
                i++;
            }
            else
            {
                cout << "Max limit reached.";
            }
            break;

        case 7:
            cout << "Exiting.." << endl;
            break;

        default:
            cout << "Invalid input!" << endl;
            break;
        }
    } while (input != 7);
}