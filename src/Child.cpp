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
    prestado = prestado->añadirObj(o);
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
        delete prestado->obj;
        prestado = prestado->sig;
        delete aux;
    }else{
        cout << aux->obj->getNombre()<<endl;
        cout << o->getNombre();
        while(aux->sig->obj != o){
            aux = aux->sig;
        }
        Prestados *borrar = aux->sig;
        aux->sig = aux->sig->sig;
        delete borrar->obj;
        delete borrar;
    }
    }
}

string Child::getChild(){
    return nombre;
}