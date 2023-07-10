#include <stdio.h>

// 07. Write a C program to display multiple variables.
// Sample Variables :
// a+ c,
// x + c,
// dx + x,
// ((int) dx) + ax,
// a + x,
// s + b,
// ax + b,
// s + c,
// ax + c,
// ax + ux

int main()
{

    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    // | Especificador de Formato | Tipo de Dados           | Descrição                                               |
    // |--------------------------|-------------------------|---------------------------------------------------------|
    // | `%d`                     | int                     | Imprime um valor inteiro decimal.                       |
    // | `%f`                     | float                   | Imprime um valor de ponto flutuante.                    |
    // | `%c`                     | char                    | Imprime um caractere.                                   |
    // | `%s`                     | char*                   | Imprime uma string de caracteres.                       |
    // | `%p`                     | void*                   | Imprime um ponteiro.                                    |
    // | `%u`                     | unsigned int            | Imprime um valor inteiro decimal sem sinal.             |
    // | `%ld`                    | long int                | Imprime um valor inteiro longo decimal.                 |
    // | `%hd`                    | short int               | Imprime um valor inteiro curto.                         |
    // | `%lu`                    | unsigned long int       | Imprime um valor inteiro longo decimal sem sinal.       |
    // | `%lf`                    | double                  | Imprime um valor de ponto flutuante.                    |
    // | `%lld`                   | long long int           | Imprime um valor inteiro longo longo decimal.           |
    // | `%llu`                   | unsigned long long int  | Imprime um valor inteiro longo longo decimal sem sinal. |

    printf("d: a + c =  %d\n", a + c);
    printf("f: x + c = %f\n", x + c);
    printf("f: dx + x = %f\n", dx + x);
    printf("ld: ((int) dx) + ax =  %ld\n", ((int)dx) + ax);
    printf("f: a + x = %f\n", a + x);
    printf("d: s + b =  %d\n", s + b);
    printf("ld: ax + b = %ld\n", ax + b);
    printf("hd: s + c =  %hd\n", s + c);
    printf("ld: ax + c = %ld\n", ax + c);
    printf("lu: ax + ux = %lu\n", ax + ux);

    return 0;
}