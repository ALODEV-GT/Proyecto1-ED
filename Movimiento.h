#include <iostream>
#include "lista_ortogonal.h"
using std::cout;
using std::cin;
using std::endl;

class Movimiento {
public:
    void izquierda(Nodo* nodo);
    void derecha(Nodo* nodo);
    void abajo(Nodo* nodo);
    void arriba(Nodo* nodo);
    void superior(Nodo* nodo);
    void inferior(Nodo* nodo);
    int* ver_movimientos(Nodo* nodo);
};
