#include <string>
#include <iostream>
#include "Seccion.h"
#include "DtSeccion.h"

using namespace std;

Seccion::Seccion(){}

Seccion::Seccion(const Seccion& seccion){
    this->nombre = seccion.nombre;
    this->interno = seccion.interno;
    this->colOfertas = seccion.colOfertas;
}

Seccion::Seccion(string nombre,int interno){
    this->nombre = nombre;
    this->interno = interno;
    
}

string Seccion::getNombre() const{
    return this->nombre;
}

int Seccion::getInterno() const{
    return this->interno;
}

void Seccion::setNombre(string nombre){
    this->nombre = nombre;
}

void Seccion::setInterno(int interno){
    this->interno = interno;
}

DtSeccion Seccion::getDtSeccion(){  
    map<int,Oferta*>::iterator it;
    vector<DtOferta> dtOfertas;
    for (it = this->colOfertas.begin(); it != this->colOfertas.end(); ++it) {
            DtOferta dto = it->second->getDtOferta();
            dtOfertas.push_back(dto);
    }
  
    DtSeccion dts = DtSeccion(this->nombre,this->interno,dtOfertas);
    return dts;
}

void Seccion::agregarOferta(Oferta* oferta){
    this->colOfertas[oferta->getNumExpediente()] = oferta;
}

void Seccion::removerOferta(Oferta* oferta){
    this->colOfertas.erase(oferta->getNumExpediente());
}
/*
void Seccion::nuevaOferta(DtOferta dtO, Seccion* seccion){
    vector<DtAsignatura>::iterator it;
    vector<DtAsignatura> setDtA = dtO.getSetDtAsignatura();
    ManejadorAsignaturas* mA = ManejadorAsignaturas::getManejadorAsignaturas();
    map<int,Asignatura*> asignaturasRequeridas;
    for (it = setDtA.begin(); it != setDtA.end(); ++it) {
        asignaturasRequeridas[it->getCodigo()] = mA->getAsignatura(it->getCodigo());
    }
    Oferta* of = new Oferta(dtO.getNumExpediente(),dtO.getTitulo(),dtO.getDescripcion(),dtO.getCantHorasSemanales(),dtO.getSalarioMin(),dtO.getSalarioMax(),dtO.getFechaInicio(),dtO.getFechaFin(),dtO.getCantPuestos(),asignaturasRequeridas,seccion);
    this->colOfertas[of->getNumExpediente()] = of;
    ManejadorOfertas* mO = ManejadorOfertas::getManejadorOfertas();
    mO->agregarOferta(of);
}

*/
Seccion::~Seccion(){
    map<int,Oferta*>::iterator it;
    for (it = colOfertas.begin(); it != colOfertas.end(); ++it) {
        delete it->second;
    }
}
