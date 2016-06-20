#include <cstdlib>

#include "datatypes/dtEmpresa.h"
#include "interfaces/IcontroladorOferta.h"
#include "fabricas/fabrica.h"

using namespace std;

void imprimirMenu();
void enterParaContinuar();
void inicializar();
void altaOfertaLaboral();
void altaEtrevista();

bool inicializado;
IcontroladorOferta* ice;

int main(int argc, char** argv) {
    int menu_op;
      
    do {
        imprimirMenu();
        cin>>menu_op;
        cin.ignore(100, '\n');
        fflush(stdin);

        switch(menu_op) {
            case 0:
                break;
            case 1:
                do {
                    altaOfertaLaboral();
                 } while (0);
                enterParaContinuar();
                break;
            case 2:
                do {
                    altaEtrevista();
                } while (0);
                enterParaContinuar();
                break;
            case 3:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            case 4:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            case 5:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            case 6:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            case 7:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            case 8:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            case 9:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            case 10:
                do {
                    inicializar();
                } while (0);
                enterParaContinuar();
                break;
            default:
		cout<<"Opcion no valida, intente nuevamente"<<endl;
                enterParaContinuar();
        }
    }while(menu_op != 0);
    return 0;
}

//Despliega el manu 
void imprimirMenu() {

    system("clear");
    cout<<"MENU DE OPCIONES" <<endl << endl;
    cout<<"0  - SALIR" << endl;
    cout<<"1  - ALTA OFERTA LABORAL" << endl;
    cout<<"2  ­ ALTA ENTREVISTA" << endl;
    cout<<"3  - INSCRIPCION OFERTA LABORAL" << endl;
    cout<<"4  - LISTAR OFERTAS ACTIVAS" << endl;
    cout<<"5  ­ CONSULTAR DATOS ESTUDIANTE" << endl;
    cout<<"6  - ASIGNACION DE OFERTA A ESTUDIANTE" << endl;
    cout<<"7  - MODIFICAR ESTUDIANTE" << endl;
    cout<<"8  - MODIFICAR LLAMADO"<< endl;
    cout<<"9  ­ DAR DE BAJA LLAMADO" << endl;
    cout<<"10 - INICIALIZAR" << endl << endl;
    cout<<"Ingrese la opcion deseada: ";
}

//Espera a que se ingrese un eneter para continuar
void enterParaContinuar() {
    int c;

    cout<<endl<<"Presione ENTER para continuar... ";
    fflush(stdout);
    do c = getchar(); while ((c != '\n') && (c != EOF));
}

//Inicializando datos de prueba
void inicializar(){
    if (!inicializado) {
        printf("Inicializando.... :\n");
        ice = fabrica::getIControladorOferta();

        ice->insertarEmpresa(dtEmpresa("22","ANCAP"));
        ice->insertarEmpresa(dtEmpresa("33","UTE"));
        ice->insertarAsignatura(dtAsignatura("1","MATEMATICA",15));
        ice->insertarAsignatura(dtAsignatura("2","GEOMETRIA",10));
        ice->insertarAsignatura(dtAsignatura("3","FISICA",25));
        
        inicializado = true;
        printf("OK INICIALIZADO\n");
    }
}

//Crea una oferta laboral
void altaOfertaLaboral() {
    string empresa;
    string sucursal;
    string sec;
    
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
}

//Crea una netrevista
void altaEtrevista() {
    cout << "implementado...." << endl;
}
