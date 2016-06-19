/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorOferta.h
 * Author: Alejandra
 *
 * Created on 16 de junio de 2016, 19:22
 */

#ifndef CONTROLADOROFERTA_H
#define CONTROLADOROFERTA_H

#include "../interfaces/IcontroladorOferta.h"

using namespace std;

//#include "../interfaces/IcontroladorOferta.h"
class ControladorOferta: public IcontroladorOferta {
public:
    ControladorOferta();    
    
    virtual void insertarOferta(dtOferta);
    virtual list<dtOferta*>* obtenerlistaOfertas();
    virtual dtOferta* getDtOferta(string nroExp);
    virtual oferta* getOferta(string nroExp);
    virtual list<dtOferta*>* listaOfertasActivas ();
    virtual list<DtEstudiante*>* obtenerListaEstOf(string nroExp);
    virtual void altaEntrevista(string ci,date fecha);
    
    virtual ~ControladorOferta();
private:
      

};

#endif /* CONTROLADOROFERTA_H */




    
    

