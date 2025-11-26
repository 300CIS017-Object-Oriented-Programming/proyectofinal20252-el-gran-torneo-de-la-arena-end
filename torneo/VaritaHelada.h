#ifndef VARITAHELADA_H
#define VARITAHELADA_H

#include "ObjetoMagico.h"
#include "Personaje.h"
#include <cstdlib>

class VaritaHelada : public ObjetoMagico {
public:
    VaritaHelada();
    void aplicarEfecto(Personaje* objetivo);
};

#endif