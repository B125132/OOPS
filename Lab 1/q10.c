#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char roll_no[8];
    char name[20];
    int age;
    float cgpa;
    struct Date dob;
};

void getData(struct Student *S)
{
    printf("Enter name: ");
    scanf("%19s", S->name);
    printf("Enter roll no: ");
    scanf("%7s", S->roll_no);
    printf("Enter age: ");
    scanf("%d", &S->age);
    printf("Enter CGPA: ");
    scanf("%f", &S->cgpa);
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &S->dob.day, &S->dob.month, &S->dob.year);
}

void printData(struct Student S)
{
    printf("\n");
    printf("Name: %s\n", S.name);
    printf("Roll No: %s\n", S.roll_no);
    printf("Age: %d\n", S.age);
    printf("CGPA: %.2f\n", S.cgpa);
    printf("Date of Birth: %02d/%02d/%04d\n", S.dob.day, S.dob.month, S.dob.year);
}

int main()
{
    struct Student S1;

    getData(&S1);
    printData(S1);

    return 0;
}