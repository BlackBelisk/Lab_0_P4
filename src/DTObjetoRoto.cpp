#include <stdio.h>
#include <iostream>
#include <string>
#include "../include/Objeto.h"
#include "../include/DTObjetoRoto.h"
using namespace std;

DTObjetoRoto::DTObjetoRoto(string nObjeto, bool r, string nChild){
    this->nombreObjeto = nObjeto;
    this->prestado = r;
    this->nombreChild = nChild;
    }
string DTObjetoRoto::getNombreRoto(){
    return this->nombreObjeto;
};

bool DTObjetoRoto::estaPrestadoRoto(){
    return this->prestado;
}

string DTObjetoRoto::getNombreChild(){
    return this->nombreChild;
}

bool DTObjetoRoto::operator==(const DTObjetoRoto &obj){
    return (this->nombreObjeto==obj.nombreObjeto);
};

bool DTObjetoRoto::operator!=(const DTObjetoRoto &obj){
    return (this->nombreObjeto!=obj.nombreObjeto);
};

std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& o) {
    if (o.prestado) {
       return os << o.nombreObjeto << ", prestado: SI, " << o.nombreChild;
    }
    else {
       return os << o.nombreObjeto << ", prestado: NO";
    }
}

//Recordatorio: crear otro .h con las listas que piden, lei la propuesta medio en diagonal pero si no me equivoco serian la lista de objetos, la de personas y la de objetos rotos