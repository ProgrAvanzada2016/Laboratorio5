/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorEstudiante.cpp
 * Author: GrupoProgAvanzada3
 * 
 * Created on 1 de junio de 2016, 03:24 PM
 */

#include "ControladorEstudiante.h"
#include "../manejadores/ManejadorEstudiante.h"
using namespace std;


//ESTUDIANTE
ControladorEstudiante::ControladorEstudiante() {
}

ControladorEstudiante::~ControladorEstudiante() {
}

Estudiante* ControladorEstudiante::getEstudiante(string ci) {
    return ManejadorEstudiante::getInstancia()->getEstudiante(ci);
}

void ControladorEstudiante::insertarEstudiante(DtEstudiante dte) {
    Estudiante* e = new Estudiante();
    e->setCi(dte.GetCi());
    e->setNombre(dte.GetNombre());
    e->setApellido(dte.GetApellido());
    e->setFecha(dte.GetFecha());
    e->setTelefono(dte.GetTelefono());
          
    ManejadorEstudiante::getInstancia()->insertarEstudiante(e);
}

void ControladorEstudiante::modificarEstudiante(DtEstudiante* dte) {
    Estudiante* e = new Estudiante();
    e->setCi(dte->GetCi());
    e->setNombre(dte->GetNombre());
    e->setApellido(dte->GetApellido());
    e->setFecha(dte->GetFecha());
    e->setTelefono(dte->GetTelefono());
          
    ManejadorEstudiante::getInstancia()->modificarEstudiante(e);
}

list<DtEstudiante*>* ControladorEstudiante::listarEstudiantes() {
    return ManejadorEstudiante::getInstancia()->listarEstudiantes();
}


DtEstudiante* ControladorEstudiante::getDataEstudiante(string ci){
    return ManejadorEstudiante::getInstancia()->getEstudiante(ci)->getDtEstudiante();
}

//CARRERA
carrera* ControladorEstudiante::getCarrera(string codigo) {
    return ManejadorCarrera::getInstancia()->getCarrera(codigo);
}

asignatura* ControladorEstudiante::getAsignatura(string codigo){
    return ManejadorCarrera::getInstancia()->getAsignatura(codigo);
}
   
void ControladorEstudiante::insertarAsignatura(asignatura* a) {
    asignatura* asig = new asignatura();
    asig->setCodigo(a->getCodigo());
    asig->setCreditos(a->getCreditos());
    asig->setNombre(a->getNombre());
    
    ManejadorCarrera::getInstancia()->insertarAsignatura(asig);
}











