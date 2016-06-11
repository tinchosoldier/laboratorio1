#include <string>
#include <iostream>

#include "DtOferta.h"

using namespace std;

DtOferta::DtOferta(){

}

DtOferta::DtOferta(const DtOferta& dto){
    this->numExpediente = dto.numExpediente;
    this->titulo = dto.titulo;
    this->descripcion = dto.descripcion;
    this->cantHorasSemanales = dto.cantHorasSemanales;
    this->salarioMin = dto.salarioMin;
    this->salarioMax = dto.salarioMax;
    this->fechaInicio = DtFecha(dto.fechaInicio);
    this->fechaFin = DtFecha(dto.fechaFin);
    this->cantPuestos = dto.cantPuestos;
    this->colDtAsignaturas = dto.colDtAsignaturas;
}

DtOferta::DtOferta(int numExpediente, string titulo, string descripcion, int cantHorasSemanales, float salarioMin, float salarioMax, DtFecha& fechaInicio, DtFecha& fechaFin, int cantPuestos, vector<DtAsignatura> dtAsignaturas){
    this->numExpediente = numExpediente;
    this->titulo = titulo;
    this->descripcion = descripcion;
    this->cantHorasSemanales = cantHorasSemanales;
    this->salarioMin = salarioMin;
    this->salarioMax = salarioMax;
    this->fechaInicio = fechaInicio;
    this->fechaFin = fechaFin;
    this->cantPuestos = cantPuestos;
    this->colDtAsignaturas = dtAsignaturas;
}

int DtOferta::getNumExpediente() const{
    return this->numExpediente;
}

string DtOferta::getTitulo() const{
    return this->titulo;
}

string DtOferta::getDescripcion() const{
    return this->descripcion;
}

int DtOferta::getCantHorasSemanales() const{
    return this->cantHorasSemanales;
}

float DtOferta::getSalarioMin() const{
    return this->salarioMin;
}

float DtOferta::getSalarioMax() const{
    return this->salarioMax;
}

DtFecha DtOferta::getFechaInicio() const{
    return this->fechaInicio;
}

DtFecha DtOferta::getFechaFin() const{
    return this->fechaFin;
}

int DtOferta::getCantPuestos() const{
    return this->cantPuestos;
}

vector<DtAsignatura> DtOferta::getDtAsignaturas(){
    return this->colDtAsignaturas;
}

vector<DtEstudiante> DtOferta::getDtEstudiantes(){
    return this->colDtEstudiantes;
}

/*
bool DtOferta::operator == (const DtOferta) const{}
    
ostream& operator << (ostream &o,DtOferta &dtO) { 
    return o << "Numero de expediente: " << dtO.getNumExpediente() << "\n" << "Titulo: " << dtO.getTitulo() << "\n" << "Descripcion: " << dtO.getDescripcion() << "\n" << "Cantidad de horas semanales: " << dtO.getCantHorasSemanales() << "\n" << "Salario minimo: " << dtO.getSalarioMin() << "\n" << "Salario maximo: " << dtO.getSalarioMax() << "\n" << "Fecha de inicio: " << dtO.getFechaInicio().getDia() << "-" << dtO.getFechaInicio().getMes() << "-" << dtO.getFechaInicio().getAnio() << "\n" << "Fecha de fin: " << dtO.getFechaFin().getDia() << "-" << dtO.getFechaFin().getMes() << "-" << dtO.getFechaFin().getAnio() << "\n" << "Cantidad de puestos: " << dtO.getCantPuestos();
}
*/

DtOferta::~DtOferta(){				

}
