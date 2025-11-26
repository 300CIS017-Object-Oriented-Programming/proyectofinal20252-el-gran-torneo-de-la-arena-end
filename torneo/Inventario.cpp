#include "InventarioGlobal.h"
#include "PocionVida.h"
#include "AmuletoFuria.h"
#include "EscudoBendito.h"
#include "VaritaHelada.h"
#include "PiesVeloces.h"
#include "PergaminoFuego.h"

Inventario::Inventario() {
    objetos["Pocion"] = 3;
    objetos["Amuleto"] = 2;
    objetos["Escudo"] = 2;
    objetos["Varita"] = 2;
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
    if(objetos[tipo] > 0) {
        objetos[tipo]--;
        cout << "  -> Retirado: " << tipo << endl;
    } else {
        cout << "  -> No hay " << tipo << " disponible" << endl;
    }
}

void Inventario::mostrarInventario() {
    cout << "\n=== Inventario Global del Torneo ===" << endl;
    cout << "  Pocion de Vida: " << objetos["Pocion"] << endl;
    cout << "  Amuleto de Furia: " << objetos["Amuleto"] << endl;
    cout << "  Escudo Bendito: " << objetos["Escudo"] << endl;
    cout << "  Varita Helada: " << objetos["Varita"] << endl;
    cout << "  Pies Veloces: " << objetos["Pies"] << endl;
    cout << "  Pergamino de Fuego: " << objetos["Pergamino"] << endl;

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
    if(tipo == "Pocion") return new PocionVida();
    if(tipo == "Amuleto") return new AmuletoFuria();
    if(tipo == "Escudo") return new EscudoBendito();
    if(tipo == "Varita") return new VaritaHelada();
    if(tipo == "Pies") return new PiesVeloces();
    if(tipo == "Pergamino") return new PergaminoFuego();

    cout << "  -> ERROR: Tipo de objeto desconocido" << endl;
    return nullptr;
}
