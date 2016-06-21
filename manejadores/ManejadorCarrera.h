/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManejadorCarrera.h
 * Author: vperez
 *
 * Created on 19 de junio de 2016, 22:52
 */

#ifndef MANEJADORCARRERA_H
#define MANEJADORCARRERA_H
#include <map>
#include <list>
#include <string>
#include "../conceptos/asignatura.h"
#include "../conceptos/carrera.h"


class ManejadorCarrera {
public:
    ManejadorCarrera();
    ManejadorCarrera(const ManejadorCarrera& orig);
    
    static ManejadorCarrera* getInstancia();
    carrera* getCarrera(string codigo);
    asignatura* getAsignatura(string codigo);
    void insertarAsignatura(asignatura*);
    void insertarCarrera(carrera*);
    list<dtCarrera*>* listarCarreras();
    
    virtual ~ManejadorCarrera();

private:
    map<string, asignatura*> asignaturas;
    map<string, carrera*> carreras;
    static ManejadorCarrera* instancia;
};

#endif /* MANEJADORCARRERA_H */

