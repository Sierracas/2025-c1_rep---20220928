#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* sig;
};

void eliminar(struct Nodo** cabeza, int valor) {
    struct Nodo *temp = *cabeza, *prev = NULL;
    if (temp != NULL && temp->dato == valor) {
        *cabeza = temp->sig;
        free(temp);
        return;
    }
    while (temp != NULL && temp->dato != valor) {
        prev = temp;
        temp = temp->sig;
    }
    if (temp == NULL) return;
    prev->sig = temp->sig;
    free(temp);
}

void imprimir(struct Nodo* cabeza) {
    struct Nodo* temp = cabeza;
    while (temp != NULL) {
        printf("%d -> ", temp->dato);
        temp = temp->sig;
    }
    printf("NULL\n");
}

int main() {
    struct Nodo *lista = NULL;
    struct Nodo *n1 = malloc(sizeof(struct Nodo));
    struct Nodo *n2 = malloc(sizeof(struct Nodo));
    struct Nodo *n3 = malloc(sizeof(struct Nodo));
    if (!n1 || !n2 || !n3) return 1;
    n1->dato = 10; n1->sig = n2;
    n2->dato = 20; n2->sig = n3;
    n3->dato = 30; n3->sig = NULL;
    lista = n1;
    imprimir(lista);
    eliminar(&lista, 20);
    imprimir(lista);
    while (lista != NULL) {
        struct Nodo *temp = lista;
        lista = lista->sig;
        free(temp);
    }
    return 0;
}
