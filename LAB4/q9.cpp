#include <iostream>
using namespace std;

class Result;

class Exam {
private:
    string studentName;
    string subject;
    float marks;
    float maximumMarks;

public:
    Exam(string name, string sub, float m, float max) {
        studentName = name;
        subject = sub;
        marks = m;
        maximumMarks = max;
    }

    friend class Result;
};

class Result {
public:
    void showResult(Exam e) {
        float percentage = (e.marks / e.maximumMarks) * 100;

        cout << "\nExam Result" << endl;
        cout << "Student Name: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << "/" << e.maximumMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    string name, subject;
    float marks, maximumMarks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter subject: ";
    getline(cin, subject);

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter maximum marks: ";
    cin >> maximumMarks;

    Exam e(name, subject, marks, maximumMarks);

    Result r;
    r.showResult(e);

    return 0;
}