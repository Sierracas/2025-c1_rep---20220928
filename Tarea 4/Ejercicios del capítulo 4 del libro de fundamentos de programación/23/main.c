#include <stdio.h>
#include <stdlib.h>

void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x)
{
    return (x + x);
}
int main()
{
    int x = 5, y = 10;

    printf("Antes del intercambio: x = %d, y = %d\n", x, y);
    trueque(&x, &y);
    printf("Después del intercambio: x = %d, y = %d\n", x, y);

    int resultado = suma(10);
    printf("Resultado de suma(10); %d\n", resultado);

    return 0;
}
