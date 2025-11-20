#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>
using namespace std;

class Personaje {
protected:
    string nombre;
    int vida;
    int ataque;
    int defensa;
    string rol;

public:
    Personaje(string nom, int v, int atq, int def, string r);

    string getNombre();
    int getVida();
    string getRol();
    bool estaVivo();
    void recibirDanio(int cantidad);
    void curar(int cantidad);
    void mostrarEstado();

    virtual void accion(Personaje* objetivo) = 0;
    virtual ~Personaje() {}
};

#endif