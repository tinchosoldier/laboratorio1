#include <string>
#include <iostream>
#include "DtSeccion.h"

using namespace std;

DtSeccion::DtSeccion(){}

DtSeccion::DtSeccion(const DtSeccion& dts){
    this->nombre = dts.nombre;
    this->interno = dts.interno;
    this->colOfertas = dts.colOfertas;
}

DtSeccion::DtSeccion(string nombre, int interno, vector<DtOferta> dtOfertas){
    this->nombre = nombre;
    this->interno = interno;
    this->colOfertas = dtOfertas;
}


string DtSeccion::getNombre() const{
    return this->nombre;
}

int DtSeccion::getInterno() const{
    return this->interno;
}


vector<DtOferta> DtSeccion::getOfertas() const{
    return this->colOfertas;
}


bool DtSeccion::operator == (const DtSeccion) const{}

ostream& operator << (ostream &o,DtSeccion &dtse) { 
    return o << "Nombre: " << dtse.getNombre() 
             << "\n" << "Interno: " << dtse.getInterno();  
}

DtSeccion::~DtSeccion(){}