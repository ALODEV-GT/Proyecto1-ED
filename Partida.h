#include <string>
#include "Preferencias.h"

using std::string;

class Partida {
private:
    string nombre_jugador;
    int num_puntos = 0;
    int tiempo_partida = 0;
    int pasos_realizados = 0;
    Preferencias *preferencias;
public:
    int getPasosRealizados() const;

    void setPasosRealizados(int pasosRealizados);

    Preferencias *getPreferencias() const;

    void setPreferencias(Preferencias *preferencias);

    Partida();

    const string &getNombreJugador() const;

    void setNombreJugador(const string &nombreJugador);

    int getNumPuntos() const;

    void setNumPuntos(int numPuntos);

    int getTiempoPartida() const;

    void setTiempoPartida(int tiempoPartida);
};