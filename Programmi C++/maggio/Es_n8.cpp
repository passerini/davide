
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ciclo_for()
{
    printf("\n \n CICLO FOR");
    int conta;
    char lettera;
    for (conta = 1; conta <= 5; conta++)
    {
        printf("\n %d : ", conta);
        for (lettera = 'A'; lettera <= 'Z'; lettera++)
        {
            printf("%c", lettera);
        }
    }
}

void ciclo_while()
{
    printf("\n \n CICLO WHILE");
    int conta;
    char lettera;
    conta = 1;
    while (conta < 6)
    {
        printf("\n %d : ", conta);
        lettera = 'A';
        while (lettera <= 'Z')
        {
            printf("%c", lettera);
            lettera++;
        }
        conta++;
    }
}

void ciclo_dowhile()
{
    printf("\n \n CICLO DO - WHILE");
    int conta;
    char lettera;
    conta = 1;
    do
    {
        printf("\n %d : ", conta);
        lettera = 'A';
        while (lettera <= 'Z')
        {
            printf("%c", lettera);
            lettera++;
        }
        conta++;
    } while (conta < 6);
}

int main()
{
    ciclo_for();
    ciclo_while();
    ciclo_dowhile();

    return 0;
}