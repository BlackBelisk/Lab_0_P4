#ifndef _DT_OBJETO_ROTO
#define _DT_OBJETO_ROTO

#include <iostream>
#include <string>
#include "Objeto.h"
#include "Utils.h"

using namespace std;

//Data Type objeto Roto
class DTObjetoRoto{
    private:
        string nombreObjeto;
        bool prestado;
        string nombreChild;
    public:
        //Destructor por default
        ~DTObjetoRoto() = default;

        //Constructor por default
        DTObjetoRoto() = default;

        //Constructor por parametros
        //Recibe (string nombreObj, bool prestado, string nombreChild)
        //Si no está prestado, nombreChild no es necesario y tiene valor por default = ""
        DTObjetoRoto(string, bool, string = "");

        //Constructor por objeto
        //Recibe un Objeto en estado ROTO y copia sus atributos
        DTObjetoRoto(Objeto*);

        //Devuelve el nombre del Objeto 
        string getNombreRoto();

        //Devuelve true si el Objeto Roto está prestado, en otro caso devuelve false
        bool estaPrestadoRoto();

        //Devuelve el nombre del Child al que está prestado
        string getNombreChild();

        //Sobrecarga del operador ==, compara campo a campo los DTObjetoRoto
        //Al ser un Data Type, dos objetos con iguales campos serán los mismos
        //Devuelve true si todos los campos son iguales
        bool operator==(const DTObjetoRoto &obj);

        //Sobrecarga del operador ==, compara campo a campo los DTObjetoRoto
        //Al ser un Data Type, dos objetos con iguales campos serán los mismos
        //Devuelve true si al menos uno de los campos es diferente
        bool operator!=(const DTObjetoRoto &obj);

    //Sobrecarga del operador << para imprimir en pantalla un DTObjetoRoto con la estructura
    // nombreObjeto, Prestado: prestado, nombreChild
    friend std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& o);
};

#endif