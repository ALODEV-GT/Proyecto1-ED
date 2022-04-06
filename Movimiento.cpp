#include "Movimiento.h"

void Movimiento::izquierda(Nodo *nodo) {

}

void Movimiento::derecha(Nodo *nodo) {

}

void Movimiento::abajo(Nodo *nodo) {

}

void Movimiento::arriba(Nodo *nodo) {

}

void Movimiento::superior(Nodo *nodo) {

}

void Movimiento::inferior(Nodo *nodo) {

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
        cout << "2. Mover a la derecha" << endl;
        cout << nodo->siguiente->valor << endl;
        movimentos_disponibles[1] = 2;
    }
    if (nodo->superior != NULL) {
        cout << "3. Mover hacia arriba" << endl;
        cout << nodo->superior->valor << endl;
        movimentos_disponibles[2] = 3;
    }
    if (nodo->inferior != NULL) {
        cout << "4. Mover hacia abajo" << endl;
        cout << nodo->inferior->valor << endl;
        movimentos_disponibles[3] = 4;
    }
    if (nodo->arriba != NULL) {
        cout << "5. Mover al nivel de arriba" << endl;
        cout << nodo->arriba->valor << endl;
        movimentos_disponibles[4] = 5;
    }
    if (nodo->abajo != NULL) {
        cout << "6. Mover al nivel de abajo" << endl;
        cout << nodo->abajo->valor << endl;
        movimentos_disponibles[5] = 6;
    }
    return movimentos_disponibles;
}

