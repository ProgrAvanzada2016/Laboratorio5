/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtEstudiante.h
 * Author: GrupoProgAvanzada3
 *
 * Created on 2 de junio de 2016, 05:46 PM
 */

#ifndef DTESTUDIANTE_H
#define DTESTUDIANTE_H
#include "../conceptos/date.h"
#include <string>

using namespace std;

class DtEstudiante {
public:
    DtEstudiante();
    DtEstudiante(const DtEstudiante& orig);
    virtual ~DtEstudiante();
    
    DtEstudiante(string ci, string nombre, string apellido, date* fecha, string telefono) :
    ci(ci), nombre(nombre), apellido(apellido), fechaNac(fecha), telefono(telefono) {
    }

    string GetApellido() const;
    string GetNombre() const;
    string GetCi() const;
    date* GetFecha() const;
    string GetTelefono() const;
    
    
private:
    string ci;
    string nombre;
    string apellido;
    date* fechaNac;
    string telefono;
    
};

#endif /* DTESTUDIANTE_H */

