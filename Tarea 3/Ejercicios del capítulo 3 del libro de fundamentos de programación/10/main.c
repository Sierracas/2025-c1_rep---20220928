#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int I, N, NUM, SAP = 0, SIM = 0, CIM = 0;
printf("Ingrese el n�mero de datos que se van a procesar:\t");
scanf("%d", &N);
if (N > 0)
{
    for (I=1; I <= N; I++)
    {
        printf("\nIngrese el n�mero %d: ", I);
        scanf("%d", &NUM);
        if (NUM)
            if (NUM)
            if (pow(-1, NUM) > 0)
SAP = SAP + NUM;
else
{
    SIM = SIM + NUM;
    CIM++;
}
    }
    printf("\nLa suma de los n�meros pares es: %d", SAP);
    printf("\nEl promedio de n�meros impares es: %5.2f", (float)SIM / CIM);
}
else
    printf("\n El valor de N es incorrecto");
}
