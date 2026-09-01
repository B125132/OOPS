#include <iostream>
using namespace std;

int main() {
    int equipment[6] = {1013, 205, 309, 4127, 518, 23};

    int *ptr = equipment;

    cout << "Equipment IDs and their addresses:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "ID: " << *(ptr + i)
             << "   - Address: " << (ptr + i) << endl;
    }

    return 0;
}