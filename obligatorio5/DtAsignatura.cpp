#include <string>
#include <iostream>
#include "DtAsignatura.h"

using namespace std;

DtAsignatura::DtAsignatura(){}

DtAsignatura::DtAsignatura(const DtAsignatura& asignatura){
    this->codigo=asignatura.codigo;
    this->nombre=asignatura.nombre;
    this->creditos=asignatura.creditos;
}

DtAsignatura::DtAsignatura(int codigo,string nombre,int creditos){
    this->codigo=codigo;
    this->nombre=nombre;
    this->creditos=creditos;
}

int DtAsignatura::getCodigo() const{
    return this->codigo;
}

string DtAsignatura::getNombre() const{
    return this->nombre;
}

int DtAsignatura::getCreditos() const{
    return this->creditos;
}
 
ostream& operator << (ostream &o,DtAsignatura &dtA) { 
    return o << "Codigo: " << dtA.getCodigo() << "\n" << "Nombre: " << dtA.getNombre() << "\n" << "Creditos: " << dtA.getCreditos(); 	
}

bool DtAsignatura::operator() (const DtAsignatura& rdt) const{
    return this->getCodigo()<rdt.getCodigo();
}

DtAsignatura::~DtAsignatura(){}
