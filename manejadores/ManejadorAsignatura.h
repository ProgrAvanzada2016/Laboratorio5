 #ifndef MANEJADORASIGNATURA_H
#define MANEJADORASIGNATURA_H

#include <map>
#include <list>
#include <string>
#include "../conceptos/asignatura.h"
#include"../datatypes/dtAsignatura.h"

class ManejadorAsignatura {
public:
    static ManejadorAsignatura* getInstancia();
    
    void insertarAsignatura(asignatura*);
    asignatura* getAsignatura(string codigo);
    bool existeAsignatura(string codigo);
    list<dtAsignatura*>* getListAsign();
private:
    static ManejadorAsignatura* instancia;
    map<string, asignatura*> asignaturas;
};

#endif /* MANEJADORASIGNATURA_H */

