#include <stdio.h>

// 5. Write a C program that checks if a positive integer is divisible by either 3 or 7, or both. If the integer is a multiple of 3, then the program will return true. Similarly, if the integer is a multiple of 7, then also the program will return true. If the integer is not a multiple of 3 or 7, then the program will return false.

int div(int x)
{
    return x % 3 == 0 || x % 7 == 0 ? 1 : 0;
}
int main()
{

    printf("Resultado: %d \n", div(3));
    printf("Resultado: %d \n", div(14));
    printf("Resultado: %d \n", div(12));
    printf("Resultado: %d \n", div(37));
    return 0;
}