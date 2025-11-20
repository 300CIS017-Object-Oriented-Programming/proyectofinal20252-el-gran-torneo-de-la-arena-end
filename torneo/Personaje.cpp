#include "Personaje.h"

Personaje::Personaje(string nom, int v, int atq, int def, string r) {
    nombre = nom;
    vida = v;
    ataque = atq;
    defensa = def;
    rol = r;
}

string Personaje::getNombre() { return nombre; }
int Personaje::getVida() { return vida; }
string Personaje::getRol() { return rol; }
bool Personaje::estaVivo() { return vida > 0; }

void Personaje::recibirDanio(int cantidad) {
    int danioReal = cantidad - defensa;
    if(danioReal < 0) danioReal = 0;
    vida -= danioReal;
    if(vida < 0) vida = 0;
}

void Personaje::curar(int cantidad) {
    vida += cantidad;
}

void Personaje::mostrarEstado() {
    cout << "  - " << nombre << " (" << rol << ") | Vida: " << vida
         << " | Ataque: " << ataque << " | Defensa: " << defensa << endl;
}