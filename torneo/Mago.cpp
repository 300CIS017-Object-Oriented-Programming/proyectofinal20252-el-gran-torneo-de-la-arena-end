#include "Mago.h"

Mago::Mago(string nom) : Personaje(nom, 80, 30, 8, "Mago") {}

void Mago::accion(Personaje* objetivo) {
    cout << nombre << " lanza un hechizo!" << endl;

    int danio = ataque + (rand() % 10);
    objetivo->recibirDanio(danio);

    cout << "  Danio magico: " << danio << " | Vida de " << objetivo->getNombre()
         << ": " << objetivo->getVida() << endl;
}