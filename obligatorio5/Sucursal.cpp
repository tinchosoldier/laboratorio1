#include <string>
#include <iostream>
#include "Sucursal.h"

using namespace std;

Sucursal::Sucursal(){}

Sucursal::Sucursal(const Sucursal& sucursal){
    this->nombre=sucursal.nombre;
    this->telefono=sucursal.telefono;
    this->direccion=sucursal.direccion;
}

Sucursal::Sucursal(string nombre, string telefono,string direccion,vector<DtSeccion> seccion){
    this->nombre=nombre;
    this->telefono=telefono;
    this->direccion=direccion;
    vector<DtSeccion>::iterator i;
    for(i=seccion.begin();i!=seccion.end();++i) {
        this->colSeccion[i->getNombre()] = new Seccion(i->getNombre(),i->getInterno());
    }
}

string Sucursal::getNombre() const{
    return this->nombre;
}

string Sucursal::getTelefono() const{
    return this->telefono;
}

string Sucursal::getDireccion() const{
    return this->direccion;
}

void Sucursal::setNombre(string nombre){
    this->nombre=nombre;
}

void Sucursal::setTelefono(string telefono){
    this->telefono=telefono;
}

void Sucursal::setDireccion(string direccion){
    this->direccion=direccion;
}

DtSucursal Sucursal::getDtSucursal(){
    vector<DtSeccion> setDtS = this->getSetDtSeccion();
    DtSucursal dtS = DtSucursal(this->nombre,this->telefono,this->direccion,setDtS);
    return dtS;
}

vector<DtSeccion> Sucursal::getSetDtSeccion(){
    vector<DtSeccion> setSecciones;
    map<string,Seccion*>::iterator i;
    for(i = this->colSeccion.begin(); i != this->colSeccion.end(); ++i){
        DtSeccion dtSec = i->second->getDtSeccion();
        setSecciones.push_back(dtSec);
    };
    return setSecciones;
}

Seccion* Sucursal::getSeccion(string nombreSec){
    return colSeccion[nombreSec];
}
        
Sucursal::~Sucursal(){
    map<string,Seccion*>::iterator it;
    for (it = colSeccion.begin(); it != colSeccion.end(); ++it) {
        delete it->second;
    }
}