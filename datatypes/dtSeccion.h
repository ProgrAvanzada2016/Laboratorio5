/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dtSeccion.h
 * Author: clobes
 *
 * Created on 19 de junio de 2016, 05:17 PM
 */

#ifndef DTSECCION_H
#define DTSECCION_H

#include <string>

using namespace std;

class dtSeccion {
public:
    //Constructoras
    dtSeccion();
    dtSeccion(const dtSeccion& orig);
    dtSeccion(string nombre, int interno);
    
    //Geters
    string getNombre();
    int getInterno();
    
    //Destructor
    virtual ~dtSeccion();
private:
    string nombre;
    int interno;
};

#endif /* DTSECCION_H */

