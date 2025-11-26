#include "Oponente.h"

using namespace std;

Oponente::Oponente(string nom, int v, int atq, int def, string r)
    : Personaje(nom, v, atq, def, r) {}

void Oponente::accion(Personaje* objetivo) {
    cout << nombre << " (" << rol << ") ataca ferozmente!" << endl;

    int danio = ataque;
    int variacion = rand() % 5;  // 0 a 4 de variación
    danio += variacion;

    objetivo->recibirDanio(danio);

    cout << "  Danio: " << danio << " | Vida de " << objetivo->getNombre()
         << ": " << objetivo->getVida() << endl;
}