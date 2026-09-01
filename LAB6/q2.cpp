#include <iostream>
using namespace std;

int main() {
    double waterLev = 500.0;
    double *ptr = &waterLev;

    
    cout << " current water level: " << *ptr << " liters of water" << endl;

    
    *ptr += 150.0;
    cout<< " add amount of water is :" << *ptr << endl;

    
    *ptr -= 75.0;

    
    cout << " Final water level: " << *ptr << " liters of water" << endl;

    return 0;
}