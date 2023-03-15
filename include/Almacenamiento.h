#ifndef ALMACENAMIENTO_H
#define ALMACENAMIENTO_H

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

#include "Objeto.h"
#include "Libro.h"
#include "JuegoMesa.h"
#include "DTObjetoRoto.h"
#include "Utils.h"

using namespace std;
//Estoy pensando en cambiar estos vectores por una <list>, pero depende de que precisemos con lo del main
//También tengo una double linked list pre implementada de ser necesario, pero está más sencillo esto
//Dios se apiade de nosotros

namespace vectorObjeto{
    //Vector de almacenamiento para Objetos
    extern vector<Objeto*> Objetos;
    void crearLibro(string, int, estado, string, int);
    void crearJuegoMesa(string, int, estado, int, int);
    void agregarObjeto(Objeto*);
    void eliminarObjeto(Objeto*);
}

namespace vectorChild{
    //Vector de almacenamiento para personas
   extern vector<Child*> Personas;
    void crearPersona(string, int, string, string);
    void agregarPersona(Child*);
    void eliminarPersona(Child*);
}

namespace vectorObjetoRoto{
    //Vector de almacenamiento de ObjetosRotos
    extern vector<DTObjetoRoto> ObjetosRotos;
    void agregarRoto(DTObjetoRoto);
    void eliminarRoto(DTObjetoRoto);
}



#endif