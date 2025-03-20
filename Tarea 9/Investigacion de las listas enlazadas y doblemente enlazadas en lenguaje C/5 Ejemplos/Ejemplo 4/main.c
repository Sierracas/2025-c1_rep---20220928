#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *sig, *ant;
};

void eliminar(struct Nodo** cabeza, int valor) {
    struct Nodo* temp = *cabeza;
    while (temp && temp->dato != valor)
        temp = temp->sig;
    if (!temp) return;
    if (temp->ant) temp->ant->sig = temp->sig;
    if (temp->sig) temp->sig->ant = temp->ant;
    if (*cabeza == temp) *cabeza = temp->sig;
    free(temp);
}

int main(void) {
    struct Nodo *n1 = malloc(sizeof(struct Nodo));
    struct Nodo *n2 = malloc(sizeof(struct Nodo));
    struct Nodo *n3 = malloc(sizeof(struct Nodo));

    if (!n1 || !n2 || !n3) return 1;

    n1->dato = 10; n1->ant = NULL; n1->sig = n2;
    n2->dato = 20; n2->ant = n1;  n2->sig = n3;
    n3->dato = 30; n3->ant = n2;  n3->sig = NULL;

    struct Nodo* cabeza = n1;

    eliminar(&cabeza, 20);

    while (cabeza) {
        struct Nodo* temp = cabeza;
        cabeza = cabeza->sig;
        free(temp);
    }

    return 0;
}
