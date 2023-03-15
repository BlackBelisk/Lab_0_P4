#include <stdio.h>
#include <iostream>
#include <string>
#include "../include/Utils.h"
#include "../include/Child.h"
#include "../include/Objeto.h"

using namespace std;

void hacerPrestamo(Child* c, Objeto* o){
    c->nuevoPrestamo(o);
    o->prestarAChild(c);
}

void devolverPrestamo(Child* c, Objeto* o){
    c->eliminarPrestamo(o);
    o->devuelveChild();
}