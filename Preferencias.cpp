#include "Preferencias.h"

Preferencias::Preferencias(int _num_niveles, int _num_filas, int _num_columnas, bool _automatico) {
    num_niveles = _num_niveles;
    num_filas = _num_filas;
    num_columnas = _num_columnas;
    automatico = _automatico;
}

int Preferencias::getNumNiveles() const {
    return num_niveles;
}

void Preferencias::setNumNiveles(int numNiveles) {
    num_niveles = numNiveles;
}

int Preferencias::getNumFilas() const {
    return num_filas;
}

void Preferencias::setNumFilas(int numFilas) {
    num_filas = numFilas;
}

int Preferencias::getNumColumnas() const {
    return num_columnas;
}

void Preferencias::setNumColumnas(int numColumnas) {
    num_columnas = numColumnas;
}

bool Preferencias::isAutomatico() const {
    return automatico;
}

void Preferencias::setAutomatico(bool automatico) {
    Preferencias::automatico = automatico;
}
