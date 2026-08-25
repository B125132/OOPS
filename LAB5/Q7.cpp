// Compare Data Sets
#include <iostream>
using namespace std;



int compare(int a, int b) {
    return (a > b) ? a : b;
}

float compare(float a, float b) {
    return (a > b) ? a : b;
}

bool compare(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    int a[] = {10, 20, 30};
    int b[] = {10, 20, 30};

    cout << "Larger integer: " << compare(15, 25) << endl;
    cout << "Larger float: " << compare(4.5f, 3.2f) << endl;

    if (compare(a, b, 3))
        cout << "Arrays are identical" << endl;
    else
        cout << "Arrays are different" << endl;

    return 0;
}