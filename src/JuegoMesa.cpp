#include <stdio.h>
#include <iostream>
#include <string.h>
#include "../include/JuegoMesa.h"
#include "../include/Objeto.h"

JuegoMesa::JuegoMesa(string nombre, int anio, estado estado, int edad, int jugadores)
{
    this->nombre = nombre;
    this->anioComprado = anio;
    this->status = estado;
    this->edadRecomendada = edad;
    this ->cantJugadores = jugadores;
}