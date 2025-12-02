#include "Personaje.h"

// Constructor
Personaje::Personaje(string nom, int v, int atq, int def, string r) {
    nombre = nom;
    vida = v;
    ataque = atq;
    defensa = def;
    rol = r;
}

// Getters
string Personaje::getNombre() { return nombre; }
int Personaje::getVida() { return vida; }
int Personaje::getAtaque() { return ataque; }
int Personaje::getDefensa() { return defensa; }
string Personaje::getRol() { return rol; }

// Saber si está vivo
bool Personaje::estaVivo() {
    return vida > 0;
}

// Recibir daño
void Personaje::recibirDanio(int cantidad) {
    int danioReal = cantidad - defensa;
    if (danioReal < 0) danioReal = 0; // para que el daño no sea negativo
    vida -= danioReal;
    if (vida < 0) vida = 0;
}

// Curar vida
void Personaje::curar(int cantidad) {
    vida += cantidad;
}

// Mostrar información
void Personaje::mostrarEstado() {
    cout << "Nombre: " << nombre
         << " | Rol: " << rol
         << " | Vida: " << vida
         << " | Ataque: " << ataque
         << " | Defensa: " << defensa
         << endl;
}
