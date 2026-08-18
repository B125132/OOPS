//smart door lock system
#include <iostream>
using namespace std;

class SecuritySystem;

class Door {
private:
    int doorNumber;
    bool lockStatus;

public:
    Door(int number, bool status) {
        doorNumber = number;
        lockStatus = status;
    }

    friend class SecuritySystem;
};

class SecuritySystem {
public:
    void checkLock(Door d) {
        cout << "Door Number: " << d.doorNumber << endl;

        if (d.lockStatus)
            cout << "Door is Locked" << endl;
        else
            cout << "Door is Unlocked" << endl;
    }
};

int main() {
    int number;
    bool status;

    cout << "Enter door number: ";
    cin >> number;

    cout << "Enter lock status (1 for Locked, 0 for Unlocked): ";
    cin >> status;

    Door d(number, status);

    SecuritySystem system;
    system.checkLock(d);

    return 0;
}