#ifndef _CLASSOBJETO_H_
#define _CLASSOBJETO_H_

#include <stdio.h>
#include <string>
#include <iostream>
#include "Utils.h"
#include "Child.h"

using namespace std;

//Clase Virtual Objeto.
class Objeto{
    protected:
        string nombre;
        int anioComprado;
        estado status;
        Child* prestado;
        Objeto(string, int, estado);
    public: 

        virtual string toString() = 0;
};

#endif