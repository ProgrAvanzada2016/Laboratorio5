/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   empresa.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 16:36
 */

#include "empresa.h"
#include "sucursal.h"

empresa::empresa() {
    sucursal* suc1 = new sucursal("Programacion","095555558","Rivera 1234");
    sucursal* suc2 = new sucursal("Customer","12354752","Rivera 1234");
    sucursal* suc3 = new sucursal("Gerencia","09989724","Rivera 1234");
    insertarSucursal(suc1);
    insertarSucursal(suc2);
    insertarSucursal(suc3);
}

empresa::empresa(const empresa& orig) {
    this->rut = orig.rut;
    this->nombre = orig.nombre;
    
    sucursal* suc1 = new sucursal("Programacion","095555558","Rivera 1234");
    sucursal* suc2 = new sucursal("Customer","12354752","Rivera 1234");
    sucursal* suc3 = new sucursal("Gerencia","09989724","Rivera 1234");
    insertarSucursal(suc1);
    insertarSucursal(suc2);
    insertarSucursal(suc3);
}

empresa::empresa(string rut, string nombre) {
    this->rut = rut;
    this->nombre = nombre;
    
    sucursal* suc1 = new sucursal("Programacion","095555558","Rivera 1234");
    sucursal* suc2 = new sucursal("Customer","12354752","Rivera 1234");
    sucursal* suc3 = new sucursal("Gerencia","09989724","Rivera 1234");
    insertarSucursal(suc1);
    insertarSucursal(suc2);
    insertarSucursal(suc3);
}

string empresa::getRut() {
    return this->rut;
}

string empresa::getNombre() {
    return this->nombre;
}

void empresa::setRut(string rut) {
    this->rut = rut;
}

void empresa::setNombre(string nombre) {
    this->nombre = nombre;
}

dtEmpresa* empresa::getDtEmpresa(){
    return new dtEmpresa(this->getRut(), this->getNombre());
}

//Sucrusales
void empresa::insertarSucursal(sucursal* s) {
      sucursales.insert(pair<string,sucursal*>(s->getNombre(),s));
}

list<dtSucursal*>* empresa::getListSucursal() {
    list<dtSucursal*>* result = new list<dtSucursal*>;
    for (std::map<string, sucursal*>::iterator it=sucursales.begin(); it!=sucursales.end(); ++it){
        result->push_front(it->second->getDtSucursal());
    }
    return result;
}

//Destrucotr
empresa::~empresa() {
}