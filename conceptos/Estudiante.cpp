
#include "Estudiante.h"

Estudiante::Estudiante(string ci, string nombre, string apellido, date fecNac) {
    this->setApellido(apellido);
    this->setCi(ci);
    this->setNombre(nombre);
    this->setFecha(fecNac);
}


Estudiante::~Estudiante() {
}


DtEstudiante* Estudiante::getDtEstudiante() {
    return new DtEstudiante(this->getCi(), this->getNombre(), this->getApellido(), this->getfecha());
}
