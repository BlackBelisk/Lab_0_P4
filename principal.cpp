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
    hacerPrestamo(maria, juego2);
    hacerPrestamo(maria, libro1);
    hacerPrestamo(maria, juego3);
    hacerPrestamo(alex, juego1);
    hacerPrestamo(alex, libro3);
    /*maria->nuevoPrestamo(juego2);
    maria->nuevoPrestamo(libro1);
    maria->nuevoPrestamo(juego3);
    alex->nuevoPrestamo(juego1);
    alex->nuevoPrestamo(libro3);
    */
    
    /*parte f*/  //Listar Objetos Prestados de cada nino
    cout << "Objetos prestados de Maria:"<<endl;
    set <string> m = maria->listarObjetosPrestados();
    for(auto it = m.begin() ; it != m.end(); it++){
         cout << *it <<endl;
    }
    cout << "Objetos prestados de Alex:" <<endl;
    set <string> a = alex->listarObjetosPrestados();
    for(auto it = a.begin() ; it != a.end(); it++){
        cout << *it << endl;
    }
    
    /*parte g*/ //  CONSULTAR OBJETOS ROTOS
    cout << "Objetos rotos: " << endl;
    
    Objeto *rotos[6];
    rotos[0] = libro1;
    rotos[1] = libro2;
    rotos[2] = libro3;
    rotos[3] = juego1;
    rotos[4] = juego2;
    rotos[5] = juego3;
    cout << endl;
    for(int i=0; i<6; i++){
        if (rotos[i]->getEstado() == Roto){
            if (rotos[i]->getPrestado() == NULL){                   //Si no esta prestado solo se crea el DTObjetoRoto con el nombre del Objeto
                DTObjetoRoto r(rotos[i]->getNombre(), false);
                agregarRoto(r);
            }
            else{                                              //Si esta prestado se crea el DTObjetoRoto con el nombre del Objeto, true y nombre del nino
                DTObjetoRoto r(rotos[i]->getNombre(), true, rotos[i]->getPrestado()->getChild());
                agregarRoto(r);
            }
        }
    }
    for(auto it = ObjRotos.begin() ; it != ObjRotos.end(); it++){
        cout << *it << endl;
    }
    for (int i = 0; i < 6; i++)
        rotos[i] = nullptr;
    
    
    /*parte h*/  //ELIMINAR OBJETO
    int i;                                                  //objeto a borrar
    Objeto *lista_obj[6];
    lista_obj[0] = libro1;
    lista_obj[1] = libro2;
    lista_obj[2] = libro3;
    lista_obj[3] = juego1;
    lista_obj[4] = juego2;
    lista_obj[5] = juego3;
    
    
    cout << "Lista de objetos: " << endl;                   //imprimir lista de objetos y selecciona cual se borra
    for(i=0; i<6; i++){
        cout << i+1 << "- " << lista_obj[i]->getNombre() << endl;
    }
    
    cout << "Ingrese el digito del objeto a borrar: " << endl; 
    cin << i;
    Objetos *obj = listado_objetos[i-1];
    
    if (obj->getPrestado() != NULL){                         //Si el objeto lo tiene un nino elimina el vinculo
        obj->getPrestado()->eliminarPrestamo(obj);
    }
    
    if (obj->getEstado() == Roto){                           //Si el objeto esta roto borra el objeto de la lista objetos rotos
        eliminarRoto(obj);
    }
    
    delete obj;                                             //Elimina el Objeto
    
    
    
    /*Liberacion de Memoria*/
    delete maria;
    delete libro1;
    delete libro2;
    delete libro3;
    delete juego1;
    delete juego2;
    delete juego3;
    delete alex;
    return 0;
};
