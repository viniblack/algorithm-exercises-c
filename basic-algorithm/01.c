#include <stdio.h>

// 1. Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum.

int sum(int x, int y)
{
    return x == y ? (x + y) * 3 : x + y;
}

int main()
{
    int n1, n2, result;

    printf("Escreva um número: ");
    scanf("%d", &n1);

    printf("Escreva outro número: ");
    scanf("%d", &n2);

    printf("Resultado: %d\n", sum(n1, n2));

    return 0;
}