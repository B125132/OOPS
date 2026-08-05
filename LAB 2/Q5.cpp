#include <iostream>
#include <string>
using namespace std;

class Employee {
    string id;
    string name;
    float basic;
    float hra;
    float da;
    float gross;
    
public:
    void read() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }
    
    void calculate() {
        hra = 0.20 * basic;
        da = 0.10 * basic;
        gross = basic + hra + da;
    }
    
    void print() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main() {
    Employee e1;
    e1.read();
    cout << endl;
    e1.calculate();
    cout << "Salary Details: " << endl;
    e1.print();
    return 0;
}