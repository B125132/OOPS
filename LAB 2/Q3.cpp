#include <iostream>
#include <string>
using namespace std;

class Calculator {
    float num1;
    float num2;
    float sum;
    float difference;
    float product;
    float quotient;
    
public:
    void read() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }
    void addition() {
        sum = num1 + num2;
    }
    void subtraction() {
        difference = num1 - num2;
    }
    void multiplication() {
        product = num1 * num2;
    }
    void division() {
        if (num2 != 0) {
            quotient = num1 / num2;
        } else {
            cout << "Division is: Error (Cannot divide by zero)" << endl;
        }
    }
    void print() {
        cout << "First number is: " << num1 << endl;
        cout << "Second number is: " << num2 << endl;
        cout << "Addition is: " << sum << endl;
        cout << "Subtraction is: " << difference << endl;
        cout << "Multiplication is: " << product << endl;
        if (num2 != 0) {
            cout << "Division is: " << quotient << endl;
        } else {
            cout << "Division is: Undefined" << endl;
        }
    }
};

int main() {
    Calculator c1;
    c1.read();
    cout << endl;
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();
    cout << endl;
    cout << "Results: " << endl;
    c1.print();
    return 0;
}