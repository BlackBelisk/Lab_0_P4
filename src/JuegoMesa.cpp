#include <stdio.h>
#include <iostream>
#include <string>
#include "../include/Objeto.h"
#include "../include/JuegoMesa.h"
#include "../include/Utils.h"

JuegoMesa::JuegoMesa(string nombre, int anio, estado estado, int edad, int jugadores):Objeto(nombre, anio, estado){
    this->edadRecomendada = edad;
    this ->cantJugadores = jugadores;
    
};

string JuegoMesa::toString(){
    string aux = "Juego: " + this->nombre + ", " + to_string(this->anioComprado) + ", " + estadoToString(this->status) + ", " + to_string(this->edadRecomendada) + ", " + to_string(this ->cantJugadores);
    return aux;
}
