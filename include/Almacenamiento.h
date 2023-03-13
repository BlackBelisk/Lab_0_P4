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

namespace vectorObjeto{
    vector<Objeto*> Objetos;
    void crearLibro(string, int, estado, string, int);
    void crearJuegoMesa(string, int, estado, int, int);
    void eliminarObjeto();
}

namespace vectorChild{
    vector<Child*> Personas;
    void agregarPersona(string, int, string, string);
    void eliminarPersona();
}

namespace vectorObjetoRoto{
    vector<DTObjetoRoto> ObjetosRotos;
    void agregarRoto();
}



#endif