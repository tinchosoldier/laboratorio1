#include <string>
#include <iostream>
#include "Seccion.h"
#include "DtSeccion.h"
#include "Oferta.h"
#include "DtOferta.h"
//#include "ManejadorOfertas.h"
//#include "ManejadorAsignaturas.h"

using namespace std;

Seccion::Seccion(){}

Seccion::Seccion(const Seccion& seccion){
    this->nombre = seccion.nombre;
    this->interno = seccion.interno;
//    this->colOfertas = seccion.colOfertas;
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
/*    
    map<int,Oferta*>::iterator it;
    vector<DtOferta> vo;
    for (it = this->colOfertas.begin(); it != this->colOfertas.end(); ++it) {
            DtOferta dtO = it->second->getDtOferta();
            vo.push_back(dtO);
    }
 */ 
    //DtSeccion dtS = DtSeccion(this->nombre,this->interno,vo);
    DtSeccion dtS = DtSeccion(this->nombre,this->interno);
    return dtS;
}

/*
void Seccion::agregarOferta(Oferta* oferta){
    colOfertas[oferta->getNumExpediente()] = oferta;
}

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

void Seccion::removerOferta(Oferta* o){
    this->colOfertas.erase(o->getNumExpediente());
}
*/
Seccion::~Seccion(){
    /*map<int,Oferta*>::iterator it;
    for (it = colOfertas.begin(); it != colOfertas.end(); ++it) {
        delete it->second;
    }*/
}
