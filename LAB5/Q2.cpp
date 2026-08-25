// Value Comparison
#include <iostream>
using namespace std;

int larger(int a, int b) {
    return (a > b) ? a : b;
}

float larger(float a, float b) {
    return (a > b) ? a : b;
}

int larger(int a, int b, int c) {
    int x = (a > b) ? a : b;
    return (x > c) ? x : c;
}

int main() {
    cout << "Larger of two integers: " << larger(10, 25) << endl;
    cout << "Larger of two floats: " << larger(4.5f, 7.2f) << endl;
    cout << "Larger of three integers: " << larger(12, 8, 20) << endl;

    return 0;
}


