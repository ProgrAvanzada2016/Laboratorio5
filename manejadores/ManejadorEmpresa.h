
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorEmpresa.h
 * Author: clobes
 *
 * Created on 19 de junio de 2016, 12:49 PM
 */

#ifndef MANEJADOREMPRESA_H
#define MANEJADOREMPRESA_H


#include <map>
#include <list>
#include <string>
#include "../conceptos/empresa.h"
#include"../datatypes/dtEmpresa.h"

using namespace std;

class ManejadorEmpresa {
public:
    static ManejadorEmpresa* getInstancia();
    
    void insertarEmpresa(empresa*);
    empresa* getEmpresa(string rut);
    list<dtEmpresa*>* getListEmp();
   
    
private:
    static ManejadorEmpresa* instancia;
    map<string, empresa*> empresas;
    
};

#endif /* MANEJADOREMPRESA_H */

