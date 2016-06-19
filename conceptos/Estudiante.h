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
#include <string>

using namespace std;


class Estudiante : public persona {
public:
    Estudiante() : 
    persona() {
    }
    
    Estudiante(string ci, string nombre, string apellido, date fecNac);
    DtEstudiante* getDtEstudiante();
    
    virtual ~Estudiante();
private:
   
};

#endif /* ESTUDIANTE_H */

