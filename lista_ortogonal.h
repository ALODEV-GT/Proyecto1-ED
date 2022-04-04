
struct Nodo{
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
public:
    lista_ortogonal();
    void crear(int niveles, int n, int m, bool automatico);
    void desplegar();
    int ingresar_valor(int[],int indice,bool, int tamanio);

};
