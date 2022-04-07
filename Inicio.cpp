#include <iostream>
#include "Inicio.h"

using std::endl;
using std::cout;
using std::cin;

void Inicio::iniciar() {
    auto *tabla = new TablaPosiciones();
    int opcion;
    do {
        menu();
        std::cin >> opcion;
        distrubuir(opcion, tabla);
    } while (opcion == 1 || opcion == 2);
}

void Inicio::menu() {
    cout << "---------------- Bienvenido ----------------" << endl;
    cout << "1.- Jugar" << endl;
    cout << "2.- Ver tabla de posiciones" << endl;
    cout << "3.- Salir" << endl;
    cout << "elegir: ";
}

void Inicio::distrubuir(int opcion, TablaPosiciones *tabla) {
    switch (opcion) {
        case 1: {
            auto *jugar = new Jugar();
            jugar->iniciar(tabla);
            break;
        }
        case 2: {
            tabla->ordenar();
            tabla->desplegar();
            break;
        }
        default: {
            cout << "Opcion diferente: Salir" << endl;
            break;
        }
    }

}

Inicio::~Inicio() {

}

