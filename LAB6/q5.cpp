#include <iostream>
using namespace std;

void updateStatus(int *status) {
    if (*status == 1) {
        *status = 2;   // Processing [1] to Shipped[2]
    }
    else if (*status == 2) {
        *status = 3;   
        // Shipped[2] to Delivered(3)
    }
}

void displayStatus(int status) {
    if (status == 1)
        cout << " Processing-";
    else if (status == 2)
        cout << "shipped ";
    else if (status == 3)
        cout << "delivered";
    else
        cout << " status is Invalid [give no. from 1 to 3] :";
}

int main() {
    // int status = 1;
     int status =2;

    cout << "Status before update: ";
    displayStatus(status);

    updateStatus(&status);
    cout << "\nStatus after update:  ";
    displayStatus(status);

    return 0;
}