#include "dtEmpresa.h"

dtEmpresa::dtEmpresa(string rut, string nom) {
    this->rut=rut;
    this->nombre=nom;
}

dtEmpresa::dtEmpresa(const dtEmpresa& orig) {
    this->rut=orig.rut;
    this->nombre=orig.nombre;
}

dtEmpresa::~dtEmpresa() {
}

string dtEmpresa::getNombre(){
    return this->nombre;
}

string dtEmpresa::getRut(){
    return this->rut;
}