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

namespace vectorObjetoRoto{
    //Vector de almacenamiento de ObjetosRotos
    extern vector<DTObjetoRoto> ObjRotos;
    void agregarRoto(DTObjetoRoto);
    void eliminarRoto(DTObjetoRoto);
}



#endif