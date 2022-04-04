#include <iostream>
#include <cstdlib>
#include "Aleatorio.h"

using namespace std;

int Aleatorio::generarNumAleatorio(int limSup, int valores[]) {
    int nuevo_valor = 0;
    bool existe = false;
    do {
        nuevo_valor = (rand() % (limSup));
        existe = buscarExiste(valores, limSup, nuevo_valor);
    } while (existe);
    return nuevo_valor;
}

void Aleatorio::iniciarValoresTabla(int valores[], int tamanio) {
    for (int i = 0; i < tamanio; ++i) {
        valores[i] = -1;
    }
}

bool Aleatorio::buscarExiste(int valores[], int tamanio, int nuevo_valor) {
    bool existe = false;
    for (int i = 0; i < tamanio; ++i) {
        if (nuevo_valor == valores[i]) {
            existe = true;
            break;
        }
    }
    return existe;
}
