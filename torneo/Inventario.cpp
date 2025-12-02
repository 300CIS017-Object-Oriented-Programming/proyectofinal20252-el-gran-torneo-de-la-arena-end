#include "Inventario.h"

Inventario::Inventario() {
    // Stock inicial
    objetos["Pocion"] = 2;
    objetos["Amuleto"] = 1;
    objetos["Escudo"] = 2;
    objetos["Varita"] = 1;
    objetos["Pies"] = 2;
    objetos["Pergamino"] = 1;

    cout << "\n=== Inventario Global Inicializado ===" << endl;
}

void Inventario::agregarObjeto(string tipo, int cantidad) {
    objetos[tipo] += cantidad;
    cout << "  -> Agregado: " << cantidad << "x " << tipo << endl;
}

bool Inventario::hayObjeto(string tipo) {
    return objetos[tipo] > 0;
}

void Inventario::retirarObjeto(string tipo) {
    if (objetos[tipo] > 0) {
        objetos[tipo]--;
        cout << "  -> Retirado: " << tipo << endl;
    } else {
        cout << "  -> No hay " << tipo << " disponible" << endl;
    }
}

void Inventario::mostrarInventario() {
    cout << "\n=== Inventario Global del Torneo ===" << endl;

    for (auto& par : objetos) {
        cout << "  " << par.first << ": " << par.second << endl;
    }

    int total = 0;
    for (auto& par : objetos) {
        total += par.second;
    }

    cout << "\n  Total de objetos: " << total << endl;
}

int Inventario::getStock(string tipo) {
    return objetos[tipo];
}

ObjetoMagico* Inventario::crearObjeto(string tipo) {
    if (tipo == "Pocion") return new PocionVida();
    if (tipo == "Amuleto") return new AmuletoFuria();
    if (tipo == "Escudo") return new EscudoBendito();
    if (tipo == "Varita") return new VaritaHelada();
    if (tipo == "Pies") return new PiesVeloces();
    if (tipo == "Pergamino") return new PergaminoFuego();

    cout << "  -> ERROR: Tipo de objeto desconocido" << endl;
    return nullptr;
}
