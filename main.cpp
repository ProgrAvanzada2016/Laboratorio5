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
    string empresa;
    
    printf("Inicializando:\n");
    IcontroladorOferta* ice = fabrica::getIControladorOferta();
    
    //Inicializando datos de prueba
    ice->insertarEmpresa(dtEmpresa("22","ANCAP"));
    ice->insertarEmpresa(dtEmpresa("33","UTE"));
    
    
    //Funcion listar empresas
    list<dtEmpresa*>* empresas = ice->listarEmpresas();
    for (std::list<dtEmpresa*>::iterator it=empresas->begin(); it!=empresas->end(); ++it){
        dtEmpresa* emp = *it;
        cout << "Rut:" << emp->getRut() << " Nombre:" <<  emp->getNombre() << endl;
    }
    
    //Funcion listar sucurrsales
    cout << "Seleccione empresa: " << endl;
    cin >> empresa;
    cin.ignore(100, '\n');
    list<dtSucursal*>* sucursales = ice->listarSucursales(empresa);
    for (std::list<dtSucursal*>::iterator it=sucursales->begin(); it!=sucursales->end(); ++it){
        dtSucursal* suc = *it;
        cout << "Nombre:" << suc->getNombre() << endl;
    }
    
    //Funcion listar secciones
    
    return 0;
}

