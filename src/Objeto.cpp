//Creo que no se necesita un Objeto.cpp ahora que lo pienso bien :XD:
#include "../include/Objeto.h"

Objeto::Objeto(string name, int anio, estado status1){
    this->nombre = name;
    this->anioComprado = anio;
    this->status = status1;
}