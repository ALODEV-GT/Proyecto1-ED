#include <iostream>
#include "lista_ortogonal.h"
using std::cout;
using std::cin;
using std::endl;

class Movimiento {
private:
    const int VACIO = 10000;
    int contador_pasos = 0;
public:
    Nodo* izquierda(Nodo* nodo);
    Nodo* derecha(Nodo* nodo);
    Nodo* superior(Nodo* nodo);
    Nodo* inferior(Nodo* nodo);
    Nodo* arriba(Nodo* nodo);
    Nodo* abajo(Nodo* nodo);
    int* ver_movimientos(Nodo* nodo);
    int get_contador_pasos();
    void reiniciar_contador_pasos();
};
