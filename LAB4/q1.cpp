//persional diary
#include <iostream>
using namespace std;

class Diary {
private:
    string ownerName;
    int entries;
    string lastEntry;

public:
    Diary(string name, int e, string entry) {
        ownerName = name;
        entries = e;
        lastEntry = entry;
    }

    friend void displayDiary(Diary d);
};

void displayDiary(Diary d) {
    cout << "\nDiary Details" << endl;
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.entries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}

int main() {
    string name, entry;
    int entries;

    cout << "Enter owner name: ";
    getline(cin, name);

    cout << "Enter number of entries: ";
    cin >> entries;
    cin.ignore();

    cout << "Enter last entry: ";
    getline(cin, entry);

    Diary diary(name, entries, entry);

    displayDiary(diary);

    return 0;
}