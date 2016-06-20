#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
#include "ManejadorEstudiante.h"

ManejadorEstudiante* ManejadorEstudiante::instancia = NULL;  

ManejadorEstudiante* ManejadorEstudiante::getInstancia() {
    if (!instancia){
        instancia = new ManejadorEstudiante;   
    }
    return instancia;
}

Estudiante* ManejadorEstudiante::getEstudiante(string ci) {
    return estudiantes.find(ci)->second;
}

void ManejadorEstudiante::insertarEstudiante(Estudiante* e) {
    estudiantes.insert(pair<string,Estudiante*>(e->getCi(),e));
}

void ManejadorEstudiante::modificarEstudiante(Estudiante* e) {
    estudiantes.find(e->getCi())->second->modificarEstudiante(e);
}



list<DtEstudiante*>* ManejadorEstudiante::listarEstudiantes() {
    list<DtEstudiante*>* result = new list<DtEstudiante*>;
    for (std::map<string, Estudiante*>::iterator it=estudiantes.begin(); it!=estudiantes.end(); ++it){
        result->push_front(it->second->getDtEstudiante());
    }
    return result;    
}



