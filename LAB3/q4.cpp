//dynamic array and average
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    float *arr = new float[n];

    float sum = 0;

    cout << "Enter " << n << " numbers:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    delete[] arr;

    return 0;
}