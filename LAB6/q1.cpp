#include <iostream>
using namespace std;

int main() {
    int battery = 50;
    int *ptr = &battery;

    
    cout << "Current battery percentage: " << *ptr << "%" << endl ;

    
    *ptr += 20;

    
    cout << "Updated battery percentage: " << *ptr << "%  " << endl ;

    return 0;
}