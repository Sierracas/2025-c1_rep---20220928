#include <stdio.h>
#include <stdlib.h>

#define PRO 24
#define MES 12
#define ANIO 10

void Lectura(float [PRO][MES][ANIO], int, int, int);
void Funcion1(float [PRO][MES][ANIO], int, int, int);
void Funcion2(float [PRO][MES][ANIO], int, int, int);
void Funcion3(float [PRO][MES][ANIO], int, int, int);

int main(void)
{
    float LLU[PRO][MES][ANIO];
    Lectura(LLU, PRO, MES, ANIO);
    Funcion1(LLU, PRO, MES, ANIO);
    Funcion2(LLU, PRO, MES, ANIO);
    Funcion3(LLU, PRO, MES, ANIO);

    return 0;
}

void Lectura(float A[][MES][ANIO], int F, int C, int P)

{
    int K, I, J;
    for (K=0; K<P; K++)
    for (I=0; I<F; I++)
    for (J=0; J<C; J++)
    {
        printf("A�o: %d\tProvincia: %d\tMes: %d", K+1, I+1, J+1);
        scanf("%f", &A[I][J][K]);
    }
}

void Funcion1(float A[][MES][ANIO], int F, int C, int P)

{
    int I, K, J, EMAY = -1;
    float ELLU = -1.0, SUM;
    for (I=0; I<F; I++)
    {
        SUM = 0.0;
        for (K=0; K<P; K++)
            for (J=0; J<C; J++)
            SUM += A[I][J][K];
        SUM /= P * C;
        if (SUM > ELLU)
        {
            ELLU = SUM;
            EMAY = I;
        }
    }
    printf("\n\nProvincia con mayor registro de lluvias: %d", EMAY+1);
    printf("\nRegistro: %.2f", ELLU);
}

void Funcion2(float A[][MES][ANIO],int F, int C, int P)

{
    int I, J, EMEN = 0;
    float ELLU = 1000, SUM;
    for (I=0; I<F; I++)
    {
        SUM = 0;
        for (J=0; J<C; J++)
            SUM += A[I][J][P-1];
        SUM /= C;
        if (SUM < ELLU)
        {
            ELLU = SUM;
            EMEN = I;
        }
    }
    printf("\n\nProvincia con menor registro anual de lluvias en el ultimo a�o: %d", EMEN+1);
    printf("\nRegistro anual: %.2f", ELLU);
}

void Funcion3(float A[][MES][ANIO],int F, int C, int P)

{
    int J, EMES = -1;
    float ELLU = -1.0;

    if (F > 0 && P > 0)
    {
    for (J=0; J<C; J++)
    {
        if (A[F-1][J][P-1] > ELLU)
        {
            ELLU = A[F-1][J][P-1];
            EMES = J;
        }
    }
    printf("\n\nMes: %d Lluvias: %.2f", EMES+1, ELLU);
}
}
