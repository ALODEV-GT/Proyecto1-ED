#include "Partida.h"
#include "Movimiento.h"
#include "Verificador.h"

class Jugar {
public:
    Partida *iniciar();

private:
    void pedir_datos(Partida *);

    void *establecer_preferencias_juego(Partida *);

    void iniciar_motor_juego(Preferencias* preferencias);

    void opciones_juego();

    bool validarOpcion(int, int*);

};
