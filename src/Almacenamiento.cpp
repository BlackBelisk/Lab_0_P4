#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

#include "../include/Objeto.h"
#include "../include/Libro.h"
#include "../include/JuegoMesa.h"
#include "../include/DTObjetoRoto.h"
#include "../include/Utils.h"

using namespace std;

namespace vectorObjeto{
    vector<Objeto*> Objetos;

    void crearLibro(string nombreLibro, int anio, estado status, string autor, int cantPag){
        Objetos.push_back(new Libro(nombreLibro, anio, status, autor,cantPag));
    };

    void crearJuegoMesa(string nombreJuego, int anio, estado status, int edad, int cantJug){
        Objetos.push_back(new JuegoMesa(nombreJuego, anio, status, edad, cantJug));
    }

    void agregarObjeto(Objeto* c){
        Objetos.push_back(c);
    }

    void eliminarObjeto();
}

namespace vectorChild{
    vector<Child*> Personas;

    void crearPersona(string nombre, int edad, string direccion, string telefono){
        Personas.push_back(new Child(nombre, edad, direccion, telefono));
    }

    void agregarPersona(Child* c){
        Personas.push_back(c);
    }

    void eliminarPersona();
}

namespace vectorObjetoRoto{
    vector<DTObjetoRoto> ObjetosRotos;
    void agregarRoto();
}