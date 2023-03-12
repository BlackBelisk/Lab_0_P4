#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Child.h"
#include "DTObjetoRoto.h"
#include "JuegoMesa.h"
#include "Libro.h"
#include "Objeto.h"

enum estado {Nuevo = 0, BienConservado, Roto};

string estadoToString(estado c);

#endif