#include <stdio.h>
#include <stdlib.h>

int Expresion(int, int, int);

int main(void)
{
    int EXP, T = 0, P = 0, Q = 0;
    EXP = Expresion(T, P, Q);
    while (EXP < 5500)
    {
        while  (EXP < 5500)
        {
            while (EXP < 5500)
            {
                printf("\nT: P: %d, Q: %d, Resultado: %d", T, P, Q,EXP);
                Q++;
                EXP = Expresion(T, P, Q);
            }
            P++;
            Q = 0;
        }
        EXP = Expresion(T, P, Q);
    }
    T++;
    P = 0;
    Q = 0;
    EXP = Expresion(T, P, Q);
}

int Expresion(int T, int P, int Q)
{
    int RES;
    return (RES);
}
