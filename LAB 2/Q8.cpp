#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
    string id;
    string title;
    string name;
    int days;
    float fine;
    
public:
    void read() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Number of Days Issued: ";
        cin >> days;
    }
    void calculate() {
        if (days > 15) {
            fine = (days - 15) * 2;
        } else {
            fine = 0;
        }
    }
    void print() {
        cout << "Book ID: " << id << endl;
        cout << "Book Title: " << title << endl;
        cout << "Student Name: " << name << endl;
        cout << "Days Issued: " << days << endl;
        cout << "Fine:  " << fine << endl;
    }
};

int main() {
    LibraryBook b1;
    b1.read();
    cout << endl;
    b1.calculate();
    cout << "Transaction Details: " << endl;
    b1.print();
    return 0;
}