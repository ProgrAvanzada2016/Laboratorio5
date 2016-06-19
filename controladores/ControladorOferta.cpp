/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorOferta.cpp
 * Author: Alejandra
 * 
 * Created on 16 de junio de 2016, 19:22
 */

#include "ControladorOferta.h"
#include "../manejadores/ManejadorOferta.h"
#include "../conceptos/oferta.h"
#include "../datatypes/dtOferta.h"

using namespace std;


ControladorOferta::ControladorOferta() {
}

void ControladorOferta::insertarOferta(dtOferta dte) {
    oferta* o = new oferta();
    o->SetNroExp(dte.getNroExp());
    o->SetTitulo(dte.getTitulo()); 
    o->SetDescripcion(dte.getDescripcion());
    o->SetRangoSalarial(dte.getRangoSalarial());               
    o->SetHoras(dte.getHoras());              
    o->SetFechaInicio(dte.getFechaInicio());             
    o->SetFechaFin(dte.getFechaFin());               
    o->SetCantPuestos(dte.getCantPuestos());           
                 
    ManejadorOferta::getInstancia()->insertarOferta(o);
}


dtOferta* ControladorOferta::getDtOferta(string nroExp){
    return ManejadorOferta::getInstancia()->getOferta(nroExp)->GetDtOferta();
}


oferta* ControladorOferta::getOferta(string nroExp) {
    return ManejadorOferta::getInstancia()->getOferta(nroExp);
}


list<dtOferta*>* ControladorOferta::obtenerlistaOfertas() {
    return ManejadorOferta::getInstancia()->getListaOfertas();
}


list<dtOferta*>* ControladorOferta::listaOfertasActivas (){
    list<dtOferta*>* lista= ManejadorOferta::getInstancia()->getListaOfertasActivas();
    return lista;  
}
 
    
list<DtEstudiante*>* ControladorOferta::obtenerListaEstOf(string nroExp){
    oferta* o = getOferta(nroExp);
    list<DtEstudiante*>* lista= o->GetListaEstOf();
    return lista;    
}
   
   
void ControladorOferta::altaEntrevista(string ci,date fecha){
    
}

ControladorOferta::~ControladorOferta() {
}

    
    
    