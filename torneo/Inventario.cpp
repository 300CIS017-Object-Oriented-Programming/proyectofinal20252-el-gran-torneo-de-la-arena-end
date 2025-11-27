#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "ObjetoMagico.h"
#include "PocionVida.h"
#include "AmuletoFuria.h"
#include "EscudoBendito.h"
#include "VaritaHelada.h"
#include "PiesVeloces.h"
#include "PergaminoFuego.h"

#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class Inventario {
private:
    unordered_map<string, int> objetos;

public:
    Inventario() {
        objetos = {
            {"Pocion", 2},
            {"Amuleto", 1},
            {"Escudo", 2},
            {"Varita", 1},
            {"Pies", 2},
            {"Pergamino", 1}
        };

        cout << "\n=== Inventario Global Inicializado ===\n";
    }

    void agregarObjeto(string tipo, int cantidad) {
        objetos[tipo] += cantidad;
        cout << "  -> Agregado: " << cantidad << "x " << tipo << endl;
    }

    bool hayObjeto(string tipo) {
        return objetos[tipo] > 0;
    }

    void retirarObjeto(string tipo) {
        if (hayObjeto(tipo)) {
            objetos[tipo]--;
            cout << "  -> Retirado: " << tipo << endl;
        } else {
            cout << "  -> No hay " << tipo << " disponible\n";
        }
    }

    void mostrarInventario() {
        cout << "\n=== Inventario Global del Torneo ===\n";

        for (auto& [nombre, cantidad] : objetos) {
            cout << "  " << nombre << ": " << cantidad << endl;
        }

        int total = 0;
        for (auto& o : objetos) total += o.second;

        cout << "\n  Total de objetos: " << total << endl;
    }

    int getStock(string tipo) {
        return objetos[tipo];
    }

    ObjetoMagico* crearObjeto(string tipo) {
        if (tipo == "Pocion")     return new PocionVida();
        if (tipo == "Amuleto")    return new AmuletoFuria();
        if (tipo == "Escudo")     return new EscudoBendito();
        if (tipo == "Varita")     return new VaritaHelada();
        if (tipo == "Pies")       return new PiesVeloces();
        if (tipo == "Pergamino")  return new PergaminoFuego();

        cout << "  -> ERROR: Tipo de objeto desconocido\n";
        return nullptr;
    }
};

#endif

