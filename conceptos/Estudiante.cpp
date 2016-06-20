
#include "Estudiante.h"
#include "carrera.h"

Estudiante::Estudiante(string ci, string nombre, string apellido, date* fecNac) {
    this->setApellido(apellido);
    this->setCi(ci);
    this->setNombre(nombre);
    this->setFecha(fecNac);
}

Estudiante::Estudiante(string ci, string nombre, string apellido, date* fecNac, string telefono) {
    this->setApellido(apellido);
    this->setCi(ci);
    this->setNombre(nombre);
    this->setFecha(fecNac);
    this->setTelefono(telefono);
}

Estudiante::~Estudiante() {
}

int Estudiante::getCreditos(){
    return this->creditos;
}

string Estudiante::getTelefono(){
    return this->telefono;
}

void Estudiante::setCreditos(int creditos){
    this->creditos = creditos;
}

void Estudiante::setTelefono(string telefono) {
    this->telefono = telefono;
}

DtEstudiante* Estudiante::getDtEstudiante() {
    return new DtEstudiante(this->getCi(), this->getNombre(), this->getApellido(), this->getfecha(), this->getTelefono());
}

void Estudiante::modificarEstudiante(Estudiante* e){
    this->setApellido(e->getApellido());
    this->setNombre(e->getNombre());
    this->setTelefono(e->getTelefono());
    this->setFecha(e->getfecha());
}

void Estudiante::agregarCarrera(carrera* c) {
    carreras.insert(pair<string,carrera*>(c->getCodigo(),c));
}



