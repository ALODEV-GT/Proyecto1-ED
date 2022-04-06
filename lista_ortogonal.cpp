#include <iostream>
#include "lista_ortogonal.h"

using namespace std;

lista_ortogonal::lista_ortogonal() {
}

void lista_ortogonal::crear(int niveles, int n, int m, int _valores[]) {
    const int VACIO = 10000;
    int *valores = _valores;
    int indice = 0;
    int valor;
    inicio = new struct Nodo;
    inicio->valor = valores[indice++];
    Nodo *actual = inicio;
    Nodo *fila = inicio;
    Nodo *abajo = inicio;
    Nodo *fila_nivel = inicio;
    Nodo *columna;
    Nodo *aux;
    Nodo *columna_nivel;
    for (int k = 0; k < niveles; ++k) {
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m - 1; ++i) {
                columna = new struct Nodo;
                valor = valores[indice++];
                columna->valor = valor;
                if (valor == VACIO) { vacio = columna; }
                actual->siguiente = columna;
                columna->anterior = actual;
                if (j > 0) {
                    aux = aux->siguiente;
                    aux->inferior = columna;
                    columna->superior = aux;
                }
                if (k > 0) {
                    columna->arriba = columna_nivel;
                    columna_nivel->abajo = columna;
                    columna_nivel = columna_nivel->siguiente;
                }
                actual = columna;
            }
            if (j != n - 1) {
                aux = fila;
                columna = new struct Nodo;
                valor = valores[indice++];
                columna->valor = valor;
                if (valor == VACIO) { vacio = columna; }
                columna->superior = fila;
                fila->inferior = columna;
                fila = columna;
                actual = columna;

                if (k > 0) {
                    fila_nivel = fila_nivel->inferior;
                    columna_nivel = fila_nivel;
                    columna->arriba = columna_nivel;
                    columna_nivel->abajo = columna;
                    columna_nivel = columna_nivel->siguiente;
                }
            }
        }
        if (k != niveles - 1) {
            columna = new struct Nodo;
            valor = valores[indice++];
            columna->valor = valor;
            if (valor == VACIO) { vacio = columna; }
            abajo->abajo = columna;
            fila = columna;
            columna->arriba = abajo;
            fila_nivel = abajo;
            abajo = columna;
            actual = columna;
            columna_nivel = abajo->arriba->siguiente;
        }
    }
}

void lista_ortogonal::desplegar() {
    const int VACIO = 10000;
    Nodo *aux1 = inicio;
    Nodo *aux2 = inicio;
    Nodo *aux3 = inicio;
    char separador = ' ';
    int contadorNiveles = 1;
    if (inicio != NULL) {
        while (aux3 != NULL) {
            cout << "\nNivel " << contadorNiveles++ << endl;
            cout << "-----------------" << endl;
            while (aux2 != NULL) {
                while (aux1 != NULL) {
                    if (aux1->valor == VACIO) {
                        printf("%c %3c ", separador, 'X');
                    } else {
                        printf("%c %3d ", separador, aux1->valor);
                    }
                    aux1 = aux1->siguiente;
                    separador = '|';
                }
                separador = ' ';
                cout << "" << endl;
                aux1 = aux2->inferior;
                aux2 = aux1;
            }
            aux1 = aux3->abajo;
            aux2 = aux1;
            aux3 = aux1;
        }
    } else {
        cout << "Lista vacia" << endl;
    }
}

Nodo *lista_ortogonal::getInicio() {
    return inicio;
}

Nodo *lista_ortogonal::getVacio() {
    return vacio;
}
