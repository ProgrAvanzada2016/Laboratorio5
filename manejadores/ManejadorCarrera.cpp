/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorCarrera.cpp
 * Author: vperez
 * 
 * Created on 19 de junio de 2016, 22:52
 */

#include "ManejadorCarrera.h"

ManejadorCarrera::ManejadorCarrera() {
}

ManejadorCarrera::ManejadorCarrera(const ManejadorCarrera& orig) {
}

ManejadorCarrera::~ManejadorCarrera() {
}

carrera* ManejadorCarrera::getCarrera(string codigo) {
    return carreras.find(codigo)->second;
}

asignatura* ManejadorCarrera::getAsignatura(string codigo) {
    return asignaturas.find(codigo)->second;
}
 
void ManejadorCarrera::insertarAsignatura(asignatura* a) {
      asignaturas.insert(pair<string,asignatura*>(a->getCodigo(),a));
}

ManejadorCarrera* ManejadorCarrera::instancia = NULL;  

ManejadorCarrera* ManejadorCarrera::getInstancia() {
    if (!instancia){
        instancia = new ManejadorCarrera;   
    }
    return instancia;
}
