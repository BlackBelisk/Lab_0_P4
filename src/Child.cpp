#include "../include/Child.h"
#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;

Child::Child (string nom, int ed, string dir, string tel){
    nombre = nom;
    edad = ed;
    direccion = dir;
    telefono = tel;
}

Child::~Child(){
    
}

Child::Child(string nom, int ed, string dir, string tel, Objeto* obj){
    nombre = nom;
    edad = ed;
    direccion = dir;
    telefono = tel;
    prestado = new Prestados(obj);
}

void Child:: nuevoPrestamo(Objeto *o){
    prestado->añadirObj(o);
}

set<string> Child:: listarObjetosPrestados(){
    set<string> prestamos;
    if (prestado->obj != nullptr){
        do{
            prestamos.insert(prestado->obj->toString());
            prestado = prestado->sig;
        }while(prestado->sig != nullptr);
    }
}

string Child::getChild(){
    return nombre;
}