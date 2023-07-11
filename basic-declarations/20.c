#include <stdio.h>
#include <math.h>

// 20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.

int main()
{
    double a, b, c, delta;

    printf("Input the first number(a): ");
    scanf("%lf", &a);
    printf("Input the second number(b): ");
    scanf("%lf", &b);
    printf("Input the third number(c): ");
    scanf("%lf", &c);

    delta = (b * b) - (4 * (a) * (c));

    if (delta > 0 && a != 0)
    {
        double bhaskaraPo = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
        double bhaskaraNe = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

        printf("Root1 = %lf\n", bhaskaraPo);
        printf("Root2 = %lf\n", bhaskaraNe);
    }
    else
    {
        printf("\nImpossible to find the roots.\n");
    }

    return 0;
}