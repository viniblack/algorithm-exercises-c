#include <stdio.h>

// 05. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

int main()
{
    int height = 7;
    int width = 5;

    int perimeter = 2 * (width + height);
    int area = width * height;

    printf("Perimeter of the rectangle = %d inches\nArea of the rectangle = %d inches\n", perimeter, area);

    return (0);
}