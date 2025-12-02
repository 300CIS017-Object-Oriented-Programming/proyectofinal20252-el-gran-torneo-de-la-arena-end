#include "Arena.h"

Arena::Arena(Guild* jugador, Guild* enemigo) {
    guildJugador = jugador;
    guildEnemigo = enemigo;
    turnoActual = 0;
}

void Arena::iniciarCombate() {
    cout << "\n=== COMIENZA EL COMBATE ===" << endl;

    vector<Personaje*> heroes = guildJugador->getHeroes();
    vector<Personaje*> enemigos = guildEnemigo->getHeroes();

    while(guildJugador->cantidadVivos() > 0 && guildEnemigo->cantidadVivos() > 0) {
        turnoActual++;
        cout << "\n--- Turno " << turnoActual << " ---" << endl;

        // Turno heroes
        for(int i = 0; i < heroes.size(); i++) {
            if(heroes[i]->estaVivo()) {
                Personaje* objetivo = nullptr;

                // Buscar enemigo vivo
                for(int j = 0; j < enemigos.size(); j++) {
                    if(enemigos[j]->estaVivo()) {
                        objetivo = enemigos[j];
                        break;
                    }
                }

                if(objetivo) {
                    heroes[i]->accion(objetivo);
                    if(!objetivo->estaVivo()) {
                        cout << objetivo->getNombre() << " fue derrotado!" << endl;
                    }
                }
            }
        }

        if(guildEnemigo->cantidadVivos() == 0) break;

        // Turno enemigos
        for(int i = 0; i < enemigos.size(); i++) {
            if(enemigos[i]->estaVivo()) {
                Personaje* objetivo = nullptr;

                // Buscar heroe vivo
                for(int j = 0; j < heroes.size(); j++) {
                    if(heroes[j]->estaVivo()) {
                        objetivo = heroes[j];
                        break;
                    }
                }

                if(objetivo) {
                    enemigos[i]->accion(objetivo);
                    if(!objetivo->estaVivo()) {
                        cout << objetivo->getNombre() << " fue derrotado!" << endl;
                    }
                }
            }
        }
    }

    // Mostrar ganador
    cout << "\n=== FIN DEL COMBATE ===" << endl;
    if(guildJugador->cantidadVivos() > 0) {
        cout << "GANADOR: Guild del Jugador" << endl;
    } else {
        cout << "GANADOR: Guild Enemiga" << endl;
    }
    cout << "Turnos: " << turnoActual << endl;
}