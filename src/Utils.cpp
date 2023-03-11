#include <stdio.h>
#include <iostream>
#include <string.h>
#include "../include/Utils.h"

using namespace std;

string estadoToString(estado c) //funcion para que el enum se pase a string. necesario para funcion toString().
{
    switch (c)
    {
    case Nuevo:
        return "Nuevo";
    case BienConservado:
        return "BienConservado";
    case Roto:
        return "Roto";
    }
}