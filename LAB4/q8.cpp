#include <iostream>
using namespace std;

class TicketChecker;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool booked;

public:
    TrainSeat(int seat, string name, bool status) {
        seatNumber = seat;
        passengerName = name;
        booked = status;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void displaySeat(TrainSeat s) {
        cout << "\nSeat Number: " << s.seatNumber << endl;

        if (s.booked) {
            cout << "Seat is booked" << endl;
            cout << "Passenger Name: " << s.passengerName << endl;
        }
        else {
            cout << "Seat is available" << endl;
        }
    }
};

int main() {
    int seat;
    string name;
    bool status;

    cout << "Enter seat number: ";
    cin >> seat;

    cin.ignore();
    cout << "Enter passenger name: ";
    getline(cin, name);

    cout << "Enter booking status (1 for Booked, 0 for Available): ";
    cin >> status;

    TrainSeat s(seat, name, status);

    TicketChecker ticket;
    ticket.displaySeat(s);

    return 0;
}