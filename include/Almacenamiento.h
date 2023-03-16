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
    //Vector de almacenamiento de ObjetosRotos, variable global
    extern vector<DTObjetoRoto> ObjRotos;

    //Agrega un DTObjetoRoto al vector ObjRotos
    void agregarRoto(DTObjetoRoto);

    //Elimina un DTObjetoRoto solo si lo encuentra en ObjRotos
    void eliminarRoto(DTObjetoRoto);
}



#endif