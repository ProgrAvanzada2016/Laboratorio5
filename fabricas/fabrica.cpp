/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fabrica.cpp
 * Author: GrupoProgAvanzada3
 * 
 * Created on 2 de junio de 2016, 05:39 PM
 */

#include "fabrica.h"
#include "../controladores/ControladorEstudiante.h"
#include "../controladores/ControladorOferta.h"

IcontroladorEstudiante* fabrica::getIControladorEstudiantes() {
    return new ControladorEstudiante;
}

/*IcontroladorOferta* fabrica::getIControladorOferta() {
    return new ControladorOferta;
}
*/