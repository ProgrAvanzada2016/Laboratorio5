#include "seccion.h"

seccion::seccion() {
}

seccion::seccion(const seccion& orig) {
    this->nombre=nombre;
    this->interno=interno;
}

seccion::seccion(string nombre,int interno){
    this->nombre=nombre;
    this->interno=interno;
}

//geters
string seccion::getNombre(){
    return this->nombre;
}

 int seccion::getInterno(){
    return this->interno;
 }
 //setters
 
void seccion::setNombre(){
    this->nombre=nombre;
}

void seccion::setInterno(){
    this->interno=interno;
}

seccion::~seccion() {
}

