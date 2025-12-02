#include "Sanador.h"

using namespace std;

Sanador::Sanador(string nom) : Personaje(nom, 90, 20, 10, "Sanador") {}

void Sanador::accion(Personaje* objetivo) {
    cout << nombre << " cura a " << objetivo->getNombre() << endl;

    int curacion = 20 + rand() % 20;  // Cura entre 20 y 39
    objetivo->curar(curacion);

    cout << "  Recupera " << curacion << " puntos de vida. Vida actual: "
         << objetivo->getVida() << endl;
}
