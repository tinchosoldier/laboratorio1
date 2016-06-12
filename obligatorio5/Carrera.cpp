#include <string>
#include <iostream>
#include "Carrera.h"

using namespace std;

Carrera::Carrera(const Carrera& carrera){
    this->codigo = carrera.codigo;
    this->nombre = carrera.nombre;
    this->colAsignaturas = carrera.colAsignaturas;
}

Carrera::Carrera(int codigo, string nombre, vector<DtAsignatura> asignaturas){
    this->codigo = codigo;
    this->nombre = nombre;
    vector<DtAsignatura>::iterator i;
    for(i=asignaturas.begin();i!=asignaturas.end();++i) {
        this->colAsignaturas[i->getCodigo()] = new Asignatura(i->getCodigo(),i->getNombre(),i->getCreditos());
    };
}

int Carrera::getCodigo() const{
    return this->codigo;
}

string Carrera::getNombre() const{
    return this->nombre;
}

void Carrera::setCodigo(int codigo){
    this->codigo = codigo;
}

void Carrera::setNombre(string nombre){
    this->nombre = nombre;
}

DtCarrera Carrera::getDtCarrera(){
    vector<DtAsignatura> dtAsignaturas = this->getAsignaturas();
    return DtCarrera(this->codigo,this->nombre,dtAsignaturas);
}

vector<DtAsignatura> Carrera::getAsignaturas(){
    vector<DtAsignatura> dtAsignaturas;
    map<int,Asignatura*>::iterator it;
    for(it = colAsignaturas.begin(); it != colAsignaturas.end(); ++it){
        DtAsignatura dta = it->second->getDtAsignatura();
        dtAsignaturas.push_back(dta);
    };
    return dtAsignaturas;
}

Carrera::~Carrera(){}