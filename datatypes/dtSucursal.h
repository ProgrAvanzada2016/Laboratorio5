#ifndef DTSUCURSAL_H
#define DTSUCURSAL_H

#include <string>

using namespace std;

class dtSucursal {
public:
    //Constructoras
    dtSucursal();
    dtSucursal(const dtSucursal& orig);
    dtSucursal(string nombre, string telefono, string direccion);
    
    //Geters
    string getNombre();
    string getTelefono();
    string getDireccion();
    
    //Destructor
    virtual ~dtSucursal();
private:
    string nombre;
    string telefono;
    string direccion;
};

#endif /* DTSUCURSAL_H */

