#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <string>
#include <iostream>
#include "Child.h"
#include "Objeto.h"
using namespace std;

//Convierte un enum estado a String
string estadoToString(estado c);

//Realiza un prestamo
void hacerPrestamo(Child*, Objeto*);

#endif