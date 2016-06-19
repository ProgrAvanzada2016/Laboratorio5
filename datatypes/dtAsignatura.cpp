#include "dtAsignatura.h"


//Constructores
dtAsignatura::dtAsignatura() {
}

dtAsignatura::dtAsignatura(const dtAsignatura& orig) {
    this->codigo = orig.codigo;
    this->nombre = orig.nombre;
    this->creditos = orig.creditos;
}

dtAsignatura::dtAsignatura(string codigo, string nombre, int creditos){ 
    this->codigo = codigo;
    this->nombre = nombre;
    this->creditos = creditos;
}

//Geters
string dtAsignatura::GetCodigo(){ 
    return this->codigo;
}

string dtAsignatura::GetNombre(){ 
    return this->nombre;
}

int dtAsignatura::GetCreditos() { 
    return this->creditos;
}

//Destructor
dtAsignatura::~dtAsignatura() {
}

