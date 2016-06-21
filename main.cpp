#include <cstdlib>

#include "fabricas/fabrica.h"

using namespace std;

void imprimirMenu();
void enterParaContinuar();
void inicializar();
void altaOfertaLaboral();
void altaEtrevista();
void inscripcionOfertaLaboral();
void listarOfertasActivas();
void modificarEstudiante();


bool inicializado;
IcontroladorOferta* ico;
IcontroladorEstudiante* ice;

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
                   // inscripcionOfertaLaboral();
                } while (0);
                enterParaContinuar();
                break;
            case 4:
                do {
//                    listarOfertasActivas();
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
                    modificarEstudiante();
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
        ico = fabrica::getIControladorOferta();
        ice = fabrica::getIControladorEstudiantes();
        
        //Empresas
        ico->insertarEmpresa(dtEmpresa("22","ANCAP"));
        ico->insertarEmpresa(dtEmpresa("33","UTE"));
        printf("OK EMPRESAS\n");
        
        //Asignaturas
        ico->insertarAsignatura(dtAsignatura("1","MATEMATICA",15));
        ico->insertarAsignatura(dtAsignatura("2","GEOMETRIA",10));
        ico->insertarAsignatura(dtAsignatura("3","FISICA",25));
        printf("OK ASIGNATURAS\n");
        
        //Estudiantes
        date* miFecha = new date(12,12,2016);
        ice->insertarEstudiante(DtEstudiante("1","Leo","Masliah", miFecha, "09957241"));
        ice->insertarEstudiante(DtEstudiante("2","Fyodor","Dostoyevsky", miFecha, "098423754"));
        ice->insertarEstudiante(DtEstudiante("3","Charles","Bukowski", miFecha, "095723123"));
        ice->insertarEstudiante(DtEstudiante("4","Eduardo","Galeano", miFecha, "091889922"));
        ice->insertarEstudiante(DtEstudiante("5","Hernan","Casciari", miFecha, "094436750"));
        ice->insertarEstudiante(DtEstudiante("6","Jared","Diamond", miFecha, "099215347"));
        ice->insertarEstudiante(DtEstudiante("7","Jorge Luis","Borges", miFecha, "097421290"));
        printf("OK ESTUDIANTES\n");
        
        //Carreras
        carrera* car1 = new carrera("1","Ingenieria");
        carrera* car2 = new carrera("2","Derecho");
        carrera* car3 = new carrera("3","Arquitectura");
        ice->insertarCarrera(car1);
        ice->insertarCarrera(car2);
        ice->insertarCarrera(car3);
        inicializado = true;
        printf("OK CARRERAS\n");
    }
}

//1 Crea una oferta laboral
void altaOfertaLaboral() {
    string empresa;
    string sucursal;
    string sec;
    
    //Funcion listar empresas
    list<dtEmpresa*>* empresas = ico->listarEmpresas();
    for (std::list<dtEmpresa*>::iterator it=empresas->begin(); it!=empresas->end(); ++it){
        dtEmpresa* emp = *it;
        cout << "Rut:" << emp->getRut() << " Nombre:" <<  emp->getNombre() << endl;
    }
    
    //Funcion listar sucurrsales
    cout << "Seleccione empresa: " << endl;
    cin >> empresa;
    cin.ignore(100, '\n');
    list<dtSucursal*>* sucursales = ico->listarSucursales(empresa);
    for (std::list<dtSucursal*>::iterator it=sucursales->begin(); it!=sucursales->end(); ++it){
        dtSucursal* suc = *it;
        cout << "Nombre:" << suc->getNombre() << endl;
    }
    
    //Funcion listar secciones
    cout << "Seleccione sucursal: " << endl;
    cin >> sucursal;
    cin.ignore(100, '\n');
    list<dtSeccion*>* secciones = ico->listarSecciones(sucursal);
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
    ico->insertarOferta(o);
    
    int op;
    string asig;
    do{
        cout << "Ingrese codigo asignatura requerida: " << endl;
        cin >> asig;
        cin.ignore(100, '\n');
        ico->insertarAsignaturaOferta(asig);
        
        cout << "1-> Ingreas mas asignaturas\n0->Salir " << endl;
        cin >> op;
    }while(op!=0);
    
    ico->agregarOfertaSeccion(sec);
    cout << "Oferta creada exitosamente" << endl;
}

//2 Crea una netrevista
void altaEtrevista() {
    cout << "implementado...." << endl;
}


//3 Inscripcion oferta laboral
/*void inscripcionOfertaLaboral(){
    string oferta, estudiante;
    
    listarOfertasActivas();
    cout << "Seleccione una oferta: " << endl;
    cin >> oferta;
    cin.ignore(100, '\n');
    
    list<DtEstudiante*>* listaEst = ico->obtenerListaEstOf(oferta);
    for (std::list<DtEstudiante*>::iterator it=listaEst->begin(); it!=listaEst->end(); ++it){
        DtEstudiante* estudiantes = *it;
        cout << "Cedula: " << estudiantes->GetCi() << " Nombre: " << estudiantes->GetNombre() << " Apellido: " << estudiantes->GetApellido() << endl;
    }
    
    cout << "Seleccione una estudiante: " << endl;
    cin >> estudiante;
    cin.ignore(100, '\n');
    ico->inscribeEstudianteEnOferta(estudiante);
    cout << "Estudiante inscripto con exito" << endl;
}

//4 Listar ofertas activas
void listarOfertasActivas() {
    list<dtOferta*>* ofActivas = ico->listaOfertasActivas();
    for (std::list<dtOferta*>::iterator it=ofActivas->begin(); it!=ofActivas->end(); ++it){
        dtOferta* ofAct = *it;
        cout << "Nro Expediente: " << ofAct->getNroExp() <<" Titulo: "<<ofAct->getTitulo()<< endl;
    }
}*/

//7 Modificar estudiante
void modificarEstudiante() {
    string cedula, apellido, nombre, telefono;
    int car;
    int dd,mm,aaaa;
    cout<< "Ingrese cedula de estudiante a modificar: ";
    cin>> cedula;
    Estudiante* est = ice->getEstudiante(cedula);
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
    ice->modificarEstudiante(estModificado);
    cout<< "Estudiante modificado:" << endl;
    est = ice->getEstudiante(cedula);
    cout<< est->getApellido() << ", " << est->getNombre()<< ". Tel: " << est->getTelefono() << endl;
    cout<< "Fecha nacimiento: " << est->getfecha()->getDay() << "/"<< est->getfecha()->getMonth() << "/" << est->getfecha()->getYear()<< endl;
    
    cout<<"Desea agregar carrera al estudiante? 1 = SI, 0 = NO: ";
    cin>>car;
    if(car == 1){
        //LISTAR CARRERAS
        list<dtCarrera*>* carreras = ice->listarCarreras();
            for(std::list<dtCarrera*>::iterator it=carreras->begin(); it!=carreras->end(); ++it){
                dtCarrera* car1 = *it;
                cout << "Codigo: "<< car1->getCodigo() <<" - Nombre:" << car1->getNombre()<< endl;
                } 
        int op;
        string codCar;
        do{
            
            cout<< "tamaño lista: "<<ice->getEstudiante(est->getCi())->getCarrerasEst().size()<< endl;
            cout << "Seleccione una carrera(codigo): " << endl;
            cin >> codCar;
            carrera* carr = ice->getCarrera(codCar);
            //carr = ice->getCarrera(codCar);
            ice->agregarCarreraEst(est->getCi(),carr);
            cout<<"Carrera Agregada: " << endl;
            cout<<carr->getCodigo()<< " - "<<carr->getNombre() << endl;
            cout<< "tamaño lista: "<< ice->getEstudiante(est->getCi())->getCarrerasEst().size()<<endl;
            cout << "1-> Ingreas mas carreras\n 0->Salir " << endl;
            cin >> op;
        }while(op!=0);
    }
        
        
    enterParaContinuar();
}


    