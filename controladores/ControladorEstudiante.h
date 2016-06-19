#ifndef CONTROLADORESTUDIANTE_H
#define CONTROLADORESTUDIANTE_H
using namespace std;

#include "../interfaces/IcontroladorEstudiante.h"
class ControladorEstudiante : public IcontroladorEstudiante {
public:
    ControladorEstudiante();
    virtual ~ControladorEstudiante();

    
    virtual void insertarEstudiante(DtEstudiante);
    virtual void modificarEstudiante(DtEstudiante* dte);
    virtual list<DtEstudiante*>* listarEstudiantes();
    virtual DtEstudiante* getDataEstudiante(string);
    virtual Estudiante* getEstudiante(string);

private:
    
    

};

#endif /* ESTUDIANTECONTROLLER_H */

