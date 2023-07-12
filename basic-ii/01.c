#include <stdio.h>

// 1. Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.

int nums[100];
int num;
char next = 'S';

int main()
{
    int minNum;

    do
    {
        printf("Escreva um número: ");
        scanf("%d", &num);

        printf("Quer escrever mais um número? (S)/(N): ");
        scanf(" %c", &next);

        for (int i; i < sizeof(nums) / sizeof(nums[0]); i++)
        {
            nums[i] = num;

            if (minNum < num)
            {
                minNum = nums[i];
            }
        }

    } while (next == 'S');

    printf("Menor num: %d\n", minNum);
    return 0;
}