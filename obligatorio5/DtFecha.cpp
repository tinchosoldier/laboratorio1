#include <iostream>
#include <stdexcept>
#include "DtFecha.h"

using namespace std;

DtFecha::DtFecha() {
    this->dia = 1;
    this->mes = 1;
    this->anio = 1900;

}

DtFecha::DtFecha(const DtFecha &Fecha){
    this->dia = Fecha.dia;
    this->mes = Fecha.mes;
    this->anio = Fecha.anio;
}

DtFecha::DtFecha(const int dia, const int mes, const int anio){
    if((dia > 31) || (dia < 1) || (mes > 12) || (mes < 1) || (anio < 1900)){
        throw invalid_argument("Error: fecha invalida.");
    }else {
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

bool DtFecha::operator==(const DtFecha &fecha) const{
    return((this->dia == fecha.dia) && 
           (this->mes == fecha.mes) && 
           (this->anio == fecha.anio));
}

bool DtFecha::operator>(const DtFecha& fecha) const{}

ostream& operator << (ostream &o,DtFecha &dtf)  {
    return o << dtf.getDia() << "/" 
             << dtf.getMes() << "/" 
             << dtf.getAnio();
}

DtFecha::~DtFecha() {
}