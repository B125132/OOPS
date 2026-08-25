// Overloaded Data Processor
#include <iostream>
using namespace std;



int process(int a, int b) {
    return a + b;
}

float process(int a, float b) {
    return a + b;
}

float process(float a, float b) {
    return a + b;
}

int process(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int process(int *a, int *b) {
    return *a + *b;
}

int main() {
    int arr[] = {10, 20, 30};
    int a = 5, b = 15;

    cout << "Two integers: " << process(10, 20) << endl;
    cout << "Integer and float: " << process(10, 2.5f) << endl;
    cout << "Two floats: " << process(2.5f, 3.5f) << endl;
    cout << "Array total: " << process(arr, 3) << endl;
    cout << "Two pointers: " << process(&a, &b) << endl;

    return 0;
}