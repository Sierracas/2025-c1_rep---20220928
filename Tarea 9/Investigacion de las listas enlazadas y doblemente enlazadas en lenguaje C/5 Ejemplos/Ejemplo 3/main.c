#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
        struct Nodo *sig, *ant;
};

void insertar(struct Nodo** cabeza, int valor){
    struct Nodo* nuevo = malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->sig = *cabeza;
    nuevo->ant = NULL;
    if (*cabeza) (*cabeza)->ant = nuevo;
    *cabeza = nuevo;
}

void imprimir(struct Nodo* nodo) {
    while (nodo) {
        printf("%d <-> ", nodo->dato);
        nodo = nodo->sig;
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
