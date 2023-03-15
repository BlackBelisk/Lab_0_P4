#include <stdio.h>
#include <string>
#include <iostream>
#include "include/Child.h"
#include "include/DTObjetoRoto.h"
#include "include/JuegoMesa.h"
#include "include/Libro.h"
#include "include/Objeto.h"
#include "include/Utils.h"
using namespace std;
int main(){

    /*parte a*/  //Ingresa Libros
    Libro *libro1 = new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688);
    Libro *libro2 = new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    Libro *libro3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32);
    
    /*parte b*/  //Ingresa Juegos
    JuegoMesa *juego1 = new JuegoMesa("Juego Uno", 2022, Roto, 7, 10);
    JuegoMesa *juego2 = new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4);
    JuegoMesa *juego3 = new JuegoMesa("Dados", 2020, Roto, 2, 6);
    
    /*parte c*/
    cout << libro1->toString() << endl;
    cout << libro2->toString() << endl;
    cout << libro3->toString() << endl;
    cout << juego1->toString() << endl;
    cout << juego2->toString() << endl;
    cout << juego3->toString() << endl;
    
    /*parte d*/  //Crea Ninos
    Child *maria = new Child("María Laura", 10, "Nueva Palmira 1521", "099298190");
    Child *alex = new Child("Alex", 5, "Humberto Primo 1501", "29094141");
    
    /*parte e*/  //Prestamos
    maria->nuevoPrestamo(juego2);
    maria->nuevoPrestamo(libro1);
    maria->nuevoPrestamo(juego3);
    alex->nuevoPrestamo(juego1);
    alex->nuevoPrestamo(libro3);
        
    
    /*parte f*/  //Listar Objetos Prestados de cada nino
    cout << "Objetos prestados de Maria:"<<endl;
    for(auto it = maria->listarObjetosPrestados().begin() ; it != maria->listarObjetosPrestados().end(); ++it){
         cout << *it <<endl;
    }
    cout << "Objetos prestados de Alex:" <<endl;
    for(auto it = alex->listarObjetosPrestados().begin() ; it != alex->listarObjetosPrestados().end(); ++it){
        cout << *it << endl;
    }
    
    
    /*parte g*/ //  CONSULTAR OBJETOS ROTOS
    set<DTObjetoRoto> ObjRotos;
    Objeto *rotos[6];
    rotos[0] = libro1;
    rotos[1] = libro2;
    rotos[2] = libro3;
    rotos[3] = juego1;
    rotos[4] = juego2;
    rotos[5] = juego3;
    
    for(int i=0; i<6; i++){
        if (rotos[i]->getEstado() == Roto){
            if (rotos[i]->getPrestado() == NULL){                   //Si no esta prestado solo se crea el DTObjetoRoto con el nombre del Objeto
                DTObjetoRoto r(rotos[i]->getNombre(), false);
                ObjRotos.insert(r);
            }
            else{                                              //Si esta prestado se crea el DTObjetoRoto con el nombre del Objeto, true y nombre del nino
                DTObjetoRoto r(rotos[i]->getNombre(), true, rotos[i]->getPrestado()->getChild());
                ObjRotos.insert(r);
            }
        }
    }
    
    
    /*parte h*/  //ELIMINAR OBJETO 
    
    delete libro1, libro2, libro3, juego1, juego2, juego3;
    delete alex, maria;
    return 0;
};
