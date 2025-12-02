#ifndef ESCUDOBENDITO_H
#define ESCUDOBENDITO_H

#include "ObjetoMagico.h"
#include "Personaje.h"
#include <cstdlib>

class EscudoBendito : public ObjetoMagico {
public:
    EscudoBendito();
    void aplicarEfecto(Personaje* objetivo);
};

#endif