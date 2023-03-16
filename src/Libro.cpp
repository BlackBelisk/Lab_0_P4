#include <iostream>
#include <string>
#include "../include/Objeto.h"
#include "../include/Libro.h"
#include "../include/Utils.h"
using namespace std;

string Libro::toString()
{ // Libro: Nombre, AñoComprado, Estado, Autor, CantPaginas

    string anioComp = to_string(anioComprado);
    string cantPag = to_string(cantPaginas);
    
    return "Libro: " + nombre + ", " + anioComp + ", " + estadoToString(status) + ", " + autor + ", " + cantPag;
   
}
