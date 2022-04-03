#include "Partida.h"

Partida::Partida(string _nombre_jugador) {
    nombre_jugador = _nombre_jugador;
}

const string &Partida::getNombreJugador() const {
    return nombre_jugador;
}
