#include <stdio.h>
#include <iostream>
#include <string>
#include "../include/Utils.h"

using namespace std;

string estadoToString(estado c) //funcion para que el enum se pase a string. necesario para funcion toString().
{
    switch (c)
    {
    case Nuevo:
        return "Nuevo";
        // break;
    case BienConservado:
        return "BienConservado";
        // break;
    case Roto:
        return "Roto";
        // break;
    }
}