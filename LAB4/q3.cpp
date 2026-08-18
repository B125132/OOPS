//perking slot
#include <iostream>
using namespace std;

class ParkingSlot {
private:
    int slotNumber;
    string vehicleNumber;
    bool occupied;

public:
    ParkingSlot(int slot, string vehicle, bool status) {
        slotNumber = slot;
        vehicleNumber = vehicle;
        occupied = status;
    }

    friend void checkSlot(ParkingSlot p);
};

void checkSlot(ParkingSlot p) {
    cout << "\nParking Slot: " << p.slotNumber << endl;

    if (p.occupied) {
        cout << "Slot is occupied" << endl;
        cout << "Vehicle Number: " << p.vehicleNumber << endl;
    }
    else {
        cout << "Slot is available" << endl;
    }
}

int main() {
    int slot;
    string vehicle;
    bool status;

    cout << "Enter slot number: ";
    cin >> slot;

    cout << "Enter vehicle number: ";
    cin >> vehicle;

    cout << "Is the slot occupied? (1 for Yes, 0 for No): ";
    cin >> status;

    ParkingSlot p(slot, vehicle, status);

    checkSlot(p);

    return 0;
}