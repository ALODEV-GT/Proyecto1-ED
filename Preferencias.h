#ifndef PROYECTO1ED_PREFERENCIAS_H
#define PROYECTO1ED_PREFERENCIAS_H

class Preferencias {
private:
    int num_niveles;
    int num_filas;
    int num_columnas;
    bool automatico;
public:
    Preferencias(int num_niveles, int num_filas, int num_columnas, bool automatico);

    int getNumNiveles() const;

    void setNumNiveles(int numNiveles);

    int getNumFilas() const;

    void setNumFilas(int numFilas);

    int getNumColumnas() const;

    void setNumColumnas(int numColumnas);

    bool isAutomatico() const;

    void setAutomatico(bool automatico);
};

#endif //PROYECTO1ED_PREFERENCIAS_H
