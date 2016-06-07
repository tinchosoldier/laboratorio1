#include <string>
#include <iostream>

#include "DtOferta.h"

using namespace std;

DtOferta::DtOferta(){

}
/*
DtOferta::DtOferta(const DtOferta& dt){
    this->numExpediente = dt.numExpediente;
    this->titulo = dt.titulo;
    this->descripcion = dt.descripcion;
    this->cantHorasSemanales = dt.cantHorasSemanales;
    this->salarioMin = dt.salarioMin;
    this->salarioMax = dt.salarioMax;
    this->fechaInicio = DtFecha(dt.fechaInicio);
    this->fechaFin = DtFecha(dt.fechaFin);
    this->cantPuestos = dt.cantPuestos;
    this->colDtAsignatura = dt.colDtAsignatura;
}

DtOferta::DtOferta(int numExpediente, string titulo, string descripcion, int cantHorasSemanales, float salarioMin, float salarioMax, DtFecha& fechaInicio, DtFecha& fechaFin, int cantPuestos, vector<DtAsignatura> setDtA){
    this->numExpediente = numExpediente;
    this->titulo = titulo;
    this->descripcion = descripcion;
    this->cantHorasSemanales = cantHorasSemanales;
    this->salarioMin = salarioMin;
    this->salarioMax = salarioMax;
    this->fechaInicio = fechaInicio;
    this->fechaFin = fechaFin;
    this->cantPuestos = cantPuestos;
    this->colDtAsignatura = setDtA;
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

vector<DtAsignatura> DtOferta::getSetDtAsignatura(){
    return this->colDtAsignatura;
}

bool DtOferta::operator == (const DtOferta) const{

}
    
ostream& operator << (ostream &o,DtOferta &dtO) { 
    return o << "Numero de expediente: " << dtO.getNumExpediente() << "\n" << "Titulo: " << dtO.getTitulo() << "\n" << "Descripcion: " << dtO.getDescripcion() << "\n" << "Cantidad de horas semanales: " << dtO.getCantHorasSemanales() << "\n" << "Salario minimo: " << dtO.getSalarioMin() << "\n" << "Salario maximo: " << dtO.getSalarioMax() << "\n" << "Fecha de inicio: " << dtO.getFechaInicio().getDia() << "-" << dtO.getFechaInicio().getMes() << "-" << dtO.getFechaInicio().getAnio() << "\n" << "Fecha de fin: " << dtO.getFechaFin().getDia() << "-" << dtO.getFechaFin().getMes() << "-" << dtO.getFechaFin().getAnio() << "\n" << "Cantidad de puestos: " << dtO.getCantPuestos();
}
*/
DtOferta::~DtOferta(){				

}
