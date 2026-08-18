//mobile phone settings
#include <iostream>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    float battery;

public:
    Mobile(string b, string m, float bat) {
        brand = b;
        model = m;
        battery = bat;
    }

    friend void checkBattery(Mobile m);
};

void checkBattery(Mobile m) {
    cout << "\nMobile Details" << endl;
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery: " << m.battery << "%" << endl;

    if (m.battery < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main() {
    string brand, model;
    float battery;

    cout << "Enter brand: ";
    cin >> brand;

    cout << "Enter model: ";
    cin >> model;

    cout << "Enter battery percentage: ";
    cin >> battery;

    Mobile phone(brand, model, battery);

    checkBattery(phone);

    return 0;
}