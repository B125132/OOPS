#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
    string no;
    string name;
    int units;
    float bill;
    
public:
    void read() {
        cout << "Enter Consumer Number: ";
        cin >> no;
        cout << "Enter Consumer Name: ";
        cin >> name;
        cout << "Enter Units Consumed: ";
        cin >> units;
    }
    void calculate() {
        if (units <= 100) {
            bill = units * 5;
        } else if (units <= 200) {
            bill = (100 * 5) + ((units - 100) * 7);
        } else {
            bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }
    void print() {
        cout << "Consumer Number: " << no << endl;
        cout << "Consumer Name: " << name << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill Amount: Rs. " << bill << endl;
    }
};

int main() {
    ElectricityBill e1;
    e1.read();
    cout << endl;
    e1.calculate();
    cout << "Electricity Bill Details: " << endl;
    e1.print();
    return 0;
}