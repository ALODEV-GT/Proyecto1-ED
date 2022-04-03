#include <iostream>
#include "lista_ortogonal.h"
#include "Aleatorio.h"

using namespace std;

lista_ortogonal::lista_ortogonal() {
}

void lista_ortogonal::crear(int n, int m, bool automatico) {
    int valores[n * m];
    Aleatorio alt;
    alt.iniciarValoresTabla(valores, m, n);
    Nodo *p;
    Nodo *q;
    Nodo *r;
    int i, j, contador = 0;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            p = new struct Nodo;
            if (!automatico) {
                cout << "Ingrese el dato: ";
                cin >> p->valor;
            } else {
                int nuevo_valor = alt.generarNumAleatorio(n * m, valores);
                valores[contador] = nuevo_valor;
                contador++;
                p->valor = nuevo_valor;
            }
            p->siguiente = NULL;
            p->abajo = NULL;
            if (j == 1) {
                p->anterior = NULL;
                if (head == NULL)
                    head = p;
                q = p;
            } else {
                p->anterior = q;
                q->siguiente = p;
                q = p;
            }
            if (i == 1) {
                p->arriba = NULL;
                q = p;
            } else {
                p->arriba = r;
                r->abajo = p;
                r = r->siguiente;
            }
        }
        r = head;
        while (r->abajo != NULL)
            r = r->abajo;
    }
}

void lista_ortogonal::desplegar() {
    Nodo *p;
    Nodo *q;
    char separador = ' ';
    if (head != NULL) {
        p = head;
        while (p != NULL) {
            q = p;
            while (q != NULL) {
                printf("%c %-3d ", separador, q->valor);
                q = q->siguiente;
                separador = '|';
            }
            separador = ' ';
            cout << endl;
            p = p->abajo;
        }
    } else
        cout << "Lista vacia...";
}