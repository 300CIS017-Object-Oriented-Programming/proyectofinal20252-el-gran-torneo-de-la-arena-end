#ifndef GUILD_H
#define GUILD_H

#include "Personaje.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class Guild {
private:
    string nombre;
    vector<Personaje*> heroes;
    unordered_map<string, Personaje*> heroesMap;

public:
    Guild(string nom);
    ~Guild();

    void agregarHeroe(Personaje* heroe);
    void mostrarHeroes();
    vector<Personaje*> getHeroes();
    int cantidadVivos();
};

#endif