#ifndef PERGAMINOFUEGO_H
#define PERGAMINOFUEGO_H

#include "ObjetoMagico.h"
#include "Personaje.h"
#include <cstdlib>

class PergaminoFuego : public ObjetoMagico {
public:
    PergaminoFuego();
    void aplicarEfecto(Personaje* objetivo);
};

#endif