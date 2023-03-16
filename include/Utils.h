#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <string>
#include <iostream>
#include "Child.h"
#include "Objeto.h"
using namespace std;

//Realiza un prestamo
void hacerPrestamo(Child*, Objeto*);

//Deshace un prestamo
void devolverPrestamo(Child*, Objeto*);
#endif