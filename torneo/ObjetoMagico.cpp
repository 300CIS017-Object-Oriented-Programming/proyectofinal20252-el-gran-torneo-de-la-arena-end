#include "ObjetoMagico.h"

ObjetoMagico::ObjetoMagico(string nom, string desc) {
    nombre = nom;
    descripcion = desc;
}

ObjetoMagico::~ObjetoMagico() {}

string ObjetoMagico::getNombre() {
    return nombre;
}