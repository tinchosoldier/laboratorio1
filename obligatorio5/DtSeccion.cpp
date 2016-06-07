#include <string>
#include <iostream>
#include "DtSeccion.h"

using namespace std;

DtSeccion::DtSeccion(){

}

DtSeccion::DtSeccion(const DtSeccion& DtS){
    this->nombre = DtS.nombre;
    this->interno = DtS.interno;
    //this->colOfertas = DtS.colOfertas;
}

//DtSeccion::DtSeccion(string nombre, int interno, vector<DtOferta> dtos){
DtSeccion::DtSeccion(string nombre, int interno){
    this->nombre = nombre;
    this->interno = interno;
//  this->colOfertas = dtos;
}


string DtSeccion::getNombre() const{
    return this->nombre;
}

int DtSeccion::getInterno() const{
    return this->interno;
}

/*
vector<DtOferta> DtSeccion::getOfertas() const{
    return this->colOfertas;
}
*/

bool DtSeccion::operator == (const DtSeccion) const{

}

ostream& operator << (ostream &o,DtSeccion &dtSe) { 
    return o << "Nombre: " << dtSe.getNombre() << "\n" << "Interno: " << dtSe.getInterno();  
}

DtSeccion::~DtSeccion(){

}