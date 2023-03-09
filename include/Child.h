#ifndef _CLASSCHILD_H_
#define _CLASSCHILD_H_

#include <iostream>
//#include "Objeto.h" 
using namespace std;

class objeto; 
//Referencia circular de objeto, se puede cambiar por una referencia circular en Objeto.h
//Depende de la implementación que se le de a la colección de objetos prestados 
class Child{
    private:
        string nombre;
        int edad;
        string direccion;
        string telefono;
        //Declarar e implementar estructura para almacenar Objetos prestados, capaz una lista enlazada porque es divertida (¿?)
    public:
        Child(string, int, string, string);
        ~Child();
        void listarObjetosPrestados();
        void setChild(string);
        string getChild();
};

#include "Objeto.h"
#endif