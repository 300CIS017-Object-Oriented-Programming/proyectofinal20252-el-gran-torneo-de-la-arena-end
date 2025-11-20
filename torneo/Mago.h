#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"
#include <cstdlib>

class Mago : public Personaje {
public:
    Mago(string nom);
    void accion(Personaje* objetivo);
};

#endif