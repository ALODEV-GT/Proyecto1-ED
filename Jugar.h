#include "Partida.h"

class Jugar {
public:
    Partida *iniciar();

private:
    void pedir_datos(Partida *);

    void *establecer_preferencias_juego(Partida *);

    void iniciar_motor_juego(Partida* partida);

    void establecer_valores_validos(int *valores_validos);
};
