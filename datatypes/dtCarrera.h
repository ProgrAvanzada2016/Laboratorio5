/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtCarrera.h
 * Author: vperez
 *
 * Created on 20 de junio de 2016, 2:42
 */

#ifndef DTCARRERA_H
#define DTCARRERA_H
#include <string>

using namespace std;

class dtCarrera {
public:
    dtCarrera();
    dtCarrera(const dtCarrera& orig);
    dtCarrera(string codigo, string nombre);
    
    string getCodigo();
    string getNombre();
    virtual ~dtCarrera();
private:
    string codigo;
    string nombre;
    
};

#endif /* DTCARRERA_H */

