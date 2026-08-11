//Dynamic shopping cart
#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;
    int quantity;

public:
    void accept()
    {
        cout << "\nEnter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nPrice: " << price;
        cout << "\nQuantity: " << quantity;
        cout << "\nCost: " << price * quantity << endl;
    }

    float cost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    cout << "\nAllocating memory...\n";
    Product *p = new Product[n];

    cout << "Enter product details\n";

    for(int i = 0; i < n; i++)
        p[i].accept();

    cout << "\nDisplaying products...\n";

    for(int i = 0; i < n; i++)
        p[i].display();

    float total = 0;

    cout << "\nCalculating total...\n";

    for(int i = 0; i < n; i++)
        total += p[i].cost();

    cout << "\nTotal Amount = " << total << endl;

    cout << "\nReleasing memory...\n";
    delete[] p;

    return 0;
}