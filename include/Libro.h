#ifndef _CLASSLIBRO_H_
#define _CLASSLIBRO_H_

#include <iostream>
#include "Utils.h"
#include "Objeto.h"

using namespace std;

class Libro : public Objeto{
    private:
        string autor;
        int cantPaginas;
    public:
        Libro(string, int, estado, string, int);
        ~Libro();
        virtual string toString();

};

#endif