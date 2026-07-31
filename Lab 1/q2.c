#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct Employee emp[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter details%d", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("EmpDetails:");

    for(i = 0; i < 3; i++)
    {
        printf("Emp %d\n", i + 1);
        printf("Name   : %s\n", emp[i].name);
        printf("ID     : %d\n", emp[i].id);
        printf("Salary : %.2f\n", emp[i].salary);
    }

    return 0;
}