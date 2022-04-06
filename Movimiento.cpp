#include "Movimiento.h"

Nodo *Movimiento::izquierda(Nodo *nodo) {
    Nodo *anterior = nodo->anterior;
    int valor = anterior->valor;
    nodo->valor = valor;
    anterior->valor = VACIO;
    contador_pasos++;
    return anterior;
}

Nodo *Movimiento::derecha(Nodo *nodo) {
    Nodo *siguiente = nodo->siguiente;
    int valor = siguiente->valor;
    nodo->valor = valor;
    siguiente->valor = VACIO;
    contador_pasos++;
    return siguiente;
}

Nodo *Movimiento::superior(Nodo *nodo) {
    Nodo *superior = nodo->superior;
    int valor = superior->valor;
    nodo->valor = valor;
    superior->valor = VACIO;
    contador_pasos++;
    return superior;
}

Nodo *Movimiento::inferior(Nodo *nodo) {
    Nodo *inferior = nodo->inferior;
    int valor = inferior->valor;
    nodo->valor = valor;
    inferior->valor = VACIO;
    contador_pasos++;
    return inferior;
}

Nodo *Movimiento::arriba(Nodo *nodo) {
    Nodo *arriba = nodo->arriba;
    int valor = arriba->valor;
    nodo->valor = valor;
    arriba->valor = VACIO;
    contador_pasos++;
    return arriba;
}

Nodo *Movimiento::abajo(Nodo *nodo) {
    Nodo *abajo = nodo->abajo;
    int valor = abajo->valor;
    nodo->valor = valor;
    abajo->valor = VACIO;
    contador_pasos++;
    return abajo;
}

int *Movimiento::ver_movimientos(Nodo *nodo) {
    int *movimentos_disponibles = new int[6];
    for (int i = 0; i < 6; i++) {
        movimentos_disponibles[i] = 0;
    }
    if (nodo->anterior != NULL) {
        cout << "3. Mover a la derecha" << endl;
        movimentos_disponibles[0] = 3;
    }
    if (nodo->siguiente != NULL) {
        cout << "1. Mover a la izquierda" << endl;
        movimentos_disponibles[1] = 1;
    }
    if (nodo->superior != NULL) {
        cout << "2. Mover hacia abajo" << endl;
        movimentos_disponibles[2] = 2;
    }
    if (nodo->inferior != NULL) {
        cout << "5. Mover hacia arriba" << endl;
        movimentos_disponibles[3] = 5;
    }
    if (nodo->arriba != NULL) {
        cout << "6. Mover espacio al nivel de arriba" << endl;
        movimentos_disponibles[4] = 6;
    }
    if (nodo->abajo != NULL) {
        cout << "4. Mover espacio al nivel de abajo" << endl;
        movimentos_disponibles[5] = 4;
    }
    return movimentos_disponibles;
}

int Movimiento::get_contador_pasos() {
    return contador_pasos;
}

void Movimiento::reiniciar_contador_pasos() {
    contador_pasos = 0;
}

