#include <stdio.h>
#include <stdlib.h>

int cubo (viod);
int I;

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();  /* LLamada a la funci�n cubo. */
        printf("n\nEn el cubo %d es: %d", I, CUB);
    }
}
int cubo(void)    /* Declaraci�n de la funci�n. */
/* La funci�n calcula de el cubo de la variable local I. */
{
    int I = 2;
    return (I*I*I);
}
