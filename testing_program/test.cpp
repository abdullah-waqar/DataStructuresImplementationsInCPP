#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
    int accountNumber;
    int balance;
    string name;
};

BankAccount acc[5];
int total = 5;
bool isCreated = false;

int findAccount(int accountNumber)
{
    for (int i = 0; i < total; i++)
    {
        if (acc[i].accountNumber == accountNumber)
            return i;
    }
    return -1;
}

void createAccount()
{
    if (isCreated)
    {
        cout << "Accounts already created!" << endl;
        return;
    }

    cout << "You will be asked to create " << total << " accounts" << endl;

    for (int i = 0; i < total; i++)
    {
        cout << "\nEnter details for account " << i + 1 << endl;

        int accNo;
        bool duplicate;

        do
        {
            duplicate = false;
            cout << "Account number: ";
            cin >> accNo;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                duplicate = true;
                continue;
            }

            for (int j = 0; j < i; j++)
            {
                if (acc[j].accountNumber == accNo)
                {
                    duplicate = true;
                    cout << "Account number already exists!" << endl;
                    break;
                }
            }

        } while (duplicate);

        acc[i].accountNumber = accNo;

        cout << "Account holder name: ";
        cin.ignore();
        getline(cin, acc[i].name);

        cout << "Initial balance: ";
        cin >> acc[i].balance;

        if (acc[i].balance < 0)
            acc[i].balance = 0;
    }

    isCreated = true;
    cout << "Accounts created successfully!" << endl;
}

void displayAccountBalance()
{
    if (!isCreated)
    {
        cout << "Please create account first!" << endl;
        return;
    }

    int accountNumber;
    cout << "Enter account number: ";
    cin >> accountNumber;

    int index = findAccount(accountNumber);
    if (index != -1)
    {
        cout << "Name: " << acc[index].name << endl;
        cout << "Balance: " << acc[index].balance << endl;
    }
    else
    {
        cout << "Invalid account number!" << endl;
    }
}

void depositBalance()
{
    if (!isCreated)
    {
        cout << "Please create account first!" << endl;
        return;
    }

    int accountNumber, deposit;
    cout << "Enter account number: ";
    cin >> accountNumber;

    int index = findAccount(accountNumber);
    if (index != -1)
    {
        cout << "Enter deposit amount: ";
        cin >> deposit;

        if (deposit <= 0)
        {
            cout << "Invalid deposit amount!" << endl;
            return;
        }

        acc[index].balance += deposit;
        cout << "Deposit successful!" << endl;
        cout << "New balance: " << acc[index].balance << endl;
    }
    else
    {
        cout << "Invalid account number!" << endl;
    }
}

void withdrawBalance()
{
    if (!isCreated)
    {
        cout << "Please create account first!" << endl;
        return;
    }

    int accountNumber, withdraw;
    cout << "Enter account number: ";
    cin >> accountNumber;

    int index = findAccount(accountNumber);
    if (index != -1)
    {
        cout << "Enter withdraw amount: ";
        cin >> withdraw;

        if (withdraw <= 0)
        {
            cout << "Invalid withdraw amount!" << endl;
        }
        else if (acc[index].balance >= withdraw)
        {
            acc[index].balance -= withdraw;
            cout << "Withdrawal successful!" << endl;
            cout << "New balance: " << acc[index].balance << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    else
    {
        cout << "Invalid account number!" << endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "1. Create Account" << endl;
        cout << "2. Display Account Balance" << endl;
        cout << "3. Deposit Balance" << endl;
        cout << "4. Withdraw Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            displayAccountBalance();
            break;
        case 3:
            depositBalance();
            break;
        case 4:
            withdrawBalance();
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
