#include <iostream>
using namespace std;

void findLongest(int *ptr, int n) {
    int longest = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > longest) {
            longest = *(ptr + i);
        }
    }

    cout << "Longest episode duration is: "<< longest << " minutes" << endl;
}
         

int main() {
    int durationsofpod[6] = {35, 42, 21, 55, 97, 39};

    findLongest(durationsofpod, 6);

    return 0;
}