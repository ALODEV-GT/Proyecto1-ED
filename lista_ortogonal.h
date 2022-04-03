
struct Nodo {
    int valor;
    Nodo *siguiente;
    Nodo *anterior;
    Nodo *arriba;
    Nodo *abajo;
};

class lista_ortogonal {
    Nodo *head = NULL;
public:
    lista_ortogonal();

    void crear(int n, int m, bool automatico);

    void desplegar();
//    int tamano();
//    int renglores();
//    int columnas();
//    void insertar_renglon_final();
//    void insertar_columna_final();
//    void insertar_renglon(int pos);
//    void insertar_columna(int pos);
//    void insertar_renglon_inicio();
//    void insertar_renglon_final();
//    void borrar_renglon_final();
//    void borrar_columna_final();
//    void borrar_renglon_inicio();
//    void borrar_columna_inicio();
//    void borrar_renglon(int pos);
//    void borrar_columna(int pos);
};
