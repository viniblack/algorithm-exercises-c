#include <stdio.h>

// 16. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.

int main()
{
    int amount, total;

    printf("The amount: ");
    scanf("%d", &amount);

    total = amount / 100;
    printf("%d notes of 100.00\n", total);

    amount = amount - (total * 100);
    total = amount / 50;
    printf("%d notes of 50.00\n", total);

    amount = amount - (total * 50);
    total = amount / 20;
    printf("%d notes of 20.00\n", total);

    amount = amount - (total * 20);
    total = amount / 10;
    printf("%d notes of 10.00\n", total);

    amount = amount - (total * 10);
    total = amount / 5;
    printf("%d notes of 5.00\n", total);

    amount = amount - (total * 5);
    total = amount / 2;
    printf("%d notes of 2.00\n", total);

    amount = amount - (total * 2);
    total = amount / 1;
    printf("%d notes of 1.00\n", total);

    return 0;
}