#include <iostream>
using namespace std;

class HomeController;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

public:
    SmartDevice(string name, string type, bool status) {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    friend class HomeController;
};

class HomeController {
public:
    void displayInfo(SmartDevice d) {
        cout << "\nDevice Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
    }

    void turnOn(SmartDevice &d) {
        d.powerStatus = true;
        cout << "Device turned ON" << endl;
    }

    void turnOff(SmartDevice &d) {
        d.powerStatus = false;
        cout << "Device turned OFF" << endl;
    }

    void showStatus(SmartDevice d) {
        if (d.powerStatus)
            cout << "Power Status: ON" << endl;
        else
            cout << "Power Status: OFF" << endl;
    }
};

int main() {
    string name, type;
    bool status;

    cout << "Enter device name: ";
    getline(cin, name);

    cout << "Enter device type: ";
    getline(cin, type);

    cout << "Enter power status (1 for ON, 0 for OFF): ";
    cin >> status;

    SmartDevice device(name, type, status);

    HomeController home;

    home.displayInfo(device);
    home.showStatus(device);

    home.turnOn(device);
    home.showStatus(device);

    home.turnOff(device);
    home.showStatus(device);

    return 0;
}