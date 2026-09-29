#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator+(Time t) {
        Time temp;

        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;

        if (temp.minutes >= 60) {
            temp.hours += temp.minutes / 60;
            temp.minutes %= 60;
        }

        return temp;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(4, 45);
    Time t2(2, 30);

    Time t3 = t1 + t2;

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    cout << "Result: ";
    t3.display();

    return 0;
}