#include "Movimiento.h"

Nodo *Movimiento::izquierda(Nodo *nodo) {
    Nodo *anterior = nodo->anterior;
    int valor = anterior->valor;
    nodo->valor = valor;
    anterior->valor = VACIO;
    return anterior;
}

Nodo *Movimiento::derecha(Nodo *nodo) {
    Nodo *siguiente = nodo->siguiente;
    int valor = siguiente->valor;
    nodo->valor = valor;
    siguiente->valor = VACIO;
    return siguiente;
}

Nodo *Movimiento::superior(Nodo *nodo) {
    Nodo *superior = nodo->superior;
    int valor = superior->valor;
    nodo->valor = valor;
    superior->valor = VACIO;
    return superior;
}

Nodo *Movimiento::inferior(Nodo *nodo) {
    Nodo *inferior = nodo->inferior;
    int valor = inferior->valor;
    nodo->valor = valor;
    inferior->valor = VACIO;
    return inferior;
}

Nodo *Movimiento::arriba(Nodo *nodo) {
    Nodo *arriba = nodo->arriba;
    int valor = arriba->valor;
    nodo->valor = valor;
    arriba->valor = VACIO;
    return arriba;
}

Nodo *Movimiento::abajo(Nodo *nodo) {
    Nodo *abajo = nodo->abajo;
    int valor = abajo->valor;
    nodo->valor = valor;
    abajo->valor = VACIO;
    return abajo;
}

int *Movimiento::ver_movimientos(Nodo *nodo) {
    int *movimentos_disponibles = new int[6];
    for (int i = 0; i < 6; i++) {
        movimentos_disponibles[i] = 0;
    }
    if (nodo->anterior != NULL) {
        cout << "1. Mover a la izquierda" << endl;
        cout << nodo->anterior->valor << endl;
        movimentos_disponibles[0] = 1;
    }
    if (nodo->siguiente != NULL) {
        cout << "3. Mover a la derecha" << endl;
        cout << nodo->siguiente->valor << endl;
        movimentos_disponibles[1] = 3;
    }
    if (nodo->superior != NULL) {
        cout << "5. Mover hacia arriba" << endl;
        cout << nodo->superior->valor << endl;
        movimentos_disponibles[2] = 5;
    }
    if (nodo->inferior != NULL) {
        cout << "2. Mover hacia abajo" << endl;
        cout << nodo->inferior->valor << endl;
        movimentos_disponibles[3] = 2;
    }
    if (nodo->arriba != NULL) {
        cout << "6. Mover al nivel de arriba" << endl;
        cout << nodo->arriba->valor << endl;
        movimentos_disponibles[4] = 6;
    }
    if (nodo->abajo != NULL) {
        cout << "4. Mover al nivel de abajo" << endl;
        cout << nodo->abajo->valor << endl;
        movimentos_disponibles[5] = 4;
    }
    return movimentos_disponibles;
}

