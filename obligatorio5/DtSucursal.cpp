#include <string>
#include <iostream>
#include <vector>
#include "DtSucursal.h"

using namespace std;

DtSucursal::DtSucursal(){}

DtSucursal::DtSucursal(const DtSucursal& dtSucursal){
    this->nombre = dtSucursal.nombre;
    this->telefono = dtSucursal.telefono;
    this->direccion = dtSucursal.direccion;
    this->colSecciones = dtSucursal.colSecciones;
}

DtSucursal::DtSucursal(string nombre, string telefono,string direccion,vector<DtSeccion> setDtSeccion){
    this->nombre = nombre;
    this->telefono = telefono;
    this->direccion = direccion;
    this->colSecciones = setDtSeccion;
}

string DtSucursal::getNombre() const{
    return this->nombre;
}

string DtSucursal::getTelefono() const{
    return this->telefono;
}

string DtSucursal::getDireccion() const{
    return this->direccion;
}

vector<DtSeccion> DtSucursal::getSetDtSecciones(){
    return this->colSecciones;
}

bool DtSucursal::operator == (const DtSucursal) const{

}

ostream& operator << (ostream &o, DtSucursal &dtsu) { 
    return o << "Nombre: " << dtsu.getNombre() 
             << "\n" << "Telefono: " << dtsu.getTelefono() 
             << "\n" << "Direccion: " << dtsu.getDireccion();  
}

DtSucursal::~DtSucursal(){}