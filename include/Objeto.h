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
        Child* owner;
        //Constructor de objeto por parametros, al ser una clase abstracta, solo es utilizado para simplificar 
        //la creación de un Libro o un JuegoMesa
        Objeto(string, int, estado);
    public: 
        //Destructor de Objeto
        virtual ~Objeto();

        //Función toString virtual pura, cada clase hija (Libro y JuegoMesa) tendrá una implementación distinta
        virtual string toString() = 0;

        //Presta el objeto a un Child
        virtual void prestarAChild(Child*);

        //Anula el prestamo
        virtual void devuelveChild();
       
        //Retorna el nomnbre del objeto
        virtual string getNombre();

        //Retorna el anio en que fue comprado el objeto
        virtual int getAnio();

        //Retorna el estado del objeto: Nuevo, BienConservado o Roto
        virtual estado getEstado();

        //Retorna un puntero hacía el Child que lo tenga prestado
        //Si no está prestado, retorna nullptr
        virtual Child* getPrestado();
};
#include "Child.h"
#endif