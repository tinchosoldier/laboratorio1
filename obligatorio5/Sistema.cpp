#include "Sistema.h"

Sistema* Sistema::sis = NULL;

Sistema::Sistema(){}

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

void Sistema::menu(){
    cout << "Fecha del sistema: " << this->fecha << endl << endl;
    cout << "s) Configurar sistema" << endl;
    cout << "2) Alta oferta laboral" << endl;
    //cout << "3) Alta entrevista" << endl;
    //cout << "4) Inscripcion oferta laboral" << endl;
    //cout << "5) Listar ofertas vigentes" << endl;
    //cout << "6) Consultar datos de estudiante" << endl;
    //cout << "7) Asignacion de oferta a estudiante" << endl;
    //cout << "8) Modificar estudiante" << endl;
    //cout << "9) Modificar llamado" << endl;
    //cout << "10) Dar de baja llamado" << endl << endl;
    cout << "0) Salir" << endl << endl;
    cout << "> ";
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
