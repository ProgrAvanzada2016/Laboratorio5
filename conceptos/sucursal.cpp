/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sucursal.cpp
 * Author: GrupoProgAvanzada2016
 * 
 * Created on 12 de junio de 2016, 16:33
 */

#include "sucursal.h"

sucursal::sucursal() {
    seccion* sec1 = new seccion("RRHH",1512);
    seccion* sec2 = new seccion("TESORERIA",0035);
    seccion* sec3 = new seccion("SISTEMAS",9999);
    insertarSeccion(sec1);
    insertarSeccion(sec2);
    insertarSeccion(sec3);
}

sucursal::sucursal(const sucursal& orig) {
    this->nombre=orig.nombre;
    this->telefono=orig.telefono;
    this->direccion=orig.direccion;
    
    seccion* sec1 = new seccion("RRHH",1512);
    seccion* sec2 = new seccion("TESORERIA",0035);
    seccion* sec3 = new seccion("SISTEMAS",9999);
    insertarSeccion(sec1);
    insertarSeccion(sec2);
    insertarSeccion(sec3);
}

sucursal::sucursal(string nombre,string telefono, string direccion){
    this->nombre=nombre;
    this->telefono=telefono;
    this->direccion=direccion;
    
    seccion* sec1 = new seccion("RRHH",1512);
    seccion* sec2 = new seccion("TESORERIA",0035);
    seccion* sec3 = new seccion("SISTEMAS",9999);
    insertarSeccion(sec1);
    insertarSeccion(sec2);
    insertarSeccion(sec3);
}

   
//geters
string sucursal::getNombre(){
    return this->nombre;
}

string sucursal::getTelefono(){
    return this->telefono;
}

string sucursal::getDireccion(){
    return this->direccion;
}

dtSucursal* sucursal::getDtSucursal(){
    //No consideramos necesario tener que crear la lista de dtSecciones
    return new dtSucursal(this->getNombre(), this->getTelefono(),this->getDireccion());
}

//setters
void sucursal::setNombre(string nombre){
    this->nombre=nombre;
}

void sucursal::setTelefono(string telefono){
    this->telefono=telefono;
}

void sucursal::setDireccion(string direccion){
    this->direccion=direccion;
}
    
//Secciones
void sucursal::insertarSeccion(seccion* s) {
      secciones.insert(pair<string,seccion*>(s->getNombre(),s));
}

list<dtSeccion*>* sucursal::getListSeccion() {
    list<dtSeccion*>* result = new list<dtSeccion*>;
    for (std::map<string, seccion*>::iterator it=secciones.begin(); it!=secciones.end(); ++it){
        result->push_front(it->second->getDtSeccion());
    }
    return result;
}

seccion* sucursal::getSeccion(string nombre){
    return secciones.find(nombre)->second;
}

sucursal::~sucursal() {
}

