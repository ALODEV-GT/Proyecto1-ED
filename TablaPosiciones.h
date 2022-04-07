#ifndef PROYECTO1ED_TABLAPOSICIONES_H
#define PROYECTO1ED_TABLAPOSICIONES_H

#include "Partida.h"

struct NodoPartida {
    Partida *valor;
    NodoPartida *siguiente;
    NodoPartida *anterior;
};

class TablaPosiciones {
private:
    NodoPartida *primero = NULL;
public:
    void agregar(Partida *partida);

    void desplegar();

    void ordenar();

    ~TablaPosiciones();
};


#endif //PROYECTO1ED_TABLAPOSICIONES_H
