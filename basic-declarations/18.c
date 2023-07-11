#include <stdio.h>

// 18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

int main()
{
    int day, y, m, d;
    printf("Escreva os dias: ");
    scanf("%d", &day);

    y = day / 365;
    m = (day - (365 * y)) / 30;
    d = day - (365 * y) - (m * 30);

    printf("%d Year(s) %d Month(s) %d Day(s)\n", y, m, d);

    return 0;
}