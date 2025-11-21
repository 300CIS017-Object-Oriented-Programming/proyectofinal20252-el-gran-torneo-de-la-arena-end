#include "Mago.h"

using namespace std;

Mago::Mago(string nom) : Personaje(nom, 80, 30, 8, "Mago") {}

void Mago::accion(Personaje* objetivo) {
    cout << nombre << " lanza un hechizo!" << endl;

    int danio = ataque + (rand() % 10);  // Daño entre 30 y 39
    objetivo->recibirDanio(danio);

    cout << "  Danio magico: " << danio << " | Vida de " << objetivo->getNombre()
         << ": " << objetivo->getVida() << endl;
}