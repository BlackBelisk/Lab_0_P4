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
    Libro libro1("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688);
    Libro libro2("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    Libro libro3("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32);
    /*parte b*/
    JuegoMesa juego1("Juego Uno", 2022, Roto, 7, 10);
    JuegoMesa juego2("Mazo de Cartas", 2019, Nuevo, 7, 4);
    JuegoMesa juego3("Dados", 2020, Roto, 2, 6);
    
    Child Maria("María Laura", 10, "Nueva Palmira 1521", "099298190");
    Child Alex("Alex", 5, "Humberto Primo 1501", "29094141");
    return 0;
};
