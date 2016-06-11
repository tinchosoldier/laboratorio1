#include <string>
#include <iostream>
#include "DtEstudiante.h"
#include "DtAsignatura.h"
#include "DtFecha.h"

using namespace std;

DtEstudiante::DtEstudiante(){}

DtEstudiante::DtEstudiante(const DtEstudiante& dte){
    this->cedula = dte.cedula;
    this->nombre = dte.nombre;
    this->apellido = dte.apellido;
    this->fechaNacimiento = DtFecha(dte.fechaNacimiento);
    this->telefono = dte.telefono;
    this->totalCreditos = dte.totalCreditos;
}

DtEstudiante::DtEstudiante(string cedula, string nombre, string apellido, DtFecha& fechaNacimiento, string telefono, int totalCreditos, map<int,Salva*>& colSalvadas){
    this->cedula = cedula;
    this->nombre = nombre;
    this->apellido = apellido;
    this->fechaNacimiento = fechaNacimiento;
    this->telefono = telefono;
    this->totalCreditos = totalCreditos;
    vector<DtAsignatura> colDtAsignaturas;
    map<int,Salva*>::iterator it;
    DtAsignatura dta;
    for (it = colSalvadas.begin(); it != colSalvadas.end(); ++it) {
            Asignatura* asignatura = (*it->second).getSalvada();
            dta = asignatura->getDtAsignatura(); 
            colDtAsignaturas.push_back(dta);
    };
    this->colSalvadas = colDtAsignaturas;
}

string DtEstudiante::getCedula() const{
    return this->cedula;
}

string DtEstudiante::getNombre() const{
    return this->nombre;
}

string DtEstudiante::getApellido() const{
    return this->apellido;
}

DtFecha DtEstudiante::getFechaNacimiento()const{
    return this->fechaNacimiento;
}

string DtEstudiante::getTelefono()const{
    return this->telefono;
}

int DtEstudiante::getTotalCreditos()const{
    return this->totalCreditos;
}

ostream& operator << (ostream &o,DtEstudiante &dte) { 
    return o << "Cedula: " << dte.getCedula() 
             << "\n" << "Nombre: " << dte.getNombre() 
             << "\n" << "Apellido: " << dte.getApellido() 
             << "\n" << "Fecha de nacimiento: " << dte.getFechaNacimiento().getDia() 
             << "/" << dte.getFechaNacimiento().getMes() << "/" 
             << dte.getFechaNacimiento().getAnio() << "\n" 
             << "Telefono: " << dte.getTelefono() << "\n" 
             << "Total de creditos: " << dte.getTotalCreditos();  
}

DtEstudiante::~DtEstudiante(){}