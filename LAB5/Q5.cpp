// Modify a Value
#include <iostream>
using namespace std;



void modify(int &a, int x) {
    a += x;
}

void modify(float &a, float x) {
    a += x;
}

void modify(int *a, int x) {
    *a += x;
}

int main() {
    int a = 10;
    float b = 5.5;
    int c = 20;

    cout << "Before modification: " << a << endl;
    modify(a, 5);
    cout << "After modification: " << a << endl;

    cout << "\nBefore modification: " << b << endl;
    modify(b, 2.5f);
    cout << "After modification: " << b << endl;

    cout << "\nBefore modification: " << c << endl;
    modify(&c, 10);
    cout << "After modification: " << c << endl;

    return 0;
}