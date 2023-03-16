#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#include "../include/Objeto.h"
#include "../include/Libro.h"
#include "../include/JuegoMesa.h"
#include "../include/DTObjetoRoto.h"
#include "../include/Utils.h"

using namespace std;

namespace vectorObjetoRoto{
    vector<DTObjetoRoto> ObjRotos;

    void agregarRoto(DTObjetoRoto obj){
        ObjRotos.push_back(obj);
    };

    void eliminarRoto(DTObjetoRoto obj){
        int aux = 0;
        int size = ObjRotos.size();
        while (aux < size && ObjRotos[aux] != obj){aux++;}
        if (aux < size){ObjRotos.erase(ObjRotos.begin() + aux);}
    }
}