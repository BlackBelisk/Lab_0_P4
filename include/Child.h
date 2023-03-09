#ifndef _CLASSCHILD_H_
#define _CLASSCHILD_H_

#include <iostream>
#include <set>
//#include "Objeto.h" 
using namespace std;
class Objeto; 
//Referencia circular de objeto, se puede cambiar por una referencia circular en Objeto.h
//Depende de la implementación que se le de a la colección de objetos prestados 
class Prestados{
    public:
            Objeto *obj;
            Prestados *sig;
            Prestados(){
                obj = nullptr;
                sig = nullptr;
            }
            Prestados(Objeto *o){
                obj = o;
                sig = nullptr;
            }
            Prestados *añadirObj(Objeto *o){
                Prestados *nuevo = new Prestados(o);
                nuevo->sig = this;
                return nuevo;
            }
            string getObj(){
                return obj->toString();
            }
};

class Child{
    private:
        string nombre;
        int edad;
        string direccion;
        string telefono;
        Prestados *prestado;
        //Declarar e implementar estructura para almacenar Objetos prestados, capaz una lista enlazada porque es divertida (¿?)
    public:
        Child(string, int, string, string);
        ~Child();
        Child(string, int, string, string, Objeto*);
        void nuevoPrestamo(Objeto*);
        void eliminarPrestamo(Objeto*);
        set<string> listarObjetosPrestados();
        string getChild();
};


#include "Objeto.h"
#endif