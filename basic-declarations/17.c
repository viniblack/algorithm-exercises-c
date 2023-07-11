#include <stdio.h>

// 17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

int main()
{
    int sec, h, m, s;
    printf("Escreva o tempo em segundos: ");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec - (3600 * h)) / 60;
    s = sec - (3600 * h) - (m * 60);

    printf("H:M:S - %d:%d:%d\n", h, m, s);
    
    return 0;
}