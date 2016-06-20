#ifndef CONTROLADORESTUDIANTE_H
#define CONTROLADORESTUDIANTE_H
#include "../interfaces/IcontroladorEstudiante.h"
#include "../manejadores/ManejadorCarrera.h"
#include "../conceptos/asignatura.h"
#include "../conceptos/carrera.h"
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
private:
    
    

};

#endif /* ESTUDIANTECONTROLLER_H */

