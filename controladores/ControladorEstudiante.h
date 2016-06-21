#ifndef CONTROLADORESTUDIANTE_H
#define CONTROLADORESTUDIANTE_H
#include "../interfaces/IcontroladorEstudiante.h"
#include "../manejadores/ManejadorCarrera.h"
#include "../conceptos/asignatura.h"
#include "../conceptos/carrera.h"
#include "../conceptos/Estudiante.h"
#include "../datatypes/dtCarrera.h"
using namespace std;


class ControladorEstudiante : public IcontroladorEstudiante {
public:
    ControladorEstudiante();
    virtual ~ControladorEstudiante();

    //estudiante
    virtual void insertarEstudiante(DtEstudiante);
    virtual void modificarEstudiante(DtEstudiante* dte);
    virtual list<DtEstudiante*>* listarEstudiantes();
    virtual DtEstudiante* getDataEstudiante(string);
    virtual Estudiante* getEstudiante(string);

    //carrera
    virtual carrera* getCarrera(string codigo);
    virtual asignatura* getAsignatura(string codigo);
    virtual void insertarAsignatura(asignatura*);
    virtual void insertarCarrera(carrera*);
    virtual void agregarCarreraEst(string ci,carrera* c);
    virtual list<dtCarrera*>* listarCarreras();
private:
    
    

};

#endif /* ESTUDIANTECONTROLLER_H */

