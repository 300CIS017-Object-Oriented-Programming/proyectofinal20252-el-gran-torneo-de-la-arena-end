#include "PocionVida.h"

using namespace std;

PocionVida::PocionVida() : ObjetoMagico("Pocion de Vida", "Restaura salud") {}

void PocionVida::aplicarEfecto(Personaje* objetivo) {
    int curacion = 20 + rand() % 21;  // 20 a 40
    objetivo->curar(curacion);
    cout << "  -> Restaura " << curacion << " puntos de vida." << endl;
    cout << "  -> Vida actual: " << objetivo->getVida() << endl;
}