#ifndef _CLASSNIÑO_H_
#define _CLASSNIÑO_H_

#include "iostream"
#include "Objeto.h"
using namespace std;

class Niño{
    private:
            string nombre;
            int edad;
            string direccion;
            string telefono;
    public:
            void listarObjetosPrestados();
            void setNiño(string);
            string getNiño();
};


#endif