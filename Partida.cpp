#include "Partida.h"

Partida::Partida() {

}

const string &Partida::getNombreJugador() const {
    return nombre_jugador;
}

void Partida::setNombreJugador(const string &nombreJugador) {
    nombre_jugador = nombreJugador;
}

int Partida::getNumPuntos() const {
    return num_puntos;
}

void Partida::setNumPuntos(int numPuntos) {
    num_puntos = numPuntos;
}

int Partida::getTiempoPartida() const {
    return tiempo_partida;
}

void Partida::setTiempoPartida(int tiempoPartida) {
    tiempo_partida = tiempoPartida;
}

Preferencias *Partida::getPreferencias() const {
    return preferencias;
}

void Partida::setPreferencias(Preferencias *preferencias) {
    Partida::preferencias = preferencias;
}

int Partida::getPasosRealizados() const {
    return pasos_realizados;
}

void Partida::setPasosRealizados(int pasosRealizados) {
    pasos_realizados = pasosRealizados;
}
