#include "dtSucursal.h"


//Constructores
dtSucursal::dtSucursal() {
}

dtSucursal::dtSucursal(string nombre, string telefono, string direccion) {
    this->nombre=nombre;
    this->telefono=telefono;
    this->direccion=direccion;
}

dtSucursal::dtSucursal(const dtSucursal& orig) {
    this->nombre = orig.nombre;
    this->telefono = orig.telefono;
    this->direccion = orig.direccion;
}

//Geters
string dtSucursal::getNombre(){
    return this->nombre;
}

string dtSucursal::getTelefono(){
    return this->telefono;
}

string dtSucursal::getDireccion(){
    return this->direccion;
}

//Destructor
dtSucursal::~dtSucursal() {
}

