//Dynamic matrix
#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    // Allocate memory for rows
    int **matrix = new int*[m];

    // Allocate memory for each row
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Delete each row
    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }

    // Delete row pointer
    delete[] matrix;

    return 0;
}