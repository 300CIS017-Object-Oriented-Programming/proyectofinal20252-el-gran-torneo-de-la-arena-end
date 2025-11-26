#ifndef PIESVELOCES_H
#define PIESVELOCES_H

#include "ObjetoMagico.h"
#include "Personaje.h"

class PiesVeloces : public ObjetoMagico {
public:
    PiesVeloces();
    void aplicarEfecto(Personaje* objetivo);
};

#endif