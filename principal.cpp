#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include "include/Child.h"
#include "include/Objeto.h"
#include "include/DTObjetoRoto.h"
#include "include/JuegoMesa.h"
#include "include/Libro.h"
#include "include/Utils.h"
#include "include/Almacenamiento.h"

using namespace std;
using namespace vectorObjetoRoto;
int main(){

    vector<Objeto*> SetObjetos;

    /*parte a*/  //Ingresa Libros
    Libro *libro1 = new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688);
    SetObjetos.push_back(libro1);
    Libro *libro2 = new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    SetObjetos.push_back(libro2);
    Libro *libro3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32);
    SetObjetos.push_back(libro3);
    
    /*parte b*/  //Ingresa Juegos
    JuegoMesa *juego1 = new JuegoMesa("Juego Uno", 2022, Roto, 7, 10);
    SetObjetos.push_back(juego1);
    JuegoMesa *juego2 = new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4);
    SetObjetos.push_back(juego2);
    JuegoMesa *juego3 = new JuegoMesa("Dados", 2020, Roto, 2, 6);
    SetObjetos.push_back(juego3);
    
    /*parte c*/
    for (vector<Objeto*>::iterator iter = SetObjetos.begin(); iter != SetObjetos.end(); iter++)
    {
       cout << (*iter)->toString() <<endl;
    }

    /*parte d*/  //Crea Ninos
    Child *maria = new Child("María Laura", 10, "Nueva Palmira 1521", "099298190");
    Child *alex = new Child("Alex", 5, "Humberto Primo 1501", "29094141");
    
    /*parte e*/  //Prestamos
    hacerPrestamo(maria, juego2);
    hacerPrestamo(maria, libro1);
    hacerPrestamo(maria, juego3);
    hacerPrestamo(alex, juego1);
    hacerPrestamo(alex, libro3);
    
    /*parte f*/  //Listar Objetos Prestados de cada nino
    cout << endl << "Objetos prestados de Maria:"<<endl;
    set <string> m = maria->listarObjetosPrestados();
    for(set<string>::iterator papa = m.begin() ; papa != m.end(); papa++){
         cout << *papa <<endl;
    }
    
    cout << endl << "Objetos prestados de Alex:" <<endl;
    set <string> a = alex->listarObjetosPrestados();
    for(set<string>::iterator bon = a.begin() ; bon != a.end(); bon++){
        cout << *bon << endl;
    }
    
    /*parte g*/ //  CONSULTAR OBJETOS ROTOS
    cout << endl << "Objetos rotos: " << endl;

    for (vector<Objeto*>::iterator it = SetObjetos.begin(); it != SetObjetos.end(); it++){
        if ((*it)->getEstado() == Roto){
            if ((*it)->getPrestado() == nullptr){                          //Si no esta prestado solo se crea el DTObjetoRoto con el nombre del Objeto
                DTObjetoRoto r((*it)->getNombre(), false);
                agregarRoto(r);
            } else {                                                    //Si esta prestado se crea el DTObjetoRoto con el nombre del Objeto, true y nombre del nino
                DTObjetoRoto r((*it)->getNombre(), true, (*it)->getPrestado()->getChild());
                agregarRoto(r);
            }
            
        }
        
    }

    for(vector<DTObjetoRoto>::iterator zanahoria = ObjRotos.begin() ; zanahoria != ObjRotos.end(); zanahoria++){
        cout << *zanahoria << endl;
    }

    cout << endl << "Borrar: " + juego1->getNombre() << endl;
    SetObjetos.erase(SetObjetos.begin()+3);
    delete juego1;

    cout << endl << "Objetos prestados de Alex:" <<endl;
    set <string> b = alex->listarObjetosPrestados();
    for(set<string>::iterator remolacha = b.begin() ; remolacha != b.end(); remolacha++){
        cout << *remolacha << endl;
    }
    
cout << endl << "Objetos rotos: " << endl;
for(vector<DTObjetoRoto>::iterator vegetal = ObjRotos.begin() ; vegetal != ObjRotos.end(); vegetal++){
        cout << *vegetal << endl;
    }

    /*Liberacion de Memoria*/
    delete maria;
    delete libro1;
    delete libro2;
    delete libro3;
    delete juego2;
    delete juego3;
    delete alex;
    return 0;
};
