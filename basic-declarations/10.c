#include <stdio.h>

// 10. Write a C program that accepts two integers from the user and calculates the product of the two integers.

int main(){
    int num1, num2;

    printf("Escreva um núemro:\n");
    scanf("%d", &num1);

    printf("Escreva outro núemro:\n");
    scanf("%d", &num2);

    int mult = num1 * num2;

    printf("A multiplicação deu: %d\n", mult);

    return 0;
}