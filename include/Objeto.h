#ifndef _CLASSOBJETO_H_
#define _CLASSOBJETO_H_

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Child.h"

using namespace std;
enum estado {Nuevo = 0, BienConservado, Roto};

//Clase Virtual Objeto.
class Objeto{
    protected:
        string nombre;
        int anioComprado;
        estado status;
        Child* prestado;
    public:
        virtual string toString() = 0;
};

#endif