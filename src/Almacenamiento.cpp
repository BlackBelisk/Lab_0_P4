#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

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

    void eliminarObjeto(Objeto* o){
      auto iter = find(Objetos.begin(), Objetos.end(), o);
      if (iter != Objetos.end())
      {
        Objetos.erase(iter);
        delete o;
      }
    }
}

namespace vectorChild{
    vector<Child*> Personas;

    void crearPersona(string nombre, int edad, string direccion, string telefono){
        Personas.push_back(new Child(nombre, edad, direccion, telefono));
    }

    void agregarPersona(Child* c){
        Personas.push_back(c);
    }

    void eliminarPersona(Child* c){
      auto iter = find(Personas.begin(), Personas.end(), c);
      if (iter != Personas.end())
      {
        Personas.erase(iter);
        delete c;
      }
    }
}

namespace vectorObjetoRoto{
    vector<DTObjetoRoto> ObjetosRotos;

    void agregarRoto(DTObjetoRoto obj){
        ObjetosRotos.push_back(obj);
    };

    void eliminarRoto(DTObjetoRoto obj){
        int aux;
        while (aux < ObjetosRotos.size() && ObjetosRotos[aux] != obj)
        {
            aux++;
        }
        if (aux < ObjetosRotos.size()+1)
        {
           ObjetosRotos.erase(ObjetosRotos.begin() + aux);
        }
        
    }
}