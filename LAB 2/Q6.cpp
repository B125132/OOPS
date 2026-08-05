#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    void read() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void add(Distance d1, Distance d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
    void print() {
        cout << "Distance: " << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2, d3;
    cout << "Enter first distance:" << endl;
    d1.read();
    cout << endl;
    cout << "Enter second distance:" << endl;
    d2.read();
    cout << endl;
    d3.add(d1, d2);
    cout << "Final distance: " << endl;
    d3.print();
    return 0;
}