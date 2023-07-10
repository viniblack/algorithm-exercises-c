#include <stdio.h>

// 11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.

int main()
{
    int item1, item2;
    float peso1, peso2;

    printf("Escreva o peso do item 1:\n");
    scanf("%f", &peso1);

    printf("Escreva a quantidade do item 1:\n");
    scanf("%d", &item1);

    printf("Escreva o peso do item 2:\n");
    scanf("%f", &peso2);

    printf("Escreva a quantidade do item  2:\n");
    scanf("%d", &item2);

    float total = ((peso1 * item1) + (peso2 * item2)) / (item1 + item2);

    printf("media: %f\n", total);

    return 0;
}