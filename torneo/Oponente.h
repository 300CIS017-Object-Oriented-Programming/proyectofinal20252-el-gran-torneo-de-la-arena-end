#ifndef OPONENTE_H
#define OPONENTE_H

#include "Personaje.h"

class Oponente : public Personaje {
public:
    Oponente(string nom, int v, int atq, int def, string r);
    void accion(Personaje* objetivo);
};

#endif
