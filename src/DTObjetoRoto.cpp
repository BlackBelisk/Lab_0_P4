#include <stdio.h>
#include <iostream>
#include <string.h>
#include "../include/Objeto.h"
#include "../include/DTObjetoRoto.h"
using namespace std;

DTObjetoRoto::DTObjetoRoto(string nObjeto, bool r, string nChild){
    this->nombreObjeto = nObjeto;
    this->prestado = r;
    this->nombreChild = nChild;
    }

std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& o) {
    if (o.prestado) {
       return os << o.nombreObjeto << ", prestado: SI, " << o.nombreChild;
    }
    else {
       return os << o.nombreObjeto << ", prestado: NO";
    }
}

//Recordatorio: crear otro .h con las listas que piden, lei la propuesta medio en diagonal pero si no me equivoco serian la lista de objetos, la de personas y la de objetos rotos