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


ControladorEstudiante::ControladorEstudiante() {
}

ControladorEstudiante::~ControladorEstudiante() {

}

Estudiante* ControladorEstudiante::getEstudiante(string ci) {
    return ManejadorEstudiante::getInstancia()->getEstudiante(ci);
    //return ManejadorEstudiantes::getEstudiante(ci);
}

void ControladorEstudiante::insertarEstudiante(DtEstudiante dte) {
    Estudiante* e = new Estudiante();
    e->setCi(dte.GetCi());
    e->setNombre(dte.GetNombre());
    e->setApellido(dte.GetApellido());
          
    ManejadorEstudiante::getInstancia()->insertarEstudiante(e);
}

list<DtEstudiante*>* ControladorEstudiante::listarEstudiantes() {
    return ManejadorEstudiante::getInstancia()->listarEstudiantes();
    //return ManejadorEstudiante::getInstancia()->listarEstudiantes();
}


DtEstudiante* ControladorEstudiante::getDataEstudiante(string ci){
    return ManejadorEstudiante::getInstancia()->getEstudiante(ci)->getDtEstudiante();
}











