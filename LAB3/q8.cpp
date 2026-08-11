//Dynaimic student marks system
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int numberOfSubjects;
    float *marks;

public:
    Student() {
        marks = nullptr;
    }

    void accept() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> numberOfSubjects;

        // Dynamically allocate marks array
        marks = new float[numberOfSubjects];

        cout << "Enter marks for " << numberOfSubjects << " subjects:\n";

        for (int i = 0; i < numberOfSubjects; i++) {
            cin >> marks[i];
        }
    }

    void display() {
        float total = 0;

        for (int i = 0; i < numberOfSubjects; i++) {
            total += marks[i];
        }

        float average = total / numberOfSubjects;

        cout << "\nStudent Result\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: ";

        for (int i = 0; i < numberOfSubjects; i++) {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    ~Student() {
        // Release dynamically allocated marks
        delete[] marks;
    }
};

int main() {
    Student student;

    student.accept();
    student.display();

    return 0;
}