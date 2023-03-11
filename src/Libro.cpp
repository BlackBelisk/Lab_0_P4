#include <iostream>
#include <string.h>
#include "../include/Libro.h"
#include "../include/Objeto.h"// no se si faltan mas includes
using namespace std;

class Libro : public Objeto
{
private:
    string autor;
    int cantPaginas;

public:
    Libro(string nombre, int anioComprado, estado status, string autor1, int cantpag) : Objeto(nombre, anioComprado, status), autor(autor1), cantPaginas(cantpag){}
    //tal vez hay que modificar la linea anterior debido al constructor de Objeto.
    string toString();
};
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
string Libro::toString()
{ // Libro: Nombre, AñoComprado, Estado, Autor, CantPaginas

    string anioComp = to_string(anioComprado);
    string cantPag = to_string(cantPaginas);

    return nombre + ", " + anioComp + ", " + estadoToString(status) + ", " + autor + ", " + cantPag;
   
}
