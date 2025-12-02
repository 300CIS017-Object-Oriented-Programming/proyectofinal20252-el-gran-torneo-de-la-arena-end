#ifndef POCIONVIDA_H
#define POCIONVIDA_H

#include "ObjetoMagico.h"
#include "Personaje.h"
#include <cstdlib>

class PocionVida : public ObjetoMagico {
public:
    PocionVida();
    void aplicarEfecto(Personaje* objetivo);
};

#endif