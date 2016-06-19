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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    printf("Inicializando:\n");
    IcontroladorOferta* ice = fabrica::getIControladorOferta();
    
    ice->insertarEmpresa(dtEmpresa("22222","ANCAP"));
    ice->insertarEmpresa(dtEmpresa("33333","UTE"));
    
    /*ice->insertarEstudiante(DtEstudiante("2","Leo","Masliah"));
    ice->insertarEstudiante(DtEstudiante("3","Fyodor","Dostoyevsky"));
    ice->insertarEstudiante(DtEstudiante("324","Charles","Bukowski"));
    ice->insertarEstudiante(DtEstudiante("12351","Eduardo","Galeano"));
    ice->insertarEstudiante(DtEstudiante("1234","Hernan","Casciari"));
    ice->insertarEstudiante(DtEstudiante("97237","Jared","Diamond"));
    ice->insertarEstudiante(DtEstudiante("5893","Jorge Luis","Borges"));*/
    
   
    
//    for (Estudiante* est : estudiantes) {
//        cout << est->Getci() << ":" <<  est->Getnombre() << ":" << est->Setapellido() << endl;
//    }
    
    list<dtEmpresa*>* empresas = ice->listarEmpresas();

    for (std::list<dtEmpresa*>::iterator it=empresas->begin(); it!=empresas->end(); ++it){
        dtEmpresa* emp = *it;
        cout << "Rut:" << emp->getRut() << " Nombre:" <<  emp->getNombre() << endl;
        //printf("Estudiante:%s, Nombre:%s, Apellido:%s\n", est->GetCi().data(), est->GetNombre().data(), est->GetApellido().data());
    }
   
    
//    requiere tener el estandar c++11!!
//    printf("\nOtra forma de recorrrer\n");
//    for (DtEstudiante* est : *estudiantes) {
//        printf("Estudiante:%s, Nombre:%s, Apellido:%s\n", est->GetCi().data(), est->GetNombre().data(), est->GetApellido().data());
//    }

    
    return 0;
}

