#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   int I, NUM;
   long FAC;
   printf("\Ingrese el n�mero ");
   scanf("%d", &NUM);
   if (NUM >= 0)
{
   FAC = 1;
   for (I=1; I <= NUM; I++)
FAC *= I;
printf("\El factoria; de %d es: %ld", NUM, FAC);
}
else
printf("\nError en el dato ingresado");
}
