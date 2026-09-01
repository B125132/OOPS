#include <iostream>
using namespace std;

void updateMarks(int *marks, int n) {
    for (int i = 0; i < n; i++) {
        *(marks + i) += 5;
    }
}

void displayMarks(int *marks, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }
    cout << endl;
}

int main() {
    int marks[] = {65, 72, 80, 55, 90};
    int n = 5;

    cout << "Marks before modification: ";
    displayMarks(marks, n);

    updateMarks(marks, n);

    cout << "Marks after modification: ";
    displayMarks(marks, n);

    return 0;
}