#include <string>
#include "Preferencias.h"

using std::string;

class Partida {
private:
    string nombre_jugador;
    int num_puntos;
    int tiempo_partida;
    int pasos_realizados;
public:
    int getPasosRealizados() const;

    void setPasosRealizados(int pasosRealizados);

private:
    Preferencias* preferencias;
public:
    Preferencias *getPreferencias() const;

    void setPreferencias(Preferencias *preferencias);

public:
    Partida();

    const string &getNombreJugador() const;

    void setNombreJugador(const string &nombreJugador);

    int getNumPuntos() const;

    void setNumPuntos(int numPuntos);

    int getTiempoPartida() const;

    void setTiempoPartida(int tiempoPartida);
};