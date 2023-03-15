#ifndef _CLASSOBJETO_H_
#define _CLASSOBJETO_H_

#include <stdio.h>
#include <string>
#include <iostream>
#include "Utils.h"


using namespace std;
class Child;
//Tipo enum estado, indica el estado de un Objeto
enum estado {Nuevo = 0, BienConservado, Roto};
//Convierte un enum estado a String
string estadoToString(estado c);
//Clase Virtual Objeto.
class Objeto{
    protected:
        string nombre;
        int anioComprado;
        estado status;
        Child* prestado;
        Objeto(string, int, estado);
    public: 
        ~Objeto();

        virtual string toString() = 0;

        virtual void prestarAChild(Child*);
        //Función para anular prestamo
        virtual void devuelveChild();
       
       //Getters
        virtual string getNombre();
        virtual int getAnio();
        virtual estado getEstado();
        virtual Child* getPrestado();
};
#include "Child.h"
#endif