#include <iostream>
using namespace std;

int main() {
    int seats[8] = {10, 13, 19, 24, 65, 86, 87, 98};

    int pos;
    int newSeat;

    cout << "Enter the position to correct from (1 to 8): ";
    cin >> pos;

    cout << "Enter the correct seat number: ";
    cin >> newSeat;

    int *ptr = seats;

    cout << "\n Seats before correction:  ";
    for (int i = 0; i < 8; i++) {
        cout << *(ptr  + i ) << "   ";
    }

  
    *(ptr + (pos- 1)) = newSeat;

    cout << "\nSeats after correction:  ";
    for (int i = 0; i < 8; i++) {
        cout << *(ptr + i) << "   ";
    }

  cout << endl ;
  return 0;
}