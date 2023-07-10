#include <stdio.h>

// 08. Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.

int main()
{

    int years, weeks, days;
    days = 1330;

    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + weeks * 7);

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}