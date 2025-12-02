cmake_minimum_required(VERSION 4.0)
project(torneo)

set(CMAKE_CXX_STANDARD 20)

add_executable(torneo main.cpp
        Personaje.cpp
        Personaje.h
        Guerrero.cpp
        Guerrero.h
        Mago.cpp
        Mago.h
        Sanador.cpp
        Sanador.h
        Oponente.cpp
        Oponente.h
        Guild.cpp
        Guild.h
        Arena.cpp
        Arena.h)
