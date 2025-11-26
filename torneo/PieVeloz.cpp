#include "PiesVeloces.h"

using namespace std;

PiesVeloces::PiesVeloces() : ObjetoMagico("Pies Veloces", "Aumenta velocidad") {}

void PiesVeloces::aplicarEfecto(Personaje* objetivo) {
    objetivo->modificarDefensa(50);
    cout << "  -> " << objetivo->getNombre() << " se mueve a VELOCIDAD INCREIBLE!" << endl;
    cout << "  -> Esquivara el proximo ataque! (Defensa +50)" << endl;
    cout << "  -> Defensa actual: " << objetivo->getDefensa() << endl;
}