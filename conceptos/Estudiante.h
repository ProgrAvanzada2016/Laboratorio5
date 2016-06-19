/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estudiante.h
 * Author: emi
 *
 * Created on 1 de junio de 2016, 03:42 PM
 */


#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h"
#include "../datatypes/DtEstudiante.h"
#include "../datatypes/dtEstudianteInfo.h"
#include "../conceptos/asignatura.h"
#include "../conceptos/carrera.h"
#include <string>

using namespace std;


class Estudiante : public persona {
public:
    Estudiante() : 
    persona() {
    }
    
    Estudiante(string ci, string nombre, string apellido, date* fecNac);
    Estudiante(string ci, string nombre, string apellido, date* fecNac, string telefono);
    DtEstudiante* getDtEstudiante();
    
    int getCreditos();
    string getTelefono();
    void setCreditos(int creditos);
    void setTelefono(string telefono);
    
    void modificarEstudiante(Estudiante* e);
    dtEstudianteInfo* crearDtEstudianteInfo();
    void agregarAsignatura(asignatura* a);
    void bajaCarrera(string codigo);
    void bajaAsignatura(string codigo);
    void agregarCarrera(carrera* c);
    
    virtual ~Estudiante();
    
private:
    string telefono;
    int creditos;
   
};

#endif /* ESTUDIANTE_H */

