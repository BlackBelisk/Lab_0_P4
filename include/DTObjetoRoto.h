#ifndef _DT_OBJETO_ROTO
#define _DT_OBJETO_ROTO

#include <iostream>
#include <string>
#include "Utils.h"
#include "Objeto.h"

using namespace std;
//Data Type objeto Roto
class DTObjetoRoto{
    private:
        string nombreObjeto;
        bool prestado;
        string nombreChild;
    public:
        ~DTObjetoRoto();
        DTObjetoRoto(string, bool, string = "");
        string getNombreRoto();
        bool estaPrestadoRoto();
        string getNombreChild();
        bool operator==(const DTObjetoRoto &obj);
        bool operator!=(const DTObjetoRoto &obj);

    friend std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& o);
};

#endif