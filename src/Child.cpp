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
    Prestados *aux = prestado;
    if (aux->obj != nullptr){
        do{
            prestamos.insert(aux->obj->toString());
            aux = aux->sig;
        }while(aux->sig != nullptr);
    }
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