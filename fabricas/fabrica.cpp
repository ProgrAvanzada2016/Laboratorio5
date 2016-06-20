/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fabrica.cpp
 * Author: GrupoProgAvanzada3
 * 
 * Created on 2 de junio de 2016, 05:39 PM
 */

#include "fabrica.h"
#include "../controladores/ControladorEstudiante.h"
#include "../controladores/ControladorOferta.h"

IcontroladorEstudiante* fabrica::getIControladorEstudiantes() {
    return new ControladorEstudiante;
}

IcontroladorOferta* fabrica::getIControladorOferta() {
    return new ControladorOferta;
}

void fabrica::cargarDatos(){
    IcontroladorOferta* ico = this->getIControladorOferta();
    IcontroladorEstudiante* ice = this->getIControladorEstudiantes();
    
    date* miFecha = new date(19,6,2016);
    
    ico->insertarEmpresa(dtEmpresa("22222","ANCAP"));
    ico->insertarEmpresa(dtEmpresa("33333","UTE"));
    
    ico->insertarAsignatura(dtAsignatura("1","MATEMATICA",15));
    ico->insertarAsignatura(dtAsignatura("2","GEOMETRIA",10));
    ico->insertarAsignatura(dtAsignatura("3","FISICA",25));

    ice->insertarEstudiante(DtEstudiante("1","Leo","Masliah", miFecha, "09957241"));
    ice->insertarEstudiante(DtEstudiante("2","Fyodor","Dostoyevsky", miFecha, "098423754"));
    ice->insertarEstudiante(DtEstudiante("3","Charles","Bukowski", miFecha, "095723123"));
    ice->insertarEstudiante(DtEstudiante("4","Eduardo","Galeano", miFecha, "091889922"));
    ice->insertarEstudiante(DtEstudiante("5","Hernan","Casciari", miFecha, "094436750"));
    ice->insertarEstudiante(DtEstudiante("6","Jared","Diamond", miFecha, "099215347"));
    ice->insertarEstudiante(DtEstudiante("7","Jorge Luis","Borges", miFecha, "097421290"));
    
    }