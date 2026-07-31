#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    struct Rectangle r;
    float area, perimeter;

    // Input
    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter width: ");
    scanf("%f", &r.width);

    // Calculate
    area = r.length * r.width;
    perimeter = 2 * (r.length + r.width);

    // Display
    printf("Rectangle Details:\n");
    printf("Length    : %.2f\n", r.length);
    printf("Width     : %.2f\n", r.width);
    printf("Area      : %.2f\n", area);
    printf("Perimeter : %.2f\n", perimeter);

    return 0;
}