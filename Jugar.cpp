#include <iostream>
#include "Jugar.h"
#include "lista_ortogonal.h"
#include "Verificador.h"
#include <string>

using namespace std;

Partida *Jugar::iniciar() {
    auto *partida = new Partida();
    pedir_datos(partida);
    establecer_preferencias_juego(partida);
    Preferencias *pref = partida->getPreferencias();
    iniciar_motor_juego(partida->getPreferencias());
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
    bool automatico = true;
    char automaticoChar;
    cout << "Ingrese el numero de niveles: " << endl;
    cin >> num_niveles;
    cout << "Ingrese el numero de filas: " << endl;
    cin >> num_filas;
    cout << "Ingrese el numero de columnas: " << endl;
    cin >> num_columnas;
    cout << "Llenar automaticamente (s/n): " << endl;
    cin >> automaticoChar;
    if (automaticoChar == 'n') {
        automatico = false;
    }
    auto *preferencias = new Preferencias(num_niveles, num_filas, num_columnas, automatico);
    partida->setPreferencias(preferencias);
    return nullptr;
}

void Jugar::iniciar_motor_juego(Preferencias *preferencias) {
    bool ordenado = false;
    bool salir = false;

    int filas = preferencias->getNumFilas();
    int columnas = preferencias->getNumColumnas();
    int niveles = preferencias->getNumNiveles();
    bool automatico = preferencias->isAutomatico();
    auto *verificador = new Verificador(filas * columnas * niveles);
    verificador->ingresar_valores(automatico);
    verificador->ordenar_valores();

    int *valores = verificador->getValoresIniciales();
    lista_ortogonal lista;
    lista.crear(niveles, filas, columnas, valores);
    Nodo *inicio = lista.getInicio();
    Nodo *vacio = lista.getVacio();
    printf("El valor del nodo inicio es: %d\n", inicio->valor);
    printf("El valor del nodo vacio es: %d\n", vacio->valor);
    lista.desplegar();

    do {
        //movimientos, salir, reiniciar partida
    } while (!ordenado && !salir);
}

void establecer_valores_validos(int *valores_validos) {

}



