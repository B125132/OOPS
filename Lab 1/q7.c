#include <stdio.h>

struct Student{
    char roll_no[8];
    char name[20];
    float c_mark;
    float math_mark;
    float phy_mark;
    float total_mark;
    float percentage;
};

void getData(struct Student *S){
    printf("Enter roll no: ");
    scanf("%7s", S->roll_no);

    printf("Enter name: ");
    scanf("%19s", S->name);

    printf("Enter marks in C: ");
    scanf("%f", &S->c_mark);

    printf("Enter marks in Math: ");
    scanf("%f", &S->math_mark);

    printf("Enter marks in Physics: ");
    scanf("%f", &S->phy_mark);

    S->total_mark = S->c_mark + S->math_mark + S->phy_mark;
    S->percentage = (S->total_mark / 300) * 100;
}

void printData(struct Student S){
    printf("\n");
    printf("Roll No: %s\n", S.roll_no);
    printf("Name: %s\n", S.name);
    printf("Marks in C: %.2f\n", S.c_mark);
    printf("Marks in Math: %.2f\n", S.math_mark);
    printf("Marks in Physics: %.2f\n", S.phy_mark);
    printf("Total Marks: %.2f\n", S.total_mark);
    printf("Percentage: %.2f%%\n", S.percentage);
}

int main(){
    struct Student s;
    getData(&s);
    printData(s);
    return 0;
}