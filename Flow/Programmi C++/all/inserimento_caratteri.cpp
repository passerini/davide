// Inserito un carattere, stampare i successivi fino alla lettera z, gestire sia le lettere maiuscole che minuscole
// (quindi nel caso di inserimento di lettera minuscola, arrivare fino a 'z', in caso di inserimento di maiuscola, arrivare fino a 'Z')
#include <iostream>
#define N 3

int main()
{
    int i;
    char c;

    printf(" inserire una lettera: \n");
    scanf("%c", &c);

    if (c < 91)
    {
        printf(" Stampo le Maiuscole fino alla Z \n");

        for (i = c; i < 91; i++)
        {

            printf("%c ", i);
        }
    }

    else
    {
        printf(" Stampo le Minuscole fino alla z \n");
        printf(" carattere = %c ", c);
        for (i = c; i < 123; i++)
        {

            printf("%c ", i);
        }
    }
}