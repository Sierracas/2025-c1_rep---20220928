#include <stdio.h>
#include <stdlib.h>

int cubo(void);
int I;

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();  /* Llamada a la funci�n cubo. */
        printf("\nEl cubo de %d" , I, CUB);
    }
}
int cubo(void)                   /* Declaraci�n de la funci�n. */
/* La funci�n calcula el cubo de la variable global I. */
{
    return (I*I*I);
}
