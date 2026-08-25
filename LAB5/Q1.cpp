//Number calculator
#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}

int calculate(int a, int b, int c) {
    return a + b + c;
}

float calculate(float a, float b) {
    return a + b;
}

int main() {
    cout << "Sum of two integers: " << calculate(10, 20) << endl;
    cout << "Sum of three integers: " << calculate(10, 20, 30) << endl;
    cout << "Sum of two float values: " << calculate(2.5f, 3.5f) << endl;

    return 0;
}