#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ObjetoMagico;

class Personaje {
protected:
    string nombre;
    int vida;
    int ataque;
    int defensa;
    string rol;
    vector<ObjetoMagico*> inventario;  //Vector que almacena los objetos magicos

public:
    Personaje(string nom, int v, int atq, int def, string r);


    string getNombre();
    int getVida();
    int getAtaque();
    int getDefensa();
    string getRol();
    bool estaVivo();

    // Métodos de combate
    void recibirDanio(int cantidad);
    void curar(int cantidad);
    void modificarAtaque(int cantidad);
    void modificarDefensa(int cantidad);

    // Métodos de inventario
    void agregarObjeto(ObjetoMagico* objeto);
    int cantidadObjetos();

    // Mostrar información
    void mostrarEstado();

    virtual void accion(Personaje* objetivo) = 0;
    virtual ~Personaje();
};

#endif