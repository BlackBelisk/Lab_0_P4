#ifndef _CLASSJUEGOMESA_H_
#define _CLASSJUEGOMESA_H_

#include <iostream>
#include "Objeto.h"
#include "Utils.h"
using namespace std;

class JuegoMesa : public Objeto{
    private:
        int edadRecomendada;
        int cantJugadores;
    public:
        JuegoMesa(string, int, estado, int, int);
        //~JuegoMesa();
        virtual string toString();
};

#endif