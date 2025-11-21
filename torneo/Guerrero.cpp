#include "Guerrero.h"

Guerrero::Guerrero(string nom) : Personaje(nom, 120, 25, 15, "Guerrero") {
    contadorGolpes = 0;  //contador
}

void Guerrero::accion(Personaje* objetivo) {
    cout << nombre << " ataca con su espada!" << endl;

    int danio = ataque;
    contadorGolpes++;

    // Critico cada 3 golpes
    if(contadorGolpes % 3 == 0) {
        danio = danio * 2;
        cout << "  GOLPE CRITICO!" << endl;
    }

    objetivo->recibirDanio(danio);
    cout << "  Danio: " << danio << " | Vida de " << objetivo->getNombre()
         << ": " << objetivo->getVida() << endl;
}