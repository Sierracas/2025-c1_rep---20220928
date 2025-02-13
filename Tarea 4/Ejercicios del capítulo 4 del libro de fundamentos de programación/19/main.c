#include <stdio.h>
#include <stdlib.h>

int a, b, c, d;

void funtion1(int, int *, int *);
int funtion2(int *, int);

int main(void)
{
    int a;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d", a, b, c, d);
    a = funtion2 (&a, c);
    printf("\m%d %d %d %d", a, b, c, d);
}

void funtion1(int r, int *b, int *c)
    {
        int d;
        a = *c;
        d = a + 3 +*b;
        if (r)
        {
            *b = *b + 2;
            *c = *c + 3;
            printf("\n%d %d %d %d", a, *b, *c, d);
        }
        else
        {
            *b = *b +5;
            *c = *c +4;
            printf("n\n%d %d %d %d", a, *b, *c ,d);
        }
    }
    int funtion2(int *d, int c)
    {
        int b;
        a = 1;
        b = 7;
        funtion1(-1, d, &b);

        printf("\n%d %d %d %d", a ,b, c, *d);
        c += 3;
        (*d) += 2;
        printf("\n%d %d %d %d", a, b, c, *d);
        return (c);

}
