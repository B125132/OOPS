#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accNo;
    string name;
    float depAmt;
    float witAmt;
    float bal;   
public:
    void read() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Account Holder Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> bal;
    }
    void deposit() {
        cout << "Enter amount to deposit: ";
        cin >> depAmt;
        bal += depAmt;
    }
    void withdraw() {
        cout << "Enter amount to withdraw: ";
        cin >> witAmt;
        if (witAmt <= bal) {
            bal -= witAmt;
        } else {
            cout << "Withdrawal unsuccessful! Insufficient balance." << endl;
        }
    }
    void print() {
        cout << "Account Number: " << accNo << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Current Balance: " << bal << endl;
    }
};

int main() {
    BankAccount acc1;
    acc1.read();
    cout << endl;
    acc1.deposit();
    acc1.withdraw();
    cout << endl;
    cout << "Account Details: " << endl;
    acc1.print();
    return 0;
}