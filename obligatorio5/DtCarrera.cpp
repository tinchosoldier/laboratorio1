#include <string>
#include <iostream>
#include "DtCarrera.h"

using namespace std;

DtCarrera::DtCarrera(const DtCarrera& carrera){
    this->codigo = carrera.codigo;
    this->nombre = carrera.nombre;
    this->colAsignaturas = carrera.colAsignaturas;
}

DtCarrera::DtCarrera(int codigo,string nombre,vector<DtAsignatura> dtAsignaturas){
    this->codigo = codigo;
    this->nombre = nombre;
    this->colAsignaturas = dtAsignaturas;
}

int DtCarrera::getCodigo() const{
    return this->codigo;
}

string DtCarrera::getNombre() const{
    return this->nombre;
}

vector<DtAsignatura> DtCarrera::getDtAsignaturas(){
    return this->colAsignaturas;
}

ostream& operator << (ostream &o,DtCarrera &dtc) { 
    return o << "Codigo: " << dtc.getCodigo() << "\n" << "Nombre: " << dtc.getNombre(); 	
}
        
DtCarrera::~DtCarrera(){}