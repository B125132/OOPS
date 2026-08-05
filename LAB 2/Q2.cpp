#include <iostream>
#include <string>
using namespace std;

class rectangle{
    float length;
    float breadth;
    float area;
    float perimeter;
    public:
    void read(){
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }
    void carea(){
        area = length*breadth;
        cout << "Area is: " << area << endl;
    }
    void cperimeter(){
        perimeter = 2*length+2*breadth;
        cout << "Perimeter is: " << perimeter << endl;
    }
    void print(){
        cout << "Length is: " << length << endl;
        cout << "Breadth is: " << breadth << endl;
        cout << "Area is: " << area << endl;
        cout << "Perimeter is: " << perimeter << endl;
    }
};

int main(){
    rectangle r1;
    r1.read();
    cout << endl;
    r1.carea();
    r1.cperimeter();
    r1.print();
    return 0;
}