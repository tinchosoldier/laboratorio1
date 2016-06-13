#include <string>
#include <iostream>
#include "Asignatura.h"

using namespace std;

Asignatura::Asignatura(){
    this->codigo = 0;
    this->nombre = " ";
    this->creditos = 0;
}

Asignatura::Asignatura(const Asignatura& asignatura){
    this->codigo = asignatura.codigo;
    this->nombre = asignatura.nombre;
    this->creditos = asignatura.creditos;
}

Asignatura::Asignatura(int codigo, string nombre, int creditos){
    this->codigo = codigo;
    this->nombre = nombre;
    this->creditos = creditos;
}

int Asignatura::getCodigo() const{
    return this->codigo;
}

string Asignatura::getNombre() const{
    return this->nombre;
}

int Asignatura::getCreditos() const{
    return this->creditos;
}
    
void Asignatura::setCodigo(int codigo){
    this->codigo = codigo;
}

void Asignatura::setNombre(string nombre){
    this->nombre = nombre;
}

void Asignatura::setCreditos(int creditos){
    this->creditos = creditos;
}

DtAsignatura Asignatura::getDtAsignatura(){
    DtAsignatura dta;
    return dta = DtAsignatura(this->codigo, this->nombre, this->creditos);
}

Asignatura::~Asignatura(){}