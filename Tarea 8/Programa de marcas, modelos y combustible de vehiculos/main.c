#include <stdio.h>
#include <stdlib.h>
#define MAX_VEHICULOS 100

typedef struct {
    char marca[50];
    char modelo[50];
    float consumo;
} Vehiculo;

void registrarVehiculos(Vehiculo vehiculos[], int *numVehiculos);
void mostrarVehiculos(Vehiculo vehiculos[], int numVehiculos, float precioGalon);

int main() {
    Vehiculo vehiculos[MAX_VEHICULOS];
    int numVehiculos = 0;
    float precioGalon;

    printf("Ingrese el precio del combustible por galon: ");
    scanf("%f", &precioGalon);

    registrarVehiculos(vehiculos, &numVehiculos);
    mostrarVehiculos(vehiculos, numVehiculos, precioGalon);

    return 0;
}

void registrarVehiculos(Vehiculo vehiculos[], int *numVehiculos) {
    char continuar;

    do {
        printf("\nRegistro de vehiculo %d:\n", *numVehiculos + 1);
        printf("Ingrese la marca del vehiculo: ");
        scanf(" %[^\n]", vehiculos[*numVehiculos].marca);
        printf("Ingrese el modelo del vehiculo: ");
        scanf("%s", vehiculos[*numVehiculos].modelo);
        printf("Ingrese el consumo de combustible (galones por km): ");
        scanf("%f", &vehiculos[*numVehiculos].consumo);

        (*numVehiculos)++;

        printf("¿Desea registrar otro vehiculo? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
}

void mostrarVehiculos(Vehiculo vehiculos[], int numVehiculos, float precioGalon) {
    float kilometraje = 0, costoTotal = 0;

    printf("\nListado de vehiculos registrados:\n");
    printf("------------------------------------------------------------\n");
    printf("Marca\t\tModelo\t\tConsumo (gal/km)\tKm\tCosto Total\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < numVehiculos; i++) {
            printf("Ingrese el kilometraje recorrido por el %s %s: ", vehiculos[i].marca, vehiculos[i].modelo);
            scanf("%f", &kilometraje);

            costoTotal = (kilometraje * vehiculos[i].consumo) * precioGalon;

            printf("%s\t%s\t%.2f\t\t%.2f\t$%.2f\n", vehiculos[i].marca, vehiculos[i].modelo, vehiculos[i].consumo, kilometraje, costoTotal);
    }
}
