#include "Guerrero.h"
#include <iostream>

using namespace std;

Guerrero::Guerrero(string nom)
    : Personaje(nom, 120, 25, 15, "Guerrero"), contadorGolpes(0) {}

void Guerrero::accion(Personaje* objetivo) {
    cout << nombre << " ataca con su espada!" << endl;

    // --- Daño base ---
    int danioBase = ataque;

    contadorGolpes++;
    bool esCritico = (contadorGolpes % 3 == 0);

    // --- Daño final ---
    int danio = danioBase;

    if (esCritico) {
        danio *= 2;
        cout << "  GOLPE CRITICO!" << endl;
    }

    objetivo->recibirDanio(danio);

    cout << "  Danio: " << danio
         << " | Vida de " << objetivo->getNombre()
         << ": " << objetivo->getVida() << endl;
}
