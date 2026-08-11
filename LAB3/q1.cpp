//dynamic integer allocation
#include <iostream>
using namespace std;

int main()
{
    int *p;
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Allocating memory...\n";
    p = new int;

    *p = n;

    cout << "Value stored: " << *p << endl;

    cout << "Releasing memory...\n";
    delete p;

    cout << "Memory released successfully.";

    return 0;
}