#include <iostream>
#include "Inicio.h"
#include "lista_ortogonal.h"
#include "Jugar.h"

using std::endl;
using std::cout;
using std::cin;

void Inicio::iniciar() {
    int opcion;
    do {
        menu();
        std::cin >> opcion;
        distrubuir(opcion);
    } while (opcion == 1 || opcion == 2);
}

void Inicio::menu() {
    cout << "---------------- Bienvenido ----------------" << endl;
    cout << "1.- Jugar" << endl;
    cout << "2.- Ver tabla de posiciones" << endl;
    cout << "3.- Salir" << endl;
    cout << "elegir: ";
}

void Inicio::distrubuir(int opcion) {
    switch (opcion) {
        case 1: {
            Jugar jugar;
            jugar.
            break;
        }
        case 2: {
            cout << "Opcion 2: Ver tabla" << endl;
            //Funcion ver tabla
            break;
        }
        default: {
            cout << "Opcion diferente: Salir" << endl;
            //nada
            break;
        }
    }

}

