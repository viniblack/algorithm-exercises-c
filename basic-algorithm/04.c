#include <stdio.h>
#include <stdlib.h>

// 4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

int sub(int x)
{
    return abs(x - 100) <= 10 || abs(x - 200) <= 10 ? 1 : 0;
}

int main()
{
    printf("Resultado: %d \n", sub(103));
    printf("Resultado: %d \n", sub(90));
    printf("Resultado: %d \n", sub(89));
    return 0;
}