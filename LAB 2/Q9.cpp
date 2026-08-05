#include <iostream>
#include <string>
using namespace std;

class StudentResult {
    string name;
    string rollNo;
    float marks[5];
    float totalMarks;
    float percentage;
    char grade;
    
public:
    void read() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter marks in 5 subjects: ";
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            totalMarks += marks[i];
        }
    }
    
    void calculate() {
        percentage = (totalMarks / 500) * 100;
        
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }
    
    void print() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Total Marks: " << totalMarks << " / 500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    StudentResult s1;
    
    s1.read();
    cout << endl;
    
    s1.calculate();
    
    cout << "Student Result: " << endl;
    s1.print();
    
    return 0;
}