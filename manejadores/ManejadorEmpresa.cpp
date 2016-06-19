
#include "ManejadorEmpresa.h"

ManejadorEmpresa* ManejadorEmpresa::instancia = NULL;  

ManejadorEmpresa* ManejadorEmpresa::getInstancia() {
    if (!instancia){
        instancia = new ManejadorEmpresa;   
    }
    return instancia;
}

void ManejadorEmpresa::insertarEmpresa(empresa* e) {
      empresas.insert(pair<string,empresa*>(e->getRut(),e));
}

empresa* ManejadorEmpresa::getEmpresa(string rut) {
    return empresas.find(rut)->second;
}

list<dtEmpresa*>* ManejadorEmpresa::getListEmp(){
    list<dtEmpresa*>* result = new list<dtEmpresa*>;
    for (std::map<string, empresa*>::iterator it=empresas.begin(); it!=empresas.end(); ++it){ 
        result->push_front(it->second->getDtEmpresa());
    }
    return result;
}
