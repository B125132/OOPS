#include <stdio.h>

struct Book
{
    char title[100];
    int id;
    char author[50];
    float price;
};

int main()
{
    struct Book b;

    printf("Title: ");
    scanf("%s", b.title);

    printf("ID: ");
    scanf("%d", &b.id);

    printf(" Author: ");
    scanf("%s", b.author);

    printf("Price: ");
    scanf("%f", &b.price);

    printf("Book Details:\n");
    printf("Title  : %s\n", b.title);
    printf("ID     : %d\n", b.id);
    printf("Author : %s\n", b.author);
    printf("Price  : %.2f\n", b.price);

    return 0;
}