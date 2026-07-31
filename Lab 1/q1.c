#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[50];
    int age;
    float CGPA;
};
int main()
{
    struct student s1;
    printf("Roll");
    scanf("%d", &s1.roll);

    printf("name");
    scanf("%s", s1.name);

    printf("age");
    scanf("%d", &s1.age);

    printf("CG");
    scanf("%f", &s1.CGPA);

    printf("CG: %.2f", s1.CGPA);
    printf("name: %s", s1.name);
    printf("roll: %d", s1.roll);
    printf("age: %d", s1.age);

    return 0;
}