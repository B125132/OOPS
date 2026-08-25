// Maximum Value Finder
#include <iostream>
using namespace std;



int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int maximum(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int maximum(int *a, int n) {
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main() {
    int a = 20, b = 35;
    int arr[] = {10, 45, 25, 60, 30};

    cout << "Maximum of two integers: " << maximum(a, b) << endl;
    cout << "Maximum using pointers: " << maximum(&a, &b) << endl;
    cout << "Maximum in array: " << maximum(arr, 5) << endl;

    return 0;
}