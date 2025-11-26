#include "VaritaHelada.h"

using namespace std;

VaritaHelada::VaritaHelada() : ObjetoMagico("Varita Helada", "Congela al enemigo") {}

void VaritaHelada::aplicarEfecto(Personaje* objetivo) {
    int reduccion = 5 + rand() % 11;  // 5 a 15
    objetivo->modificarAtaque(-reduccion);
    cout << "  -> " << objetivo->getNombre() << " ha sido CONGELADO!" << endl;
    cout << "  -> Su ataque se reduce en " << reduccion << " puntos." << endl;
    cout << "  -> Ataque actual: " << objetivo->getAtaque() << endl;
}