#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Guild.h"
#include "Inventario.h"
#include "Arena.h"
#include "Guerrero.h"
#include "Mago.h"
#include "Sanador.h"
#include "Oponente.h"

using namespace std;

int main() {
    srand(time(0));

    cout << "=== PROYECTO LYRENHOLD ===" << endl;

    // Crear guild del jugador
    Guild* guildJugador = new Guild("Los Valientes");
    guildJugador->agregarHeroe(new Guerrero("Arthos"));
    guildJugador->agregarHeroe(new Mago("Lyra"));
    guildJugador->agregarHeroe(new Sanador("Elara"));

    // Guild enemiga
    Guild* guildEnemiga = new Guild("Sombras del Norte");
    guildEnemiga->agregarHeroe(new Oponente("Dravos", 100, 20, 10, "Guerrero"));
    guildEnemiga->agregarHeroe(new Oponente("Selene", 85, 25, 8, "Maga"));

    // Inventario Global
    Inventario* inventario = new Inventario();

    int opcion;
    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Ver Heroes" << endl;
        cout << "2. Ver Inventario" << endl;
        cout << "3. Asignar Objeto" << endl;
        cout << "4. Iniciar Combate" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            guildJugador->mostrarHeroes();
        }
        else if (opcion == 2) {
            inventario->mostrarInventario();
        }
        else if (opcion == 3) {
            guildJugador->mostrarHeroes();
            inventario->mostrarInventario();

            string nombreHeroe, tipoObjeto;
            cout << "Nombre del heroe: ";
            cin >> nombreHeroe;
            cout << "Tipo de objeto: ";
            cin >> tipoObjeto;

            if (inventario->hayObjeto(tipoObjeto)) {
                inventario->retirarObjeto(tipoObjeto);
                ObjetoMagico* obj = inventario->crearObjeto(tipoObjeto);

                vector<Personaje*> heroes = guildJugador->getHeroes();
                for (int i = 0; i < heroes.size(); i++) {
                    if (heroes[i]->getNombre() == nombreHeroe) {
                        heroes[i]->agregarObjeto(obj);
                        break;
                    }
                }
            }
            else {
                cout << "No hay existencias de ese objeto." << endl;
            }
        }
        else if (opcion == 4) {
            Arena* arena = new Arena(guildJugador, guildEnemigo);
            arena->iniciarCombate();
            delete arena;
        }

    } while (opcion != 5);

    cout << "Gracias por jugar!" << endl;

    delete guildJugador;
    delete guildEnemiga;
    delete inventario;

    return 0;
}

    delete guildJugador;
    delete guildEnemiga;
    delete inventario;

    return 0;
}
