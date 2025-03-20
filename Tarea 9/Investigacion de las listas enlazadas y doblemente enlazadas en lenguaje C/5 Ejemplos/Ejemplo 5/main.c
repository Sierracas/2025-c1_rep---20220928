#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *ant, *sig;
};

void insertar(struct Nodo **cabeza, int valor) {
    struct Nodo *nuevo = malloc(sizeof(struct Nodo));
    if (!nuevo) return;
    nuevo->dato = valor;
    nuevo->ant = NULL;
    nuevo->sig = *cabeza;
    if (*cabeza) (*cabeza)->ant = nuevo;
    *cabeza = nuevo;
}

void imprimir(struct Nodo *cabeza) {
    while (cabeza) {
        printf("%d <-> ", cabeza->dato);
        cabeza = cabeza->sig;
    }
    printf("NULL\n");
}

void imprimirReversa(struct Nodo *cabeza) {
    if (!cabeza) {
        printf("NULL\n");
        return;
    }
    while (cabeza->sig)
        cabeza = cabeza->sig;
    while (cabeza) {
        printf("%d <-> ", cabeza->dato);
        cabeza = cabeza->ant;
    }
    printf("NULL\n");
}

int main(void) {
    struct Nodo *lista = NULL;
    insertar(&lista, 10);
    insertar(&lista, 20);
    insertar(&lista, 30);
    imprimir(lista);
    imprimirReversa(lista);
    return 0;
}

