#ifndef GUERRERO_H
#define GUERRERO_H

#include "Personaje.h"
#include <string>

class Guerrero : public Personaje {
private:
    int contadorGolpes;   // Necesario para críticos sin rand()

public:
    Guerrero(std::string nom);
    void accion(Personaje* objetivo);
};

#endif

