class Preferencias {
private:
    int num_niveles;
    int num_filas;
    int num_columnas;
public:
    Preferencias(int num_niveles, int num_filas, int num_columnas);

    int getNumNiveles() const;

    void setNumNiveles(int numNiveles);

    int getNumFilas() const;

    void setNumFilas(int numFilas);

    int getNumColumnas() const;

    void setNumColumnas(int numColumnas);
};
