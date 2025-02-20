#include <stdio.h>
#include <stdlib.h>

const int TAM = 100;

void Imprime(int[], int);
void Primo(int, int *);

int main(void)
{
    int P[TAM] = {0, 2, 3};
    int J = 2, PRI = 5, FLA;
    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA);
        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;
    }
    Imprime(P, TAM);
}

void Primo(int A, int *B)
{
    int DI = 3;
    while (*B && (DI * DI <= A))
    {
        if ((A % DI) == 0)
            *B = 0;
        DI += 2;
    }
}

void Imprime(int Primos[], int T)
{
    int I;
    for (I=0; I<T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}
