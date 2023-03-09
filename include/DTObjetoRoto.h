#ifndef _DT_OBJETO_ROTO
#define _DT_OBJETO_ROTO

#include "iostream"
#include "Objeto.h"

using namespace std;
//Data Type objeto Roto
class DTObjetoRoto{
    private:
        string nombreObjeto;
        bool prestado;
        string nombreChild;
    public:
        DTObjetoRoto(string, bool); //Constructor por si no está prestado, inicializar nombreChild con la cadena vacía
        DTObjetoRoto(string, bool, string); //Constructor por si está prestado
        ~DTObjetoRoto();

    friend std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& o);
    /*{
        if(o.prestado){
            os<<o.nombreObjeto<<", prestado SI, "<<o.nombreChild;
        }else{
            os<<o.nombreObjeto<<", prestado NO";
        }
    }*/ //Esto va en el cpp
};

#endif