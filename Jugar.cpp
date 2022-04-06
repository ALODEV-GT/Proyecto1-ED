#include <iostream>
#include <string>
#include "Jugar.h"

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
    lista.desplegar();

    Movimiento mover;
    int opcion;
    do {
        ordenado = verificador->verificar_ordenado(inicio);
        if (!ordenado) {
            int *movimientos_disponibles = mover.ver_movimientos(vacio);
            opciones_juego();
            do {
                cin >> opcion;
            } while (!validarOpcion(opcion, movimientos_disponibles));
            switch (opcion) {
                case 1: {
                    vacio = mover.izquierda(vacio);
                }
                    break;
                case 2: {
                    vacio = mover.derecha(vacio);
                }
                    break;
                case 3: {
                    vacio = mover.superior(vacio);
                }
                    break;
                case 4: {
                    vacio = mover.inferior(vacio);
                }
                    break;
                case 5: {
                    vacio = mover.arriba(vacio);
                }
                    break;
                case 6: {
                    vacio = mover.abajo(vacio);
                }
                    break;
                case 7: {
                    reiniciar();
                }
                    break;
                case 8: {
                    salir = true;
                }
                    break;
            }
            lista.desplegar();
        }
    } while (!ordenado && !salir);
    if (ordenado) {
        cout << "Felicidades ganaste!!!" << endl;
    }
}

void Jugar::opciones_juego() {
    cout << "7. Reiniciar" << endl;
    cout << "8. Salir" << endl;
    cout << "Elija una opcion: " << endl;
}

bool Jugar::validarOpcion(int opcion, int *movimientos_disponibles) {
    bool valido = false;
    if (opcion >= 1 && opcion <= 8) { //Rango de opciones
        for (int i = 0; i < 6; ++i) { // 6 = movimientos
            if (opcion == movimientos_disponibles[i]) {
                valido = true;
                break;
            }
        }
        if (!valido) {
            if (opcion == 7 || opcion == 8) { //Validando la opcion repetir y salir.
                valido = true;
            }
        }
    }
    if (!valido) {
        cout << "Opcion invalida, vuelve a intentarlo: " << endl;
    }
    return valido;
}

bool Jugar::reiniciar() {
    return false;
}



