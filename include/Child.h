#ifndef _CLASSCHILD_H_
#define _CLASSCHILD_H_

#include <iostream>
#include <set>
#include "Utils.h"

using namespace std;
class Objeto; 
//Referencia circular de objeto, se puede cambiar por una referencia circular en Objeto.h
//Depende de la implementación que se le de a la colección de objetos prestados 
class Prestados{
    public:
            Objeto *obj;
            Prestados *sig;
            Prestados();
            Prestados(Objeto *o);
            Prestados* agregarObj(Objeto *o);
            string getObj();
};

class Child{
    private:
        string nombre;
        int edad;
        string direccion;
        string telefono;
        Prestados *prestado;
    public:
        //Constructor de un elemento de clase Child
        Child(string, int, string, string);

        //Elimina un elemento de tipo Child y toda la memoria asociada a sus links, así como actualizar los objetos que tenía prestados
        ~Child();

        //Crea un nuevo préstamo para Child
        void nuevoPrestamo(Objeto*);

        //Elimina un préstamo para Child
        void eliminarPrestamo(Objeto*);

        //Crea un set con los objetos que Child tiene prestados actualmente
        set<string> listarObjetosPrestados();

        //Retorna el nombre del Child
        string getChild();
};


#include "Objeto.h"
#endif