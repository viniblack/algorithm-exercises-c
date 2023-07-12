#include <stdio.h>

// 3. Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. In other words, if either of the two integers is 30 or if their sum equals 30, the program will return true.

int sum(int x, int y)
{
    return x + y == 30 || x == 30 || y == 30 ? 1 : 0;
}

int main()
{
    printf("Resultado: %d \n", sum(25, 5));
    printf("Resultado: %d \n", sum(20, 30));
    printf("Resultado: %d \n", sum(20, 25));
    return 0;
}