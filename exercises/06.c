#include <stdio.h>

// 06. Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches
int main()
{
    int radius;
    float pi = 3.14;
    radius = 6;

    float perimeter = 2 * pi * radius;
    float area = pi * radius * radius;

    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f square inches\n", area);

    return 0;
}