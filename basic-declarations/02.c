#include <stdio.h>

// 02. Write a C program to get the C version you are using.
// Expected Output:
// We are using C18!

int main()
{
    if (__STDC_VERSION__ >= 201710L)
        printf("We are using C18!\n");
    else if (__STDC_VERSION__ >= 201112L)
        printf("We are using C11!\n");
    else if (__STDC_VERSION__ >= 199901L)
        printf("We are using C99!\n");
    else
        printf("We are using C89/C90!\n");

    return 0;
}