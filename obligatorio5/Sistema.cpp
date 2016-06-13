#include "Sistema.h"

Sistema* Sistema::sis = NULL;

Sistema::Sistema(){
    cargarDatos();
}

DtFecha Sistema::getFecha() const{
    return this->fecha;
}

void Sistema::setFecha(DtFecha fecha){
    this->fecha = fecha;
}

void Sistema::modificarFecha(){
    cout << "Cambiar la fecha sistema (dd mm aaaa): " << endl;
    int dia, mes, anio;
    cin >> dia >> mes >> anio;
    try{
        this->setFecha(DtFecha(dia, mes, anio));
        cout << "La fecha ha sido asignada con exito.";
    } catch (exception &err){
        cout << "Fecha invalida.";
    }
    cout << endl << endl;
}

vector<DtOferta> Sistema::getDtOfertas(){
    vector<DtOferta> dtOfertas;
    map<int,Oferta*>::iterator it;
    for (it = colOfertas.begin(); it != colOfertas.end(); ++it) {
        DtOferta dto = it->second->getDtOferta(); 
        dtOfertas.push_back(dto);
    };
    return dtOfertas;
}

Oferta* Sistema::getOferta(int numExp){
    return this->colOfertas[numExp];
}

void Sistema::agregarOferta(Oferta* o){
    this->colOfertas[o->getNumExpediente()] = o;
}

void Sistema::destruirOferta(int numExp){
    Oferta* o = this->colOfertas[numExp];
    Seccion* s = o->getSeccion();
    s->removerOferta(o);
    this->colOfertas.erase(numExp);
    delete o;
}

vector<DtEmpresa> Sistema::getDtEmpresas(){
    vector<DtEmpresa> dtEmpresas;
    map<string,Empresa*>::iterator it;
    for(it = colEmpresas.begin(); it != colEmpresas.end(); ++it){
        DtEmpresa dte = it->second->getDtEmpresa();
        dtEmpresas.push_back(dte);
    };
    return dtEmpresas;
}

Empresa* Sistema::getEmpresa(string rut){
    return colEmpresas[rut];
}

void Sistema::agregarEmpresa(Empresa* e){
    this->colEmpresas[e->getRut()] = e;
}

vector<DtEstudiante> Sistema::getDtEstudiantes(){
    vector<DtEstudiante> dtEstudiantes;
    map<string,Estudiante*>::iterator it;
    for (it = colEstudiantes.begin(); it != colEstudiantes.end(); ++it)
    {
        DtEstudiante dte = it->second->getDtEstudiante();
        dtEstudiantes.push_back(dte);
    };
    return dtEstudiantes;
}

Estudiante* Sistema::getEstudiante(string cedula){
    return this->colEstudiantes[cedula];
}

void Sistema::agregarEstudiante(Estudiante* e){
    this->colEstudiantes[e->getCedula()] = e;
}

vector<DtAsignatura> Sistema::getDtAsignaturas(){
    vector<DtAsignatura> dtAsignatura;
    map<int,Asignatura*>::iterator it;
    for (it = colAsignaturas.begin(); it != colAsignaturas.end(); ++it){
        DtAsignatura dta = it->second->getDtAsignatura(); 
        dtAsignatura.push_back(dta);
    };
    return dtAsignatura;
}

Asignatura* Sistema::getAsignatura(int codigo){
    return colAsignaturas[codigo];
}

void Sistema::agregarAsignatura(Asignatura* a){
    this->colAsignaturas[a->getCodigo()] = a;
}

vector<DtCarrera> Sistema::getDtCarreras(){
    vector<DtCarrera> dtCarrera;
    map<int,Carrera*>::iterator it;
    for (it = colCarreras.begin(); it != colCarreras.end(); ++it){
        DtCarrera dtc = it->second->getDtCarrera(); 
        dtCarrera[dtc.getCodigo()] = dtc;
    };
    return dtCarrera;
}

Carrera* Sistema::getCarrera(int codigo){
    return colCarreras[codigo];
}

void Sistema::agregarCarrera(Carrera* c){
    this->colCarreras[c->getCodigo()] = c;
}

Sistema* Sistema::getInstance(){
    if(sis == NULL) {
        sis = new Sistema();
    }
    return sis;  
}

Sistema::~Sistema(){
    map<int,Oferta*>::iterator ito;
    for (ito = this->colOfertas.begin(); ito != this->colOfertas.end(); ++ito){
        delete ito->second;
    }
    map<string,Empresa*>::iterator ite;
    for(ite = this->colEmpresas.begin(); ite != this->colEmpresas.end(); ++ite){
        delete ite->second;
    }
    map<string,Estudiante*>::iterator ites;
    for (ites = colEstudiantes.begin(); ites != colEstudiantes.end(); ++ites){
        delete ites->second;
    }
    map<int,Asignatura*>::iterator ita;
    for (ita = colAsignaturas.begin(); ita != colAsignaturas.end(); ++ita){
        delete ita->second;
    }
    map<int,Carrera*>::iterator itc;
    for (itc = colCarreras.begin(); itc != colCarreras.end(); ++itc){
        delete itc->second;
    }
}

void Sistema::cargarDatos(){

    // Coleccion de DtOferta
/*    vector<DtOferta> colOferta2;
    vector<DtOferta> colOferta10;
    vector<DtOferta> colOferta15;
    vector<DtOferta> colOferta22;
    

    Oferta* O1 = new Oferta(45896,"Auditor de seguridad part-time junior","Segurol S.A. busca estudiantes de Ingenieria en Computacion para unirse a su equipo. Se requiere un nivel minimo de conocimiento en seguridad informatica y programacion. Interesados enviar cv a oportunidades@segurol.com.uy",20,2000,3000,DtFecha(01,6,2015),DtFecha(20,7,2015),5,colAsignaturas1, SE2);
    Oferta* O2 = new Oferta(12356,"Ayudante de Ingeniero","Estamos buscando estudiantes avanzados de Ingenieria Electrica con perfil potencia. Es imprescindible tener disponibilidad para viajar al interior del pais una vez por mes. Se pagan viaticos ademas de sueldo. Llamar al 25225323 int 1205 para mas detalles.",30,4000,5000,DtFecha(20,5,2015),DtFecha(30,6,2015),2,colAsignaturas2,SE10);
    Oferta* O3 = new Oferta(88890,"Desarrollador C++","Buscamos desarrollador C++ para importante proyecto internacional. Llenar formulario con datos personales y cv en minisoft.uy/careers.",40,5000,6000,DtFecha(5,6,2015,0,0),DtFecha(6,8,2015,0,0),4,colAsignaturas3,SE15);
    Oferta* O4 = new Oferta(49563,"Estudiantes para dictar clases de Calculo I y II","Buscamos estudiantes de Ingenieria con Calculo 1 y 2 aprobadas. Deben tener disponibilidad horaria y gusto por enseñar. Enviar mail a academiayotexplico@gmail.com.",5,500,2000,DtFecha(10,9,2015),DtFecha(20,12,2015),10,colAsignaturas4,SE22);
    
    mO -> agregarOferta(of1);
    DtOferta dtO1 = of1->getDtOferta();
    vector<DtOferta> colOferta2;
    colOferta2.push_back(dtO1);

    mO -> agregarOferta(of2);
    DtOferta dtO2 = of2->getDtOferta();
    vector<DtOferta> colOferta10;
    colOferta10.push_back(dtO2);

    mO -> agregarOferta(of3);
    DtOferta dtO3 = of3->getDtOferta();
    vector<DtOferta> colOferta15;
    colOferta15.push_back(dtO3);

    mO -> agregarOferta(of4);
    DtOferta dtO4 = of4->getDtOferta();
    vector<DtOferta> colOferta22;
    colOferta22.push_back(dtO4);    
*/    
    
    vector<DtSeccion> colSU1;
    vector<DtSeccion> colSU2;
    vector<DtSeccion> colSU3;
    vector<DtSeccion> colSU4;
    vector<DtSeccion> colSU5;
    vector<DtSeccion> colSU6;
    vector<DtSeccion> colSU7;
    
    vector<DtOferta> colOferta;
    
    // Creo los DtSeccion
    DtSeccion SE1 = DtSeccion("Contaduria",101,colOferta);
    DtSeccion SE2 = DtSeccion("Recursos humanos",102,colOferta);
    DtSeccion SE3 = DtSeccion("Recepcion",103,colOferta);
    DtSeccion SE4 = DtSeccion("Desarrollo",104,colOferta);
    DtSeccion SE5 = DtSeccion("Pentesting",105,colOferta);
    DtSeccion SE6 = DtSeccion("Marketing",1201,colOferta);
    DtSeccion SE7 = DtSeccion("Atencion al cliente",1202,colOferta);
    DtSeccion SE8 = DtSeccion("Tesoreria",1203,colOferta);
    DtSeccion SE9 = DtSeccion("Ventas",1204,colOferta);
    DtSeccion SE10 = DtSeccion("Seccion tecnica",1205,colOferta);
    DtSeccion SE11 = DtSeccion("Seccion tecnica",1009,colOferta);
    DtSeccion SE12 = DtSeccion("I+D",1008,colOferta);
    DtSeccion SE13 = DtSeccion("Recepcion",1000,colOferta);
    DtSeccion SE14 = DtSeccion("Secretaria",100,colOferta);
    DtSeccion SE15 = DtSeccion("Desarrollo",1001,colOferta);
    DtSeccion SE16 = DtSeccion("Testing",1002,colOferta);
    DtSeccion SE17 = DtSeccion("Secretaria",100,colOferta);
    DtSeccion SE18 = DtSeccion("Desarrollo",1001,colOferta);
    DtSeccion SE19 = DtSeccion("Testing",1002,colOferta);
    DtSeccion SE20 = DtSeccion("Laboratorio",10,colOferta);
    DtSeccion SE21 = DtSeccion("Atencion comercial",11,colOferta);
    DtSeccion SE22 = DtSeccion("Direccion",101,colOferta);
    DtSeccion SE23 = DtSeccion("Inscripciones",102,colOferta);
    
    colSU1.push_back(SE1);
    colSU1.push_back(SE2);
    colSU1.push_back(SE3);
    colSU1.push_back(SE4);
    colSU1.push_back(SE5);
    
    colSU2.push_back(SE6);
    colSU2.push_back(SE7);
    colSU2.push_back(SE8);
    colSU2.push_back(SE9);
    colSU2.push_back(SE10);
    
    colSU3.push_back(SE11);
    colSU3.push_back(SE12);
    colSU3.push_back(SE13);
    
    colSU4.push_back(SE14);
    colSU4.push_back(SE15);
    colSU4.push_back(SE16);
    
    colSU5.push_back(SE17);
    colSU5.push_back(SE18);
    colSU5.push_back(SE19);
    
    colSU6.push_back(SE20);
    colSU6.push_back(SE21);
    
    colSU7.push_back(SE22);
    colSU7.push_back(SE23);
    
    // Colecciones de sucursales
    vector<DtSucursal> colSucursal1;
    vector<DtSucursal> colSucursal2;
    vector<DtSucursal> colSucursal3;
    vector<DtSucursal> colSucursal4;
    vector<DtSucursal> colSucursal5;
    
    // Creo DtSucursales
    DtSucursal SU1 = DtSucursal("Casa central","24598765","Ciudad Vieja", colSU1);
    DtSucursal SU2 = DtSucursal("Sucursal comercial","25225323","Malvin", colSU2);
    DtSucursal SU3 = DtSucursal("Sucursal San Carlos","42668350","San Carlos", colSU3);
    DtSucursal SU4 = DtSucursal("Sede Montevideo","25468932","Buceo", colSU4);
    DtSucursal SU5 = DtSucursal("Sede Ciudad de la Costa","43764232","Solymar", colSU5);
    DtSucursal SU6 = DtSucursal("Oficina central","25495878","Centro", colSU6);
    DtSucursal SU7 = DtSucursal("Academia","24594565","Parque Rodo", colSU7);

    // Cargo las colecciones con los DtSucursal
    colSucursal1.push_back(SU1);
    colSucursal2.push_back(SU2);
    colSucursal2.push_back(SU3);
    colSucursal3.push_back(SU4);
    colSucursal3.push_back(SU5);
    colSucursal4.push_back(SU6);
    colSucursal5.push_back(SU7);
    
    // Creo las empresas
    Empresa* E1 = new Empresa("1112335684","Segurol S.A.",colSucursal1);
    Empresa* E2 = new Empresa("5464897986","Ingenieros Electricos Unidos",colSucursal2);
    Empresa* E3 = new Empresa("1265498765","MiniSoft Uy",colSucursal3);
    Empresa* E4 = new Empresa("1298865497","RoboTI",colSucursal4);
    Empresa* E5 = new Empresa("1326548654","Academia Yotexplico",colSucursal5);    
    
}
