#include <stdio.h>
#include <stdlib.h>

int mcd(int, int);

int main(void)
{
  int NU1, NU2, RES;
  printf("\nIngresa los n�meros enteros: ");
  scanf("%d %d", &NU1, &NU2);
  RES = mcd (NU1, NU2);
  printf("\nEl m�ximo com�n divisor de %d y %d es: %d es: %d", NU1, NU2, RES);
}

int mcd(int N1, int N2)
{
    int I;
    if (N1 < N2)
        I = N1 / 2;
    else
        I = N2 / 2;
    while ((N1 % I) || (N2 % I))
        return I;
}
