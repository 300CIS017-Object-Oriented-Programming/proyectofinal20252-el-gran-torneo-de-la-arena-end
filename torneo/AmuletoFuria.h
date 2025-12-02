#ifndef AMULETOFURIA_H
#define AMULETOFURIA_H

#include "ObjetoMagico.h"
#include "Personaje.h"
#include <cstdlib>

class AmuletoFuria : public ObjetoMagico {
public:
    AmuletoFuria();
    void aplicarEfecto(Personaje* objetivo);
};

#endif