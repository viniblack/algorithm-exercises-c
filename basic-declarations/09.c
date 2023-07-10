#include <stdio.h>

// 09. Write a C program that accepts two integers from the user and calculates the sum of the two integers.

int main()
{
    int num1, num2;

    printf("Escreva um núemro:\n");
    scanf("%d", &num1);

    printf("Escreva outro núemro:\n");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("A soma deu: %d\n", sum);

    return 0;
}