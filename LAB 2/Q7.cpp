#include <iostream>
#include <string>
using namespace std;

class Product {
    string id;
    string name;
    int qty;
    float price;
    int sold;
    float val;
    
public:
    void read() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Quantity Available: ";
        cin >> qty;
        cout << "Enter Price per Unit: ";
        cin >> price;
        cout << "Enter quantity to sell: ";
        cin >> sold;
    }
    
    void sell() {
        if (sold <= qty) {
            qty -= sold;
        } else {
            cout << "Sale unsuccessful! Insufficient stock available." << endl;
        }
    }
    
    void calculate() {
        val = qty * price;
    }
    
    void print() {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Quantity Available: " << qty << endl;
        cout << "Price per Unit: " << price << endl;
        cout << "Total Inventory Value: " << val << endl;
    }
};

int main() {
    Product p1;
    
    p1.read();
    cout << endl;
    
    p1.sell();
    cout << endl;
    
    p1.calculate();
    
    cout << "Product Inventory Details: " << endl;
    p1.print();
    
    return 0;
}