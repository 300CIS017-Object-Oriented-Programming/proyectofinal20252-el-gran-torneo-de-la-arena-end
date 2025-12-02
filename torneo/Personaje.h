#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <iostream>

using namespace std;

class Personaje {
private:
    string nombre;
    int vida;
    int ataque;
    int defensa;
    string rol;

public:
    Personaje(string nom, int v, int atq, int def, string r);

    string getNombre();
    int getVida();
    int getAtaque();
    int getDefensa();
    string getRol();

    bool estaVivo();
    void recibirDanio(int cantidad);
    void curar(int cantidad);

    void mostrarEstado();
};

#endif
