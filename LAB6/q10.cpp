#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    
    long long *contacts = new long long[n];

    
    cout << "Enter " << n << " contact numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(contacts + i);
    }

    long long searchNumber;
    cout << "Enter contact number to search: ";
    cin >> searchNumber;

    
    long long *ptr = contacts;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == searchNumber) {
            position = i;
            break;
        }
    }

    
    if (position != -1) {
        cout << "Contact number found." << endl;
        cout << "Position: " << position + 1 << endl;
    } 
    else {
        cout << "Contact number not found." << endl;
    }

   
    delete[] contacts;

    return 0;
}