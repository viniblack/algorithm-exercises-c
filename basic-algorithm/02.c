#include <stdio.h>

// 2. Write a C program that will take a number as input and find the absolute difference between the input number and 51. If the input number is greater than 51, it will return triple the absolute difference.

int absolut(int num)
{
    return num > 51 ? (num - 51) * 3 : 51 - num;
}

int main()
{

    printf("Resultado: %d \n", absolut(53));
    printf("Resultado: %d \n", absolut(30));
    printf("Resultado: %d \n", absolut(51));
    return 0;
}