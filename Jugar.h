#include "Partida.h"
#include "Movimiento.h"
#include "Verificador.h"
#include "TablaPosiciones.h"

class Jugar {
public:
    void *iniciar(TablaPosiciones *tabla);

private:
    void pedir_datos(Partida *);

    void *establecer_preferencias_juego(Partida *);

    void iniciar_motor_juego(Partida *partida, TablaPosiciones *tabla);

    void opciones_juego();

    bool validarOpcion(int, int *);

};
