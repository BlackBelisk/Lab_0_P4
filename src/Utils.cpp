#include <stdio.h>
#include <iostream>
#include <string>
#include "../include/Utils.h"
#include "../include/Child.h"
#include "../include/Objeto.h"

using namespace std;


string estadoToString(estado c) 
{
    switch (c)
    {
    case Nuevo:
        return "Nuevo";
        break;
    case BienConservado:
        return "BienConservado";
        break;
    case Roto:
        return "Roto";
        break;
    }
}

void hacerPrestamo(Child* c, Objeto* o){
    c->nuevoPrestamo(o);
    o->prestarAChild(c);
}
