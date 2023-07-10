#include <stdio.h>

// 12. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.

int main()
{
    char id[10];
    int hrs;
    double salary;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%s", id);

    printf("Input the working hrs: \n");
    scanf("%d", &hrs);

    printf("Salary amount/hr: \n");
    scanf("%lf", &salary);

    double total = hrs * salary;

    printf("Employees ID = %s\nSalary = U$ %.2lf\n", id, total);

    return 0;
}