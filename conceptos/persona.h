/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Persona.h
 * Author: emi
 *
 * Created on 1 de junio de 2016, 03:22 PM
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "date.h"
using namespace std;

class persona {
    private:
        string ci;
        string nombre;
        string apellido;
        date* fechaNac;

public:
    persona();
    persona(string ci, string nom, string ape, date* fec);
    persona(const persona& orig);
    
    string getCi(){return this->ci;}
    void setCi(string ci){ this->ci = ci;}
    string getNombre(){return this->nombre;}
    void setNombre(string nom){this->nombre = nom;}
    string getApellido(){return this->apellido;}
    void setApellido(string ape){this->apellido = ape;}
    date* getfecha(){return this->fechaNac;}
    void setFecha(date* fec){this->fechaNac = fec;}
};

#endif /* PERSONA_H */
