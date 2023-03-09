#ifndef _CLASSOBJETO_H_
#define _CLASSOBJETO_H_

#include "iostream"
#include "Child.h"
using namespace std;

//Clase Virtual Objeto.
class Objeto{
    protected:
        string nombre;
        int añoComprado;
        enum estado {Nuevo, BienConservado, Roto};
        Child prestado;
    public:
          virtual string toString() = 0;
};

#endif