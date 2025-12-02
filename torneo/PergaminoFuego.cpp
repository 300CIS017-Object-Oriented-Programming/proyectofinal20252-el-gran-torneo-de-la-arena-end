#include "PergaminoFuego.h"

using namespace std;

PergaminoFuego::PergaminoFuego() : ObjetoMagico("Pergamino de Fuego", "Causa danio magico") {}

void PergaminoFuego::aplicarEfecto(Personaje* objetivo) {
    int danio = 20 + rand() % 16;  // 20 a 35
    objetivo->recibirDanio(danio);
    cout << "  -> EXPLOSION DE FUEGO!" << endl;
    cout << "  -> " << objetivo->getNombre() << " recibe " << danio << " puntos de danio magico." << endl;
    cout << "  -> Vida restante: " << objetivo->getVida() << endl;
}