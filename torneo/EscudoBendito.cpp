#include "EscudoBendito.h"

using namespace std;

EscudoBendito::EscudoBendito() : ObjetoMagico("Escudo Bendito", "Aumenta defensa") {}

void EscudoBendito::aplicarEfecto(Personaje* objetivo) {
    int aumento = 10 + rand() % 11;  // 10 a 20
    objetivo->modificarDefensa(aumento);
    cout << "  -> Aumenta la defensa en " << aumento << " puntos." << endl;
    cout << "  -> Defensa actual: " << objetivo->getDefensa() << endl;
}