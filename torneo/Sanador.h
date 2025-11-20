#ifndef SANADOR_H
#define SANADOR_H

#include "Personaje.h"
#include <cstdlib>

class Sanador : public Personaje {
public:
    Sanador(string nom);
    void accion(Personaje* objetivo);
};

#endif