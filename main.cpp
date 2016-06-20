#include <cstdlib>

#include "datatypes/dtEmpresa.h"
#include "interfaces/IcontroladorOferta.h"
#include "fabricas/fabrica.h"
#include "conceptos/date.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string empresa;
    string sucursal;
    string sec;
   
    printf("Inicializando:\n");
    
    fabrica* fab = new fabrica();
    IcontroladorOferta* ice = fabrica::getIControladorOferta();
    IcontroladorEstudiante* icEstudiante = fabrica::getIControladorEstudiantes();
    
    //Inicializando datos de prueba
    fab->cargarDatos();
   
    //Funcion listar empresas
    list<dtEmpresa*>* empresas = ice->listarEmpresas();
    for (std::list<dtEmpresa*>::iterator it=empresas->begin(); it!=empresas->end(); ++it){
        dtEmpresa* emp = *it;
        cout << "Rut:" << emp->getRut() << " Nombre:" <<  emp->getNombre() << endl;
    }
    
    //Funcion listar sucurrsales
    cout << "Seleccione empresa: " << endl;
    cin >> empresa;
    cin.ignore(100, '\n');
    list<dtSucursal*>* sucursales = ice->listarSucursales(empresa);
    for (std::list<dtSucursal*>::iterator it=sucursales->begin(); it!=sucursales->end(); ++it){
        dtSucursal* suc = *it;
        cout << "Nombre:" << suc->getNombre() << endl;
    }
    
    //Funcion listar secciones
    cout << "Seleccione sucursal: " << endl;
    cin >> sucursal;
    cin.ignore(100, '\n');
    list<dtSeccion*>* secciones = ice->listarSecciones(sucursal);
    for (std::list<dtSeccion*>::iterator it=secciones->begin(); it!=secciones->end(); ++it){
        dtSeccion* secc = *it;
        cout << "Nombre:" << secc->getNombre() << endl;
    }
    
    //Funcion crear oferta
    string exp,titulo,desc;
    int min,max,cantP,iDia,iMes,iAno,fDia,fMes,fAno,horas;
    
    cout << "Ingrese seccion: " << endl;
    cin >> sec;
    cout << "Ingrese numero de expediente: " << endl;
    cin >> exp;
    cin.ignore(100, '\n');
    cout << "Ingrese ingrese titulo " << endl;
    cin >> titulo;
    cin.ignore(100, '\n');
    cout << "Ingrese descripcion: " << endl;
    cin >> desc;
    cin.ignore(100, '\n');
    cout << "Ingrese salario minimo: " << endl;
    cin >> min;
    cin.ignore(100, '\n');
    cout << "Ingrese salario maximo: " << endl;
    cin >> max;
    cin.ignore(100, '\n');
    cout << "Ingrese horas diarias: " << endl;
    cin >> horas;
    cin.ignore(100, '\n');
    cout << "Ingrese dia de inicio: " << endl;
    cin >> iDia;
    cin.ignore(100, '\n');
    cout << "Ingrese mes de inicio: " << endl;
    cin >> iMes;
    cin.ignore(100, '\n');
    cout << "Ingrese año de inicio: " << endl;
    cin >> iAno;
    cin.ignore(100, '\n');
    cout << "Ingrese dia de finalizacion: " << endl;
    cin >> fDia;
    cin.ignore(100, '\n');
    cout << "Ingrese mes de finalizacion: " << endl;
    cin >> fMes;
    cin.ignore(100, '\n');
    cout << "Ingrese año de finalizacion: " << endl;
    cin >> fAno;
    cin.ignore(100, '\n');
    cout << "Ingrese cantidad de puestos: " << endl;
    cin >> cantP;
    cin.ignore(100, '\n');
    
    //fechaI(iDia,iMes, iAno);date
    date fechaI(iDia,iMes, iAno);
    date fechaF(fDia,fMes, fAno);
    dtRango r(min,max);
    dtOferta o(exp,titulo,desc,r,horas,fechaI,fechaF,cantP);
    ice->insertarOferta(o);
    
    int op;
    string asig;
    do{
        cout << "Ingrese codigo asignatura requerida: " << endl;
        cin >> asig;
        cin.ignore(100, '\n');
        ice->insertarAsignaturaOferta(asig);
        
        cout << "1-> Ingreas mas asignaturas\n0->Salir " << endl;
        cin >> op;
    }while(op!=0);
    ice->agregarOfertaSeccion(sec);
    cout << "Oferta creada exitosamente" << endl;
    
    /*MADIFICAR DATOS ESTUDIANTE*/
    string cedula, apellido, nombre, telefono;
    int dd,mm,aaaa;
    cout<< "Ingrese cedula de estudiante a modificar: ";
    cin>> cedula;
    Estudiante* est = new Estudiante();
    est = icEstudiante->getEstudiante(cedula);
    cout<< "Estudiante: " << est->getApellido() << ", " << est->getNombre()<<endl;
    cout<< "Ingrese apellido: ";
    cin>> apellido;
    cout<< "Ingrese nombre: ";
    cin>> nombre;
    cout<< "Ingrese telefono: ";
    cin>> telefono;
    cout<< "Ingrese dia de nacimiento: ";
    cin>> dd;
    cout<< "Ingrese mes de nacimiento: ";
    cin>> mm;
    cout<< "Ingrese año de nacimiento: ";
    cin>> aaaa;
    date* fechaNac = new date(dd,mm,aaaa);
    DtEstudiante* estModificado = new DtEstudiante(est->getCi(), nombre, apellido, fechaNac, telefono);
    icEstudiante->modificarEstudiante(estModificado);
    cout<< "Estudiante modificado:" << endl;
    est = icEstudiante->getEstudiante(cedula);
    cout<< est->getApellido() << ", " << est->getNombre()<< ". Tel: " << est->getTelefono() << endl;
    cout<< "Fecha nacimiento: " << est->getfecha()->getDay() << "/"<< est->getfecha()->getMonth() << "/" << est->getfecha()->getYear();
    
    return 0;
}
