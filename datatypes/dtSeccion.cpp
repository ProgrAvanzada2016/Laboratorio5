#include "dtSeccion.h"

dtSeccion::dtSeccion() {
}

dtSeccion::dtSeccion(string nombre, int interno) {
    this->nombre=nombre;
    this->interno=interno;
}

dtSeccion::dtSeccion(const dtSeccion& orig) {
    this->nombre = orig.nombre;
    this->interno = orig.interno;
}

//Geters
string dtSeccion::getNombre(){
    return this->nombre;
}

int dtSeccion::getInterno(){
    return this->interno;
}

//Destructor
dtSeccion::~dtSeccion() {
}
