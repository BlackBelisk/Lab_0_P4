#include <iostream>
#include <string>
#include "../include/Objeto.h"
using namespace std;

Objeto::Objeto(string name, int anio, estado status1){
    this->nombre = name;
    this->anioComprado = anio;
    this->status = status1;
}