#ifndef ARENA_H
#define ARENA_H

#include "Guild.h"

class Arena {
private:
    Guild* guildJugador;
    Guild* guildEnemigo;
    int turnoActual;

public:
    Arena(Guild* jugador, Guild* enemigo);
    void iniciarCombate();
};

#endif