#include <string>
using std::string;

class Partida {
private:
    string nombre_jugador;
    int num_puntos;
    int tiempo_partida;
public:
    Partida(string _nombre_jugador);

    const string &getNombreJugador() const;
};