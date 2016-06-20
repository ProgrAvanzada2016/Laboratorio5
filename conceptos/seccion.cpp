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
 
dtSeccion* seccion::getDtSeccion(){
    return new dtSeccion(this->getNombre(), this->getInterno());
}
 
//setters
void seccion::setNombre(){
    this->nombre=nombre;
}

void seccion::setInterno(){
    this->interno=interno;
}

void seccion::inseratOferta(oferta* o){ 
    ofertas.insert(std::pair<string,oferta*>(o->GetNroExp(),o));
}

seccion::~seccion() {
}

