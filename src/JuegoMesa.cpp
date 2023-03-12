#include <stdio.h>
#include <iostream>
#include <string>
#include "../include/JuegoMesa.h"
#include "../include/Objeto.h"

JuegoMesa::JuegoMesa(string nombre, int anio, estado estado, int edad, int jugadores):Objeto(nombre, anio, estado){
    this->edadRecomendada = edad;
    this ->cantJugadores = jugadores;
    
};

string JuegoMesa::toString(){
    string aux = this->nombre + ", " + to_string(this->anioComprado) + ", " + to_string(this->status) + ", " + to_string(this->edadRecomendada) + ", " + to_string(this ->cantJugadores);
    return aux;
}
//hay que revisar si el to_string funciona bien con el enum de estado, si no lo hace hay que buscar una forma de que lo haga o hacerlo a mano
