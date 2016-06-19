/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorOferta.cpp
 * Author: Alejandra
 * 
 * Created on 16 de junio de 2016, 19:55
 */

#include "ManejadorOferta.h"
//#include "../conceptos/oferta.h"


ManejadorOferta* ManejadorOferta::instancia = NULL;  

ManejadorOferta* ManejadorOferta::getInstancia() {
    if (!instancia){
        instancia = new ManejadorOferta;   
    }
    return instancia;
}

void ManejadorOferta::insertarOferta(oferta* o){ 
    ofertas.insert(std::pair<string,oferta*>(o->GetNroExp(),o));
}

oferta* ManejadorOferta::getOferta(string nroExp) {
   return ofertas.find(nroExp)->second;
}

list<dtOferta*>* ManejadorOferta::getListaOfertas(){
    list<dtOferta*>* result = new list<dtOferta*>;
    for (std::map<string, oferta*>::iterator it=ofertas.begin(); it!=ofertas.end(); ++it){ 
        result->push_front(it->second->GetDtOferta());
    }
    return result;
} 

list<dtOferta*>* ManejadorOferta::getListaOfertasActivas(){
    list<dtOferta*>* result = new list<dtOferta*>;
    for (std::map<string, oferta*>::iterator it=ofertas.begin(); it!=ofertas.end(); ++it){ 
        if (it->second->ofertaActiva()) { 
            result->push_front(it->second->GetDtOferta());
        }
    }
    return result;
};    
