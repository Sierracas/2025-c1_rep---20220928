#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RESTA 2
#define SUMA 1
#define DIVISION 3
#define ERR_OK 0
#define ERR_DbyZ 1
#define MULTIPLICACION 4
#define SQRT 5
#define ERR_NEGATIVE 2
#define POTENCIA2 6
//declaraciones de funciones
void EntradaNumeros(float *n1,float *n2);
void EntradaNumero(float *n1);

int suma(float n1, float n2, float *pResult);

int resta(float n1, float n2, float *pResult);

int dividir(float n1, float n2, float *pResult);

int multiplicar(float n1, float n2, float *pResult);

int raizcuadrada(float n1, float *pResult);

int potencia2(float n1, float *pResult);
//variable global
float gResult = 0.0;

int main()
{
    // *operador de indireccion
    // &operador de direccion

    //ambito de variable
    float numero1 = 0.0;
    float numero2 = 0.0;
    float result = 0.0;
    int menu = 0;
    int err = 0;

    do
    {
        printf("\n0-Salir\n1-Suma\n2-Resta\n3-Dividir\n4-Multiplicar\n5-Raiz cuadrada\n6-Potencia al cuadrado\n");
        scanf("%i",&menu);

        //verifica si es suma
        if(menu == SUMA)
        {
            //parametros por referencia
            EntradaNumeros(&numero1,&numero2);
            //parametros por valor
            err = suma(numero1, numero2,&result);
            printf("\nLa suma de %f mas %f es: %f",numero1,numero2,result);
        }
        //verifica si es resta
        else if(menu == RESTA)
        {
            EntradaNumeros(&numero1,&numero2);
            err = resta(numero1, numero2,&result);
            printf("\nLa resta de %f menos %f es: %f",numero1,numero2,result);
        }

        else if(menu == DIVISION)
        {
           EntradaNumeros(&numero1,&numero2);
           err = dividir(numero1, numero2,&result);
           if(err != ERR_OK)
           {
               if(err == ERR_DbyZ)
               {
                  printf("\nError division por 0");
               }
           }
           else
           {
             printf("\nLa division de %f dividido %f es: %f",numero1,numero2,result);
           }
        }

         else if(menu == MULTIPLICACION)
         {
             EntradaNumeros(&numero1,&numero2);
             err = multiplicar(numero1, numero2, &result);
              printf("\nLa multiplicacion de %f multiplicado %f es: %f",numero1,numero2,result);

    }

        else if(menu == SQRT)
         {
             EntradaNumero(&numero1);
             err = raizcuadrada(numero1, &result);
             if (err == ERR_OK)
             {
             printf("\nLa raiz cuadra de %f es: %f",numero1,result);
             }
             else
             {
                 printf("\nError: No se puede calcular la raiz cuadrada de un numero negativo.");
             }
         }

             if(menu == POTENCIA2)
             {
              EntradaNumero(&numero1);
              err = potencia2(numero1, &result);
              if (err == ERR_OK)
              {
                 printf("\nLa potencia al cuadrado de %f es: %f",numero1,result);
              }
                  else if(menu ==0)
                  {
                      printf("\nFin del programa.");
                  }
                  else
                  {
                      printf("\nOpcion no valida. Intente de nuevo.");
                  }
              }

    } while(menu != 0);

    printf("\nFin de programa");
    return 0;
}
//vamos pasar parametros por referencia
void EntradaNumeros(float *n1,float *n2)
{
    printf("\nIngresa numero1:");
    scanf("%f",n1);
    printf("\nIngresa numero2:");
    scanf("%f",n2);
}
void EntradaNumero(float *n1)
{
    printf("\nIngresa un numero");
    scanf("%f",n1);
}

//vamos a pasar parametros por valor
int suma(float n1, float n2, float *pResult)
{
    *pResult = n1 + n2;
    return ERR_OK;
}

int resta(float n1, float n2, float *pResult)
{
   *pResult = n1 - n2;
    return ERR_OK;
}

int dividir(float n1, float n2, float *pResult)
{
    if(n2 == 0.0)
    {
       return  ERR_DbyZ;
    }
    else
    {
        *pResult = n1 / n2;
        return ERR_OK;
    }
}
int multiplicar(float n1, float n2, float *pResult)
{
        *pResult = n1 * n2;
        return ERR_OK;
}
int raizcuadrada(float n1, float *pResult)
{
        if (n1 < 0)
        {
            return ERR_NEGATIVE;
        }
        *pResult = sqrt(n1);
        return ERR_OK;
}
int potencia2(float n1, float *pResult)
{
        *pResult = n1 * n1;
        return ERR_OK;
}
