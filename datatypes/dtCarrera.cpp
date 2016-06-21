/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtCarrera.cpp
 * Author: vperez
 * 
 * Created on 20 de junio de 2016, 2:42
 */

#include "dtCarrera.h"

dtCarrera::dtCarrera() {
}

dtCarrera::dtCarrera(const dtCarrera& orig) {
    this->codigo = orig.codigo;
    this->nombre = orig.nombre;
}
dtCarrera::dtCarrera(string codigo, string nombre){
    this->codigo = codigo;
    this->nombre = nombre;
}

string dtCarrera::getCodigo(){
    return this->codigo;
}
string dtCarrera::getNombre(){
    return this->nombre;
}
dtCarrera::~dtCarrera() {
}

