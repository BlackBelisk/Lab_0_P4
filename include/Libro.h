#ifndef _CLASSLIBRO_H_
#define _CLASSLIBRO_H_

#include <iostream>
#include "Objeto.h"
#include "Utils.h"

using namespace std;

class Libro : public Objeto{
    private:
        string autor;
        int cantPaginas;
    public:
        Libro(string nombre, int anioComprado, estado status, string autor1, int cantpag) : Objeto(nombre, anioComprado, status), autor(autor1), cantPaginas(cantpag){}
        //~Libro();
        virtual string toString();

};

#endif