#include "asignatura.h"

asignatura::asignatura() {
}

asignatura::asignatura(const asignatura& orig) {
    this->codigo = orig.codigo;
    this->nombre = orig.nombre;
    this->creditos = orig.creditos;
}

asignatura::asignatura(string codigo, string nombre, int creditos) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->creditos = creditos;
}

//getters

string asignatura::getCodigo() {
    return this->codigo;
}

string asignatura::getNombre() {
    return this->nombre;
}

int asignatura::getCreditos() {
    return this->creditos;
}

dtAsignatura* asignatura::getDtAsignatura(){
    return new dtAsignatura(this->getCodigo(), this->getNombre(), this->getCreditos());
}

//setters

void asignatura::setCodigo(string codigo) {
    this->codigo=codigo;
}

void asignatura::setNombre(string nombre) {
    this->nombre = nombre;
}

void asignatura::setCreditos(int creditos) {
    this->creditos = creditos;
}

asignatura::~asignatura() {
}

