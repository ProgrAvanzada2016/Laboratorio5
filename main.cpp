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
    string empresa;
    string sucursal;
    string sec;
    
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
    cout << "Seleccione sucursal: " << endl;
    cin >> sucursal;
    cin.ignore(100, '\n');
    list<dtSeccion*>* secciones = ice->listarSecciones(sucursal);
    for (std::list<dtSeccion*>::iterator it=secciones->begin(); it!=secciones->end(); ++it){
        dtSeccion* secc = *it;
        cout << "Nombre:" << secc->getNombre() << endl;
    }
    
    //Funcion crear oferta
    string exp,titulo,desc;
    int min,max,cantP,iDia,iMes,iAno,fDia,fMes,fAno,horas;
    
    cout << "Ingrese seccion: " << endl;
    cin >> sec;
    cout << "Ingrese numero de expediente: " << endl;
    cin >> exp;
    cin.ignore(100, '\n');
    cout << "Ingrese ingrese titulo " << endl;
    cin >> titulo;
    cin.ignore(100, '\n');
    cout << "Ingrese descripcion: " << endl;
    cin >> desc;
    cin.ignore(100, '\n');
    cout << "Ingrese salario minimo: " << endl;
    cin >> min;
    cin.ignore(100, '\n');
    cout << "Ingrese salario maximo: " << endl;
    cin >> max;
    cin.ignore(100, '\n');
    cout << "Ingrese horas diarias: " << endl;
    cin >> horas;
    cin.ignore(100, '\n');
    cout << "Ingrese dia de inicio: " << endl;
    cin >> iDia;
    cin.ignore(100, '\n');
    cout << "Ingrese mes de inicio: " << endl;
    cin >> iMes;
    cin.ignore(100, '\n');
    cout << "Ingrese año de inicio: " << endl;
    cin >> iAno;
    cin.ignore(100, '\n');
    cout << "Ingrese dia de finalizacion: " << endl;
    cin >> fDia;
    cin.ignore(100, '\n');
    cout << "Ingrese mes de finalizacion: " << endl;
    cin >> fMes;
    cin.ignore(100, '\n');
    cout << "Ingrese año de finalizacion: " << endl;
    cin >> fAno;
    cin.ignore(100, '\n');
    cout << "Ingrese cantidad de puestos: " << endl;
    cin >> cantP;
    cin.ignore(100, '\n');
    
    //fechaI(iDia,iMes, iAno);date
    date fechaI(iDia,iMes, iAno);
    date fechaF(fDia,fMes, fAno);
    dtRango r(min,max);
    dtOferta o(exp,titulo,desc,r,horas,fechaI,fechaF,cantP);
    ice->insertarOferta(o);
    
    int op;
    string asig;
    do{
        cout << "Ingrese codigo asignatura requerida: " << endl;
        cin >> asig;
        cin.ignore(100, '\n');
        ice->insertarAsignaturaOferta(asig);
        
        cout << "1-> Ingreas mas asignaturas\n 0->Salir " << endl;
        cin >> op;
    }while(op!=0);
    
    return 0;
}
