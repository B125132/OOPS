#include <stdio.h>

struct Product
{
    int Id;
    char Name[50];
    float price;
    int quantity;
};

int main()
{
    struct Product p;
    float tCost;

    printf("ID: ");
    scanf("%d", &p.Id);

    printf("Name: ");
    scanf("%s", p.Name);

    printf("Price: ");
    scanf("%f", &p.price);

    printf(" Quantity: ");
    scanf("%d", &p.quantity);

    tCost = p.price * p.quantity;

    printf("Product Details:\n");
    printf("ID   : %d\n", p.Id);
    printf("Name : %s\n", p.Name);
    printf("Price        : %.2f\n", p.price);
    printf("Quantity     : %d\n", p.quantity);
    printf("Total Cost   : %.2f\n", tCost);

    return 0;
}