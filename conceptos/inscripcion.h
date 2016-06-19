/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inscripcion.h
 * Author: GrupoProgAvanzada2016
 *
 * Created on 12 de junio de 2016, 17:42
 */

#ifndef INSCRIPCION_H
#define INSCRIPCION_H
#include "date.h"
#include <list>

using namespace std;
class inscripcion {
private:
    date fecha;
    list<date> entrevistas;
   // list<> entrevistas;
    
public:
    inscripcion();
    inscripcion(const inscripcion& orig);
    //inscripcion(date fecha, date entrevistas);
    date getFecha();
    list<date> getEntrevistas();
    void setFecha(date fecha);
    void setEntrevistas(date entrevistas);
    virtual ~inscripcion();

};

#endif /* INSCRIPCION_H */

