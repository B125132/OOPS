// Element Search
#include <iostream>
using namespace std;



void search(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Element found at position " << i + 1 << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

void search(char a[], int n, char x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Character found at position " << i + 1 << endl;
            return;
        }
    }
    cout << "Character not found" << endl;
}

void search(int a[], int start, int end, int x) {
    for (int i = start; i <= end; i++) {
        if (a[i] == x) {
            cout << "Element found at position " << i + 1 << endl;
            return;
        }
    }
    cout << "Element not found in range" << endl;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    char b[] = {'a', 'b', 'c', 'd'};

    search(a, 5, 30);
    search(b, 4, 'c');
    search(a, 1, 3, 40);

    return 0;
}