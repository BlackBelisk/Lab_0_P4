#ifndef _CLASSOBJETO_H_
#define _CLASSOBJETO_H_

#include "iostream"
#include "Niño.h"
using namespace std;

class Objeto{
    protected:
            string nombre;
            int añoComprado;
            enum estado {Nuevo, BienConservado, Roto};
    public:
            string toString();
};

#endif