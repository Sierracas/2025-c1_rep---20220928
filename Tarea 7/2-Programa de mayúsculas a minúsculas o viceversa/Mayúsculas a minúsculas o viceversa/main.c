#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(void)
{
    char cad[MAX];
    int i = 0;
    char p;

    printf("Ingrese una palabra: ");

    while ((p = getchar()) != '\n' && i < MAX - 1)
    {
        if (p >= 'A' && p <= 'Z')
        {
            cad[i] = p + 32;
        }

        else if (p >= 'a' && p <= 'z')
        {
            cad[i] = p - 32;
        }
        else
        {
            cad[i] = p;
        }
        i++;
    }

    cad[i] = '\0';

    printf("\nTexto convertido: %s\n", cad);

    return 0;
}
