#ifndef _DT_OBJETO_ROTO
#define _DT_OBJETO_ROTO

#include <iostream>
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
        DTObjetoRoto(string, bool, string = '\0');
        ~DTObjetoRoto();

    friend std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& o);
};

#endif