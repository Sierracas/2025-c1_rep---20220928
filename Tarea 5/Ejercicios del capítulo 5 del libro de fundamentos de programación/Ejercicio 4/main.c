#include <stdio.h>
#include <stdlib.h>

const int MAX = 10;
void leerVector (int VEC[], int T);
void imprimirVector (int VEC[], int T);
void operarVectores(int *X, int *Y, int *Z, int T);

int main(void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];
    (VE1, MAX);
    (VE2, MAX);
    (VE3, MAX);
}

void leerVector(int VEC[], int T)
{
    int I;
    printf("\n");
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &VEC[I]);
    }
}
void imprimirVector(int VEC[], int T)
{
    int I;
    for (I=0; I<T; I++)
        printf("\nVEC[%d]: %d", I+1, VEC[I]);
}
void operarVectores (int *X, int *Y, int *Z, int T)

{
    int I;
    for (I=0; I<T; I++)
        Z[I] = X[I] * Y[I];
}
