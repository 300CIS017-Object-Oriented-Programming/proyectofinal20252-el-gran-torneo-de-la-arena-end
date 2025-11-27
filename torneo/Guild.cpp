#include "Guild.h"

Guild::Guild(string nom) {
    nombre = nom;
}

Guild::~Guild() {
    for(int i = 0; i < heroes.size(); i++) {
        delete heroes[i];
    }
}

void Guild::agregarHeroe(Personaje* heroe) {
    heroes.push_back(heroe);
    heroesMap[heroe->getNombre()] = heroe;
    cout << heroe->getNombre() << " se unio a " << nombre << endl;
}

void Guild::mostrarHeroes() {
    cout << "\n=== " << nombre << " ===" << endl;
    for(int i = 0; i < heroes.size(); i++) {
        heroes[i]->mostrarEstado();
    }
}

vector<Personaje*> Guild::getHeroes() {
    return heroes;
}

int Guild::cantidadVivos() {
    int count = 0;
    for(int i = 0; i < heroes.size(); i++) {
        if(heroes[i]->estaVivo()) count++;
    }
    return count;
}