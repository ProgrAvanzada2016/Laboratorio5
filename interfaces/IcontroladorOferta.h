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
#include "../conceptos/empresa.h"
#include "../conceptos/sucursal.h"

using namespace std;

class IcontroladorOferta {
public:   
   //Ofertas
   virtual void insertarOferta(dtOferta) = 0;
   virtual list<dtOferta*>* obtenerlistaOfertas() = 0;
   virtual list<dtOferta*>* listaOfertasActivas() = 0;
   virtual dtOferta* getDtOferta(string nroExp) = 0; 
   virtual oferta* getOferta(string nroExp) = 0;
   
   //Empresas
   virtual void insertarEmpresa(dtEmpresa) = 0;
   virtual list<dtEmpresa*>* listarEmpresas()= 0;
   
   //Sucursales
   virtual list<dtSucursal*>* listarSucursales(string rut)= 0;
   
private:

};

#endif /* ICONTROLADORIFERTA_H */
