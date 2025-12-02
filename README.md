[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Wv2uUvIt)
# proyecto_paradaise
Proyecto curso programación orientada a objetos.
Este proyecto implementa un sistema de combate por turnos entre dos Guilds en C++, utilizando programación orientada a objetos.
El jugador controla una Guild con tres héroes, cada uno con un rol distinto, y antes de pelear puede asignarles objetos mágicos desde un Inventario Global.

Durante el combate, el sistema ejecuta automáticamente los turnos de ataque, aplicando los daños, curaciones o efectos especiales según la clase del personaje y los objetos que posea.

 Funcionamiento General del Programa

El programa se organiza en cuatro partes principales:

1 Personajes

Todos los personajes heredan de la clase base Personaje, que define:

Vida

Ataque

Defensa

Rol

Inventario personal (máximo 2 objetos)

Clases derivadas:

Guerrero → genera golpe crítico cada 3 ataques

Mago → lanza hechizos con daño aleatorio

Sanador → cura a un aliado entre 20 y 39

Oponente → enemigos con variación de daño

Cada uno sobreescribe el método accion().

2️ Objetos Mágicos

Todos heredan de ObjetoMagico y tienen su propio efecto al aplicarse:

PocionVida → Cura entre 20 y 40

AmuletoFuria → (aumenta ataque — según implementación)

EscudoBendito → Aumenta defensa entre 10 y 20

VaritaHelada → Reduce el ataque del enemigo entre 5 y 15

PiesVeloces → Aumenta defensa en +50

PergaminoFuego → Daño mágico entre 20 y 35

Estos efectos modifican las estadísticas del personaje objetivo.

3️ Inventario Global

El inventario se gestiona mediante un unordered_map<string, int>, donde se almacena la cantidad disponible de cada objeto.

Funciones principales:

agregarObjeto()

retirarObjeto()

getStock()

hayObjeto()

mostrarInventario()

crearObjeto() → Devuelve un objeto mágico según su nombre

El inventario inicia así:

Objeto	Cantidad
Pocion	2
Amuleto	1
Escudo	2
Varita	1
Pies	2
Pergamino	1
4️ Guilds

La clase Guild administra:

Nombre del equipo

Vector de personajes

Contador de cuántos siguen vivos

Permite:

Agregar héroes

Ver sus estados

Obtener lista de personajes

Contar los que están vivos

5️ Sistema de Combate – Clase Arena

Arena recibe la Guild del jugador y la Guild enemiga.

iniciarCombate() realiza:

Turno de los héroes

Turno de los enemigos

Verificar derrotados

Repetir hasta que una Guild pierda

Muestra:

Quién gana

Número de turnos totales

 Flujo del Programa (main.cpp)

El main hace lo siguiente:

Crea la Guild del jugador:

Guerrero: Arthos

Mago: Lyra

Sanador: Elara

Crea la Guild enemiga:

Dravos

Selene

Inicializa el inventario global

Muestra un menú con opciones:

Ver héroes

Ver inventario

Asignar objeto

Iniciar combate

Salir

Cuando se asigna un objeto:
Se revisa el stock
Se descuenta del inventario
Se crea el objeto
Se agrega al héroe por nombre
Cuando se inicia el combate:
Se crea una Arena
El combate se ejecuta automáticamente
Se elimina la arena al terminar
Finalmente, el programa libera memoria con delete.
 Estructura Real de Tu Proyecto
Arena.h / Arena.cpp
Guild.h / Guild.cpp
Personaje.h / Personaje.cpp
Guerrero.h / Guerrero.cpp
Mago.h / Mago.cpp
Sanador.h / Sanador.cpp
Oponente.h / Oponente.cpp

ObjetoMagico.h / ObjetoMagico.cpp
PocionVida.h / PocionVida.cpp
AmuletoFuria.h / AmuletoFuria.cpp
EscudoBendito.h / EscudoBendito.cpp
VaritaHelada.h / VaritaHelada.cpp
PiesVeloces.h / PiesVeloces.cpp
PergaminoFuego.h / PergaminoFuego.cpp

InventarioGlobal.h / InventarioGlobal.cpp

main.cpp

Compilación

Usando g++:

g++ *.cpp -o lyrenhold


Ejecutar:

./lyrenhold

 Conclusión

Este proyecto implementa un sistema completo de combate con:
Polimorfismo en ataques y efectos
Herencia en personajes y objetos
Encapsulamiento y modularidad
Manejo de inventarios
Simulación de batalla automática
Cumple con todos los requisitos del diseño:
Guilds, personajes, objetos mágicos, sistema de turnos e interacción mediante menú.