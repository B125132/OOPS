//array of dynamic objects
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Dynamically allocate array of objects
    Employee *employees = new Employee[n];

    cout << "\nEnter Employee Details\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].accept();
    }

    cout << "\nEmployee Details\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].display();
    }

    // Release array memory
    delete[] employees;

    return 0;
}