//foot order 
#include <iostream>
using namespace std;

class FoodOrder {
private:
    int orderId;
    string foodItem;
    int quantity;
    float price;

public:
    FoodOrder(int id, string food, int q, float p) {
        orderId = id;
        foodItem = food;
        quantity = q;
        price = p;
    }

    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f) {
    float total = f.quantity * f.price;

    cout << "\nOrder Details" << endl;
    cout << "Order ID: " << f.orderId << endl;
    cout << "Food Item: " << f.foodItem << endl;
    cout << "Quantity: " << f.quantity << endl;
    cout << "Price: " << f.price << endl;
    cout << "Total Bill: " << total << endl;
}

int main() {
    int id, quantity;
    string food;
    float price;

    cout << "Enter order ID: ";
    cin >> id;

    cin.ignore();
    cout << "Enter food item: ";
    getline(cin, food);

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price: ";
    cin >> price;

    FoodOrder order(id, food, quantity, price);

    calculateBill(order);

    return 0;
}