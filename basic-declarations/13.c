#include <stdio.h>

// 13. Write a C program that accepts three integers and finds the maximum of three.

int main()
{

    int num[3];
    int max = 0;

    printf("Escreva o número 1°:\n");
    scanf("%d", &num[0]);

    printf("Escreva o número 2°:\n");
    scanf("%d", &num[1]);

    printf("Escreva o número 3°:\n");
    scanf("%d", &num[2]);

    // aqui estou usando o sizeof() para pegar a quantidade total de byts do array e dividindo pela quantidade de byts da posição 0
    for (int i; i < sizeof(num) / sizeof(num[0]); i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    printf("Maior numero: %d\n", max);

    return 0;
}