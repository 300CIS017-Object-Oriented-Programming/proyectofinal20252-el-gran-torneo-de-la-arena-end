#include "Personaje.h"
#include "ObjetoMagico.h"

Personaje::Personaje(string nom, int v, int atq, int def, string r) {
    nombre = nom;
    vida = v;
    ataque = atq;
    defensa = def;
    rol = r;
}


Personaje::~Personaje() {
    for(int i = 0; i < inventario.size(); i++) {
        delete inventario[i];
    }
}

string Personaje::getNombre() { return nombre; }
int Personaje::getVida() { return vida; }
string Personaje::getRol() { return rol; }
bool Personaje::estaVivo() { return vida > 0; }

int Personaje::getAtaque() {
    return ataque;
}

int Personaje::getDefensa() {
    return defensa;
}

void Personaje::recibirDanio(int cantidad) {
    int danioReal = cantidad - defensa;
    if(danioReal < 0) danioReal = 0;
    vida -= danioReal;
    if(vida < 0) vida = 0;
}

void Personaje::curar(int cantidad) {
    vida += cantidad;
}


void Personaje::modificarAtaque(int cantidad) {
    ataque += cantidad;
}

void Personaje::modificarDefensa(int cantidad) {
    defensa += cantidad;
}


void Personaje::agregarObjeto(ObjetoMagico* objeto) {
    if(inventario.size() < 2) {
        inventario.push_back(objeto);
        cout << "  -> " << nombre << " recibio: " << objeto->getNombre() << endl;
    } else {
        cout << "  -> " << nombre << " ya tiene 2 objetos (maximo)" << endl;
        delete objeto;
    }
}

int Personaje::cantidadObjetos() {
    return inventario.size();
}

void Personaje::mostrarEstado() {
    cout << "  - " << nombre << " (" << rol << ") | Vida: " << vida
         << " | Ataque: " << ataque << " | Defensa: " << defensa
         << " | Objetos: " << inventario.size() << endl;  // ← MODIFICAR: Mostrar objetos
}