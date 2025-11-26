#include "AmuletoFuria.h"

using namespace std;

AmuletoFuria::AmuletoFuria() : ObjetoMagico("Amuleto de Furia", "Aumenta ataque") {}

void AmuletoFuria::aplicarEfecto(Personaje* objetivo) {
    int aumento = 5 + rand() % 6;  // 5 a 10
    objetivo->modificarAtaque(aumento);
    cout << "  -> Aumenta el ataque en " << aumento << " puntos." << endl;
    cout << "  -> Ataque actual: " << objetivo->getAtaque() << endl;
}