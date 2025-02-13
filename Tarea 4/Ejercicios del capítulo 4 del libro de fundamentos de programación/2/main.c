#include <stdio.h>
#include <stdlib.h>

int cubo (viod);
int I;

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();  /* LLamada a la función cubo. */
        printf("n\nEn el cubo %d es: %d", I, CUB);
    }
}
int cubo(void)    /* Declaración de la función. */
/* La función calcula de el cubo de la variable local I. */
{
    int I = 2;
    return (I*I*I);
}
