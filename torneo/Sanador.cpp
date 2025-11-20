#include "Sanador.h"

Sanador::Sanador(string nom) : Personaje(nom, 90, 10, 10, "Sanador") {}

void Sanador::accion(Personaje* objetivo) {
    cout << nombre << " cura a " << objetivo->getNombre() << endl;

    int curacion = 20 + rand() % 20;
    objetivo->curar(curacion);

    cout << "  Recupera " << curacion << " puntos de vida. Vida actual: "
         << objetivo->getVida() << endl;
}