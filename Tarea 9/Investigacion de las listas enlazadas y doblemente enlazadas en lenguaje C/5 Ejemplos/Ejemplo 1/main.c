#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void insertar(struct Nodo** cabeza, int valor){
    struct Nodo* nuevo = malloc(sizeof(struct Nodo));
nuevo->dato = valor;
nuevo->siguiente = *cabeza;
*cabeza = nuevo;
}

void imprimir(struct Nodo* nodo) {
    while (nodo) {
            printf("%d -> ", nodo->dato);
    nodo = nodo->siguiente;
}
printf("NULL\n");
}

int main() {
    struct Nodo* lista = NULL;
    insertar(&lista, 10);
    insertar(&lista, 20);
    insertar(&lista, 30);
    imprimir(lista);
    return 0;
}
