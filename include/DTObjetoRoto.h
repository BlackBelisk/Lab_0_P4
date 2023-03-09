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
        DTObjetoRoto(string, bool); //Constructor por si no está prestado, inicializar nombreChild con la cadena vacia
        DTObjetoRoto(string ,bool ,string); //Constructor por si e
        ~DTObjetoRoto();
};
ostream &operator<<(ostream &o, const string &s);
#endif