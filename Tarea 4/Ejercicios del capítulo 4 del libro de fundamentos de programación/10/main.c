#include <stdio.h>
#include <stdlib.h>

int multiplo(int, int);

int main(void)
{
int NU1, NU2, RES;
printf("\nIngresa los dos n�meros: ");
scanf("%d %d", &NU1, &NU2);
RES = multiplo(NU1, NU2);
if (RES)
    printf("\nEl segundo n�mero es m�ltiplo del primero");
else
    printf("\nEl segundo no es n�mero es m�ltiplo del primero");
}

int multiplo(int N1, int N2)
{
    int RES;
    if ((N2 % N1) == 0)
        RES = 1;
    else
        RES = 0;
        return (RES);
}
