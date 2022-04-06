#include "Verificador.h"

void Verificador::iniciarValoresTabla() {
    for (int i = 0; i < tamanio_arreglo; ++i) {
        valores_iniciales[i] = -1;
    }
}

int *Verificador::getValoresIniciales() const {
    return valores_iniciales;
}

Verificador::Verificador(int tamanio) {
    tamanio_arreglo = tamanio;
    valores_iniciales = new int[tamanio_arreglo];
    valores_ordenados = new int[tamanio_arreglo];
    iniciarValoresTabla();
}

void Verificador::ingresar_valores(bool automatico) {
    Aleatorio aleatorio;
    const int VACIO = 10000;
    int valor;
    bool invalido = false;
    for (int i = 0; i < tamanio_arreglo; ++i) {
        if (automatico) {
            valor = aleatorio.generarNumAleatorio(tamanio_arreglo, valores_iniciales);
            if(valor == 0){
                valor = VACIO;
            }
            valores_iniciales[i] = valor;
        } else {
            do {
                printf("\nIngrese el valor de la casilla %d: ", (i + 1));
                cin >> valor;
                invalido = aleatorio.buscarExiste(valores_iniciales, tamanio_arreglo, valor);
                if (!invalido) {
                    if (valor < 0 || valor > tamanio_arreglo - 1) {
                        printf("Solo puedes ingresar valores de 0 a %d ", tamanio_arreglo - 1);
                    } else {
                        if (valor == 0){
                            valor = VACIO;
                        }
                        valores_iniciales[i] = valor;
                    }
                } else {
                    printf("El valor %d ya existe, vuelva a intentarlo ", valor);
                }
            } while (invalido);
        }
    }
}

void Verificador::ordenar_valores() {
    for (int i = 0; i < tamanio_arreglo; ++i) {
        valores_ordenados[i] = valores_iniciales[i];
    }
    bubbleSort(valores_ordenados, tamanio_arreglo);
}

void Verificador::swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Verificador::bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

bool Verificador::verificar_ordenado(Nodo* inicio) {
    bool ordenado = true;
    Nodo *aux1 = inicio;
    Nodo *aux2 = inicio;
    Nodo *aux3 = inicio;
    int indice = 0;
    char separador = ' ';
    int contadorNiveles = 1;
    if (inicio != NULL) {
        while (aux3 != NULL) {
            while (aux2 != NULL) {
                while (aux1 != NULL) {
                    if (aux1->valor != valores_ordenados[indice++]) {
                        ordenado = false;
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

    return ordenado;
}
