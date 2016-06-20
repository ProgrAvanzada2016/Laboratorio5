#include "ManejadorAsignatura.h"

ManejadorAsignatura* ManejadorAsignatura::instancia = NULL;  

ManejadorAsignatura* ManejadorAsignatura::getInstancia() {
    if (!instancia){
        instancia = new ManejadorAsignatura;   
    }
    return instancia;
}

void ManejadorAsignatura::insertarAsignatura(asignatura* a) {
      asignaturas.insert(pair<string,asignatura*>(a->getCodigo(),a));
}

asignatura* ManejadorAsignatura::getAsignatura(string codigo) {
    return asignaturas.find(codigo)->second;
}

bool ManejadorAsignatura::existeAsignatura(string codigo){
    std::map<string,asignatura*>::iterator it;
    
    it = asignaturas.find(codigo);
    if (it != asignaturas.end()) {
        return true;
    }else{
        return false;
    }
}

list<dtAsignatura*>* ManejadorAsignatura::getListAsign(){
    list<dtAsignatura*>* result = new list<dtAsignatura*>;
    for (std::map<string, asignatura*>::iterator it=asignaturas.begin(); it!=asignaturas.end(); ++it){ 
        result->push_front(it->second->getDtAsignatura());
    }
    return result;
}

