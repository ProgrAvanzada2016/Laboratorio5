#ifndef CONTROLADOROFERTA_H
#define CONTROLADOROFERTA_H

#include "../interfaces/IcontroladorOferta.h"

using namespace std;

//#include "../interfaces/IcontroladorOferta.h"
class ControladorOferta: public IcontroladorOferta {
public:
    ControladorOferta();    
    
    //Ofertas
    virtual void insertarOferta(dtOferta);
    virtual list<dtOferta*>* obtenerlistaOfertas();
    virtual dtOferta* getDtOferta(string nroExp);
    virtual oferta* getOferta(string nroExp);
    virtual list<dtOferta*>* listaOfertasActivas ();
    virtual list<DtEstudiante*>* obtenerListaEstOf(string nroExp);
    
    //Entrevistas
    virtual void altaEntrevista(string ci,date fecha);
    
    //Empresas
    virtual void insertarEmpresa(dtEmpresa);
    virtual list<dtEmpresa*>* listarEmpresas();
    
    virtual ~ControladorOferta();
private:
      

};

#endif /* CONTROLADOROFERTA_H */




    
    

