/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: clobes
 *
 * Created on 18 de junio de 2016, 03:56 PM
 */

#include <cstdlib>

#include "datatypes/dtEmpresa.h"
#include "interfaces/IcontroladorOferta.h"
#include "fabricas/fabrica.h"
#include "conceptos/date.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    printf("Inicializando:\n");
    IcontroladorOferta* ico = fabrica::getIControladorOferta();
    IcontroladorEstudiante* ice = fabrica::getIControladorEstudiantes();
    
    date* miFecha = new date(19,6,2016);
    
    ico->insertarEmpresa(dtEmpresa("22222","ANCAP"));
    ico->insertarEmpresa(dtEmpresa("33333","UTE"));
    
    ice->insertarEstudiante(DtEstudiante("1","Leo","Masliah", miFecha, "09957241"));
    ice->insertarEstudiante(DtEstudiante("2","Fyodor","Dostoyevsky", miFecha, "098423754"));
    ice->insertarEstudiante(DtEstudiante("3","Charles","Bukowski", miFecha, "095723123"));
    ice->insertarEstudiante(DtEstudiante("4","Eduardo","Galeano", miFecha, "091889922"));
    ice->insertarEstudiante(DtEstudiante("5","Hernan","Casciari", miFecha, "094436750"));
    ice->insertarEstudiante(DtEstudiante("6","Jared","Diamond", miFecha, "099215347"));
    ice->insertarEstudiante(DtEstudiante("7","Jorge Luis","Borges", miFecha, "097421290"));
    
    string cedula, apellido, nombre, telefono;
    int dd,mm,aaaa;
    cout<< "Ingrese cedula de estudiante a modificar: ";
    cin>> cedula;
    Estudiante* est = new Estudiante();
    est = ice->getEstudiante(cedula);
    cout<< "Estudiante: " << est->getApellido() << ", " << est->getNombre()<<endl;
    cout<< "Ingrese apellido: ";
    cin>> apellido;
    cout<< "Ingrese nombre: ";
    cin>> nombre;
    cout<< "Ingrese telefono: ";
    cin>> telefono;
    cout<< "Ingrese dia de nacimiento: ";
    cin>> dd;
    cout<< "Ingrese mes de nacimiento: ";
    cin>> mm;
    cout<< "Ingrese año de nacimiento: ";
    cin>> aaaa;
    date* fechaNac = new date(dd,mm,aaaa);
    DtEstudiante* estModificado = new DtEstudiante(est->getCi(), nombre, apellido, fechaNac, telefono);
    ice->modificarEstudiante(estModificado);
    cout<< "Estudiante modificado:" << endl;
    est = ice->getEstudiante(cedula);
    cout<< est->getApellido() << ", " << est->getNombre()<< ". Tel: " << est->getTelefono() << endl;
    cout<< "Fecha nacimiento: " << est->getfecha()->getDay() << "/"<< est->getfecha()->getMonth() << "/" << est->getfecha()->getYear();
    return 0;
}

