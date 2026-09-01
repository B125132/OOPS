#include <iostream>
using namespace std;

int main() {
    char text[] = "oops C++ Pointer id 132";

    char *ptr = text;

    int digits = 0;
    int alphabets = 0;
    int spaces = 0;

    while (*ptr != '\0') {
        if (*ptr >= '0' && *ptr <= '9') {
            digits++;
        }
        else if ((*ptr >= 'A' && *ptr <= 'Z') ||
                 (*ptr >= 'a' && *ptr <= 'z')) {
            alphabets++;
        }
        else if (*ptr == ' ') {
            spaces++;
        }

        ptr++;
    }

    cout << "Number of digits: " << digits << endl;
    cout << "Number of alphabetic characters: " << alphabets << endl;
    cout << "Number of spaces: " << spaces << endl;

    return 0;
}