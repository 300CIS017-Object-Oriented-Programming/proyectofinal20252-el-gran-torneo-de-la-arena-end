#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "ObjetoMagico.h"
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class Inventario {
private:
    unordered_map<string, int> objetos;  // Almacena tipo y cantidad
    
public:
    Inventario();
    
    void agregarObjeto(string tipo, int cantidad);
    bool hayObjeto(string tipo);
    void retirarObjeto(string tipo);
    void mostrarInventario();
    int getStock(string tipo);
    ObjetoMagico* crearObjeto(string tipo);
};

#endif