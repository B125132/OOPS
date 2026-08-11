//dynamic array of integers
#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Allocating memory...\n";
    arr = new int[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array elements are:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nReleasing memory...\n";
    delete[] arr;

    cout << "Memory released successfully.";

    return 0;
}