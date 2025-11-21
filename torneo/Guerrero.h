#ifndef GUERRERO_H
#define GUERRERO_H

#include "Personaje.h"

class Guerrero :
public Personaje {
private:
    int contadorGolpes;

public:
    Guerrero(string nom);
    void accion(Personaje* objetivo);
};

#endif
