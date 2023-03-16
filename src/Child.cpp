#include <stdio.h>
#include <iostream>
#include <set>
#include "../include/Child.h"
#include "../include/DTObjetoRoto.h"
#include "../include/Almacenamiento.h"
using namespace std;


Prestados::Prestados(){
    obj = nullptr;
    sig = nullptr;
}

Prestados::Prestados(Objeto *o){
    obj = o;
    sig = nullptr;
}

Prestados* Prestados::anadirObj(Objeto *o){
    Prestados *nuevo = new Prestados(o);
    nuevo->sig = this;
    return nuevo;
}

string Prestados::getObj(){
    return obj->getNombre();
}

Child::Child (string nom, int ed, string dir, string tel){
    nombre = nom;
    edad = ed;
    direccion = dir;
    telefono = tel;
    prestado = nullptr;
}

Child::~Child(){
    while(prestado != nullptr){
        Prestados *borrar = prestado;
        if (prestado->obj->getEstado() == Roto){
            vectorObjetoRoto::eliminarRoto(DTObjetoRoto (prestado->obj));
            vectorObjetoRoto::agregarRoto(DTObjetoRoto(prestado->obj->getNombre(), false));
        }
        prestado->obj->devuelveChild();
        prestado = prestado->sig;
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
    prestado = prestado->anadirObj(o);
}

set<string> Child:: listarObjetosPrestados(){
    set<string> prestamos;
    Prestados *aux = prestado;
    while(aux != nullptr){
        prestamos.insert(aux->obj->getNombre());
        aux = aux->sig;
    }
    return prestamos;
}

void Child::eliminarPrestamo(Objeto *o){
    if (prestado != nullptr){
    Prestados *aux = prestado;
    if(prestado->obj == o){
        prestado = prestado->sig;
        delete aux;
    }else{
        while(aux->sig->obj != o){
            aux = aux->sig;
        }
        Prestados *borrar = aux->sig;
        aux->sig = aux->sig->sig;
        delete borrar;
    }
    }
}

string Child::getChild(){
    return nombre;
}