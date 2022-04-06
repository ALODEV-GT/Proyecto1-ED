#include <cstddef>
struct Nodo {
    int valor;
    Nodo *siguiente;
    Nodo *anterior;
    Nodo *superior;
    Nodo *inferior;
    Nodo *arriba;
    Nodo *abajo;
};

class lista_ortogonal {
    Nodo *inicio = NULL;
    Nodo *vacio = NULL;
public:
    lista_ortogonal();

    void crear(int niveles, int n, int m, int*);

    void desplegar();

    Nodo* getInicio();

    Nodo* getVacio();
};
