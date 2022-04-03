#include <iostream>
#include "Jugar.h"
#include "lista_ortogonal.h"
#include <string>

using namespace std;

Partida *Jugar::iniciar() {
    auto *partida = new Partida();
    pedir_datos(partida);
    establecer_preferencias_juego(partida);
    iniciar_motor_juego(partida);
    return partida;
}

void Jugar::pedir_datos(Partida *partida) {
    string nombre_jugador;
    cout << "Ingresa tu nombre: ";
    cin >> nombre_jugador;
    partida->setNombreJugador(nombre_jugador);
}

void *Jugar::establecer_preferencias_juego(Partida *partida) {
    int num_niveles;
    int num_filas;
    int num_columnas;
    cout << "Ingrese el numero de niveles: " << endl;
    cin >> num_niveles;
    cout << "Ingrese el numero de filas: " << endl;
    cin >> num_filas;
    cout << "Ingrese el numero de columnas: " << endl;
    cin >> num_columnas;
    auto *preferencias = new Preferencias(num_niveles, num_filas, num_columnas);
    partida->setPreferencias(preferencias);
}

void Jugar::iniciar_motor_juego(Partida *partida) {
    int filas = partida->getPreferencias()->getNumFilas();
    int columnas = partida->getPreferencias()->getNumColumnas();
    int niveles = partida->getPreferencias()->getNumNiveles();
    int *valores = new int[filas * columnas];
    bool ordenado = false;
    bool salir = false;

    lista_ortogonal lista;
    lista.crear(niveles, filas, columnas, true);
    lista.desplegar();
//    do{
//
//    }while(!ordenado && !salir);
}

void establecer_valores_validos(int *valores_validos) {

}



