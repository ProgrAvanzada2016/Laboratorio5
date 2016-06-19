#include "ControladorOferta.h"
#include "../manejadores/ManejadorOferta.h"
#include "../manejadores/ManejadorEmpresa.h"
#include "../conceptos/oferta.h"
#include "../conceptos/empresa.h"
#include "../datatypes/dtOferta.h"
#include "../datatypes/dtEmpresa.h"

using namespace std;


ControladorOferta::ControladorOferta() {
}

//Oferta
void ControladorOferta::insertarOferta(dtOferta dte) {
    oferta* o = new oferta();
    o->SetNroExp(dte.getNroExp());
    o->SetTitulo(dte.getTitulo()); 
    o->SetDescripcion(dte.getDescripcion());
    o->SetRangoSalarial(dte.getRangoSalarial());               
    o->SetHoras(dte.getHoras());              
    o->SetFechaInicio(dte.getFechaInicio());             
    o->SetFechaFin(dte.getFechaFin());               
    o->SetCantPuestos(dte.getCantPuestos());           
                 
    ManejadorOferta::getInstancia()->insertarOferta(o);
}


dtOferta* ControladorOferta::getDtOferta(string nroExp){
    return ManejadorOferta::getInstancia()->getOferta(nroExp)->GetDtOferta();
}


oferta* ControladorOferta::getOferta(string nroExp) {
    return ManejadorOferta::getInstancia()->getOferta(nroExp);
}


list<dtOferta*>* ControladorOferta::obtenerlistaOfertas() {
    return ManejadorOferta::getInstancia()->getListaOfertas();
}


list<dtOferta*>* ControladorOferta::listaOfertasActivas (){
    list<dtOferta*>* lista= ManejadorOferta::getInstancia()->getListaOfertasActivas();
    return lista;  
}
 
    
list<DtEstudiante*>* ControladorOferta::obtenerListaEstOf(string nroExp){
    oferta* o = getOferta(nroExp);
    list<DtEstudiante*>* lista= o->GetListaEstOf();
    return lista;    
}
   
//Entrevista
void ControladorOferta::altaEntrevista(string ci,date fecha){
    //aca hay q implementar
    cout << "hola";
}


//Empresa
void ControladorOferta::insertarEmpresa(dtEmpresa dte) {
    empresa* e = new empresa();
    e->setRut(dte.getRut());
    e->setNombre(dte.getNombre());
          
    ManejadorEmpresa::getInstancia()->insertarEmpresa(e);
}

list<dtEmpresa*>* ControladorOferta::listarEmpresas(){
   list<dtEmpresa*>* lista= ManejadorEmpresa::getInstancia()->getListEmp();
   return lista;   
}

//Destructor
ControladorOferta::~ControladorOferta() {
}
    