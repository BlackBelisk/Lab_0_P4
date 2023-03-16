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
        ~DTObjetoRoto() = default;
        DTObjetoRoto() = default;
        DTObjetoRoto(string, bool, string = "");
        DTObjetoRoto(Objeto*);
        string getNombreRoto();
        bool estaPrestadoRoto();
        string getNombreChild();
        bool operator==(const DTObjetoRoto &obj);
        bool operator!=(const DTObjetoRoto &obj);

    friend std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& o);
};

#endif