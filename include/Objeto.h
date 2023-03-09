#ifndef _CLASSOBJETO_H_
#define _CLASSOBJETO_H_

#include <iostream>
#include "Child.h"
using namespace std;

//Clase Virtual Objeto.
class Objeto{
    protected:
        string nombre;
        int anioComprado;
        enum estado {Nuevo, BienConservado, Roto};
        estado status;
        Child prestado;
    public:
          virtual string toString() = 0;
};

#endif