#include <string>
#include <iostream>
#include "Estudiante.h"
#include "DtEstudiante.h"

using namespace std;

Estudiante::Estudiante(){

}

Estudiante::Estudiante(const Estudiante& estudiante){
    this->nombre = estudiante.nombre;
    this->cedula = estudiante.cedula;
    this->apellido = estudiante.apellido;
    this->fechaNacimiento = estudiante.fechaNacimiento;
    this->totalCreditos = estudiante.totalCreditos;
    this->telefono = estudiante.telefono;
}

Estudiante::Estudiante(string cedula, string nombre, string apellido, DtFecha fechaNacimiento, string telefono){
    this->cedula = cedula;
    this->nombre = nombre;
    this->apellido = apellido;
    this->fechaNacimiento = fechaNacimiento;
    this->totalCreditos = 0;
    this->telefono = telefono;		
}

string Estudiante::getCedula() const{
    return this->cedula;
}

string Estudiante::getNombre() const{
        return this->nombre;
}

string Estudiante::getApellido() const{
        return this->apellido;
}

DtFecha Estudiante::getFechaNacimiento() const{
    return this->fechaNacimiento;
}

int Estudiante::getTotalCreditos() const{
    return this->totalCreditos;
}

string Estudiante::getTelefono() const{
    return this->telefono;
}

void Estudiante::setNombre(string nombre){
    this->nombre = nombre;
}

void Estudiante::setApellido(string apellido){
    this->apellido = apellido;
}

void Estudiante::setFechaNacimiento(DtFecha fecha){
    this->fechaNacimiento = fecha;
}

void Estudiante::setTelefono(string telefono){
    this->telefono = telefono;
}

DtEstudiante Estudiante::getDtEstudiante(){
    DtEstudiante dte = DtEstudiante(this->cedula, this->nombre, this->apellido, this->fechaNacimiento, this->telefono, this->totalCreditos, this->colSalvadas);
    return dte;
}

Estudiante::~Estudiante(){
}
