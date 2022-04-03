#include <iostream>
#include "Jugar.h"
#include "Partida.h"
#include <string>

using namespace std;

Partida Jugar::pedir_datos() {
    string nombre_jugador;
    cout << "Ingresa tu nombre: ";
    cin >> nombre_jugador;
    Partida partida(nombre_jugador);
    cout << "Hola " << partida.getNombreJugador();
}
