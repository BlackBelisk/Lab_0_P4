#include "../include/Child.h"
#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;


Prestados::Prestados(){
    obj = nullptr;
    sig = nullptr;
}

Prestados::Prestados(Objeto *o){
    obj = o;
    sig = nullptr;
}

Prestados* Prestados::añadirObj(Objeto *o){
    Prestados *nuevo = new Prestados(o);
    nuevo->sig = this;
    return nuevo;
}

string Prestados::getObj(){
    return obj->toString();
}

Child::Child (string nom, int ed, string dir, string tel){
    nombre = nom;
    edad = ed;
    direccion = dir;
    telefono = tel;
}

Child::~Child(){
    while(prestado != nullptr){
        Prestados *borrar = prestado;
        prestado = prestado->sig;
        delete borrar->obj;
        delete borrar;
    }
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
    Prestados *aux = prestado;
    if (aux->obj != nullptr){
        do{
            prestamos.insert(aux->obj->toString());
            aux = aux->sig;
        }while(aux->sig != nullptr);
    }
    return prestamos;
}

void Child::eliminarPrestamo(Objeto *o){
    Prestados *aux = prestado;
    if(prestado->obj = o){
        delete prestado->obj;
        prestado = prestado->sig;
        delete aux;
    }else{
        while(aux->sig->obj != o){
            aux = aux->sig;
        }
        Prestados *borrar = aux->sig;
        aux->sig = aux->sig->sig;
        delete borrar->obj;
        delete borrar;
    }
}

string Child::getChild(){
    return nombre;
}