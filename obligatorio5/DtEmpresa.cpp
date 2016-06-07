#include <string>
#include <iostream>
#include "DtEmpresa.h"

using namespace std;

DtEmpresa::DtEmpresa(){

}

DtEmpresa::DtEmpresa(const DtEmpresa& DtE){
    this->rut=DtE.rut;
    this->nombre=DtE.nombre;
    this->sucursales=DtE.sucursales;
}

DtEmpresa::DtEmpresa(string rut,string nombre,vector<DtSucursal> sucursales){
    this->rut=rut;
    this->nombre=nombre;
    vector<DtSucursal>::iterator i;
    for(i=sucursales.begin();i!=sucursales.end();++i){
        DtSucursal s= *i;
        this->sucursales.push_back(DtSucursal(s.getNombre(),s.getTelefono(),s.getDireccion(),s.getSetDtSecciones()));
    }
}

string DtEmpresa::getRut() const{
    return this->rut;
}

string DtEmpresa::getNombre() const{
    return this->nombre;
}

ostream& operator << (ostream &o,DtEmpresa &dtE) { 
    return o << "Rut: " << dtE.getRut() << "\n" << "Nombre: " << dtE.getNombre();  
}

DtEmpresa::~DtEmpresa(){

}