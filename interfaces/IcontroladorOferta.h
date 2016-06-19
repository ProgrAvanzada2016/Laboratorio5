/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IcontroladorOferta.h
 * Author: Alejandra
 *
 * Created on 16 de junio de 2016, 19:53
 */

#ifndef ICONTROLADOROFERTA_H
#define ICONTROLADOROFERTA_H
#include <map>
#include <list>
#include <string>
#include "../conceptos/oferta.h"
using namespace std;

class IcontroladorOferta {
public:   
   virtual void insertarOferta(dtOferta) = 0;
   virtual list<dtOferta*>* obtenerlistaOfertas() = 0;
   virtual list<dtOferta*>* getListaOfertasActivas() = 0;
   virtual dtOferta* getDtOferta(string nroExp) = 0; 
   virtual oferta* getOferta(string nroExp) = 0;
    
   
    
private:

};

#endif /* ICONTROLADORIFERTA_H */
