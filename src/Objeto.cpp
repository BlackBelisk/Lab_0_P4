#include <iostream>
#include <string>
#include "../include/Objeto.h"
using namespace std;

Objeto::Objeto(string name, int anio, estado status1){
    this->nombre = name;
    this->anioComprado = anio;
    this->status = status1;
}

Objeto::~Objeto(){
    this->prestado->eliminarPrestamo(this);
}

void Objeto::prestarAChild(Child* c){
    this->prestado = c;
}

void Objeto::devuelveChild(){
    this->prestado->eliminarPrestamo(this);
    this->prestado = nullptr;
}