#include <iostream>
#include <stdexcept>
#include "DtFecha.h"

using namespace std;

DtFecha::DtFecha() {
    this->dia = 1;
    this->mes = 1;
    this->anio = 1900;
    this->hora= 0;
    this->minuto= 0;
}

DtFecha::DtFecha(const DtFecha &Fecha){
    this->dia = Fecha.dia;
    this->mes = Fecha.mes;
    this->anio = Fecha.anio;
    this->hora = Fecha.hora;
    this->minuto = Fecha.minuto;
}

DtFecha::DtFecha(const int dia, const int mes, const int anio, const int horas, const int minutos){
    if((dia > 31) || (dia < 1) || (mes > 12) || (mes < 1) || (anio < 1900) || (horas < 0) || (horas > 59) || (minutos < 0) || (minutos > 59))
        throw invalid_argument("Error: fecha invalida.");
    else {
        this->minuto = minutos;
        this->hora = horas;
        this->dia = dia;
        this->mes = mes;
        this->anio = anio;
    }
}

int DtFecha::getAnio() const{
    return anio;
}

int DtFecha::getDia() const{
    return dia;
}

int DtFecha::getMes() const{
    return mes;
}

int DtFecha::getHoras() const{
    return hora;
}

int DtFecha::getMinutos() const{
    return minuto;
}

bool DtFecha::operator==(const DtFecha &fecha) const{
    return((this->dia == fecha.dia) && 
           (this->mes == fecha.mes) && 
           (this->anio == fecha.anio) && 
           (this->hora == fecha.hora) && 
           (this->minuto == fecha.minuto));
}

bool DtFecha::operator>(const DtFecha& fecha) const{}

ostream& operator << (ostream &o,DtFecha &dtf)  {
    return o << dtf.getDia() << "/" 
             << dtf.getMes() << "/" 
             << dtf.getAnio() << " " 
             << dtf.getHoras() << ":" << dtf.getMinutos();
}

DtFecha::~DtFecha() {
}