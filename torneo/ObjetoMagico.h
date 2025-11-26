#ifndef OBJETOMAGICO_H
#define OBJETOMAGICO_H

#include <iostream>
#include <string>
using namespace std;

class Personaje;

class ObjetoMagico {
protected:
    string nombre;
    string descripcion;

public:
    ObjetoMagico(string nom, string desc);
    virtual ~ObjetoMagico();

    string getNombre();
    virtual void aplicarEfecto(Personaje* objetivo) = 0;
};

#endif