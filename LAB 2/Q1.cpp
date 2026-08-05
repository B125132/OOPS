#include <iostream>
#include <string>
using namespace std;

class Student{
    string roll_no;
    string name;
    float marks;
    public:
    void print(){
        cout << "Enter your Roll no: ";
        cin >> roll_no;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your marks: ";
        cin >> marks;
        cout << "\nStudent details \n\n";
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student s1;
    s1.print();
    return 0;
}