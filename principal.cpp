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

    /*parte a*/  
    Libro *libro1 = new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688);
    Libro *libro2 = new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    Libro *libro3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32);
    
    /*parte b*/
    JuegoMesa *juego1 = new JuegoMesa("Juego Uno", 2022, Roto, 7, 10);
    JuegoMesa *juego2 = new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4);
    JuegoMesa *juego3 = new JuegoMesa("Dados", 2020, Roto, 2, 6);
    
    /*parte c*/
    cout << libro1->toString();
    cout << libro2->toString();
    cout << libro3->toString();
    cout << juego1->toString();
    cout << juego2->toString();
    cout << juego3->toString();
    
    /*parte d*/
    Child *maria = new Child("María Laura", 10, "Nueva Palmira 1521", "099298190");
    Child *alex = new Child("Alex", 5, "Humberto Primo 1501", "29094141");
    
    /*parte e*/
    maria->nuevoPrestamo(juego2);
    maria->nuevoPrestamo(libro1);
    maria->nuevoPrestamo(juego3);
    alex->nuevoPrestamo(juego1);
    alex->nuevoPrestamo(libro3);
        
    /*parte f*/
    cout << maria->listarObjetosPrestados();
    cout << alex->listarObjetosPrestados();
    
    /*parte g*/ //  CONSULTAR OBJETOS ROTOS
    Objeto *rotos[6] = new Objeto;
    rotos[0] = libro1;
    rotos[1] = libro2;
    rotos[2] = libro3;
    rotos[3] = juego1;
    rotos[4] = juego2;
    rotos[5] = juego3;
    
    for(i=0; i<6; i++){
        if (rotos[i]->status == Roto){
            if (rotos[i]->prestado == NULL){                   //Si no esta prestado solo se crea el DTObjetoRoto con el nombre del Objeto
                DTObjetoRoto (rotos[i]->toString());
            }
            else{                                              //Si esta prestado se crea el DTObjetoRoto con el nombre del Objeto, true y nombre del nino
                DTObjetoRoto (rotos[i]->toString(), true, rotos[i]->prestarAChild);
            }
        }
    }
    
    
    /*parte h*/  //ELIMINAR OBJETO 
    
    delete libro1, libro2, libro3, juego1, juego2, juego3;
    delete alex, maria;
    delete []rotos;
    return 0;
};
