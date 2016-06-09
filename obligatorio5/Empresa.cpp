#include <string>
#include <iostream>
#include "Empresa.h"

using namespace std;

Empresa::Empresa(){}

Empresa::Empresa(const Empresa& empresa){
    this->rut=empresa.rut;
    this->nombre=empresa.nombre;
    this->sucursales=empresa.sucursales;
}

Empresa::Empresa(string rut,string nombre,vector<DtSucursal> sucursales){
    this->rut=rut;
    this->nombre=nombre;
    vector<DtSucursal>::iterator i;
    for(i=sucursales.begin();i!=sucursales.end();++i){
        DtSucursal s = *i;
        this->sucursales[s.getNombre()]= new Sucursal(s.getNombre(),s.getTelefono(),s.getDireccion(),s.getSetDtSecciones()); 
    };
}

string Empresa::getRut() const{
    return this->rut;
}
    
string Empresa::getNombre() const{
    return this->nombre;
}
    
map<string,Sucursal*> Empresa::getSucursales() const{
    return this->sucursales;
}

void Empresa::setRut(string rut){
    this->rut=rut;
}
    
void Empresa::setNombre(string nombre){
    this->nombre=nombre;
}

void  Empresa::setSucursales(map<string,Sucursal*> sucursales){
    map<string,Sucursal*>::iterator i;
    for(i=sucursales.begin();i!=sucursales.end();++i){
        string clave=i->first;
        Sucursal* s=i->second;
        this->sucursales[clave]=s;
    }
}

DtEmpresa Empresa::getDtEmpresa(){
    vector<DtSucursal> dtS = this->getSetDtSucursal();
    return DtEmpresa(this->rut,this->nombre,dtS);
}

vector<DtSucursal> Empresa::getSetDtSucursal(){
    vector<DtSucursal> dtS;
    map<string,Sucursal*>::iterator i;
    for(i=sucursales.begin();i!=sucursales.end();++i) {
        DtSucursal dt = i->second->getDtSucursal();
        dtS.push_back(dt);
    };
    return dtS;
}

Sucursal* Empresa::getSucursal(string nombre){
    return this->sucursales[nombre];
}

Empresa::~Empresa(){
    map<string,Sucursal*>::iterator i;
    for(i=sucursales.begin();i!=sucursales.end();++i){
        delete i->second;
    };
}