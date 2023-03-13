#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

enum estado {Nuevo = 0, BienConservado, Roto};
string estadoToString(estado c);

#endif