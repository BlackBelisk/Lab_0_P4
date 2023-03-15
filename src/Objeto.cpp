#include <iostream>
#include <string>
#include "../include/Objeto.h"
#include "../include/DTObjetoRoto.h"
#include "../include/Almacenamiento.h"

using namespace std;

Objeto::Objeto(string name, int anio, estado status1){
    this->nombre = name;
    this->anioComprado = anio;
    this->status = status1;
    this->prestado = nullptr;
}

Objeto::~Objeto(){
    this->prestado->eliminarPrestamo(this);
    vectorObjetoRoto::eliminarRoto(DTObjetoRoto(this));
}

void Objeto::prestarAChild(Child* c){
    this->prestado = c;
}

void Objeto::devuelveChild(){
    this->prestado->eliminarPrestamo(this);
    this->prestado = nullptr;
}

string Objeto::getNombre(){
    return nombre;
}

int Objeto::getAnio(){
    return anioComprado;
}

estado Objeto::getEstado(){
    return status;
}

Child* Objeto::getPrestado(){
    return prestado;
}

string estadoToString(estado c) 
{
    switch (c)
    {
    case Nuevo:
        return "Nuevo";
        break;
    case BienConservado:
        return "BienConservado";
        break;
    case Roto:
        return "Roto";
        break;
    default: return "\0";
    }
}