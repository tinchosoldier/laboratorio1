#include <string>
#include <iostream>
#include "Oferta.h"

using namespace std;

Oferta::Oferta(){}

Oferta::Oferta(const Oferta& o){
    this->numExpediente = o.numExpediente;
    this->titulo = o.titulo;
    this->descripcion = o.descripcion;
    this->cantHorasSemanales = o.cantHorasSemanales;
    this->salarioMin = o.salarioMin;
    this->salarioMax = o.salarioMax;
    this->fechaInicio = DtFecha(o.fechaInicio);
    this->fechaFin = DtFecha(o.fechaFin);
    this->cantPuestos = o.cantPuestos;
    this->seccion = o.seccion;
}

Oferta::Oferta(int numExpediente, string titulo, string descripcion, int cantHorasSemanales, float salarioMin, float salarioMax,DtFecha fechaInicio,DtFecha fechaFin,int cantPuestos, map<int,Asignatura*> colAsignaturas,Seccion* seccion){
    this->numExpediente = numExpediente;
    this->titulo = titulo;
    this->descripcion = descripcion;
    this->cantHorasSemanales = cantHorasSemanales;
    this->salarioMin = salarioMin;
    this->salarioMax = salarioMax;
    this->fechaInicio = DtFecha(fechaInicio);
    this->fechaFin = DtFecha(fechaFin);
    this->cantPuestos = cantPuestos;
    this->colAsignaturas = colAsignaturas;
    this->seccion = seccion;
}

int Oferta::getNumExpediente() const{
    return this->numExpediente;
}

string Oferta::getTitulo() const{
    return this->titulo;
}

string Oferta::getDescripcion() const{
    return this->descripcion;
}

int Oferta::getCantHorasSemanales() const{
    return this->cantHorasSemanales;
}

float Oferta::getSalarioMin() const{
    return this->salarioMin;
}

float Oferta::getSalarioMax() const{
    return this->salarioMax;
}

DtFecha Oferta::getFechaInicio() const{
    return this->fechaInicio;
}

DtFecha Oferta::getFechaFin() const{
    return this->fechaFin;
}

int Oferta::getCantPuestos() const{
    return this->cantPuestos;
}

void Oferta::setNumExpediente(int numExpediente){
    this->numExpediente=numExpediente;
}

void Oferta::setTitulo(string titulo){
    this->titulo=titulo;
}

void Oferta::setDescripcion(string descripcion){
    this->descripcion=descripcion;
}

void Oferta::setCantHorasSemanales(int cantHorasSemanales){
    this->cantHorasSemanales=cantHorasSemanales;
}

void Oferta::setSalarioMin(float salarioMin){
    this->salarioMin=salarioMin;
}

void Oferta::setSalarioMax(float salarioMax){
    this->salarioMax=salarioMax;
}

void Oferta::setFechaInicio(DtFecha fechaInicio){
    this->fechaInicio=fechaInicio;
}

void Oferta::setFechaFin(DtFecha fechaFin){
    this->fechaFin=fechaFin;
}

void Oferta::setCantPuestos(int cantPuestos){
    this->cantPuestos=cantPuestos;
}

DtOferta Oferta::getDtOferta(){
    DtOferta dto = DtOferta(this->numExpediente,this->titulo,this->descripcion,this->cantHorasSemanales,this->salarioMin,this->salarioMax,this->fechaInicio,this->fechaFin,this->cantPuestos, this->getDtAsignaturas());
    return dto;
}

Seccion* Oferta::getSeccion(){
    return seccion;
}

vector<DtEstudiante> Oferta::getDtEstudiantes(){
    vector<DtEstudiante> colDtEstudiantes;
    map<string,Estudiante*>::iterator it;
    DtEstudiante dte;
    for (it = this->colEstudiantes.begin(); it != this->colEstudiantes.end(); ++it) {
        Estudiante estudiante = *(it->second);
        dte = estudiante.getDtEstudiante();
        colDtEstudiantes.push_back(dte);
    };
    return colDtEstudiantes;
}

void Oferta::agregarEstudiante(Estudiante* estudiante) {
    string cedula = estudiante->getCedula();
     this->colEstudiantes[cedula] = estudiante;
}

vector<DtAsignatura> Oferta::getDtAsignaturas(){
    vector<DtAsignatura> colDtAsignaturas;
    map<int,Asignatura*>::iterator it;
    DtAsignatura dta;
    for (it = this->colAsignaturas.begin(); it != this->colAsignaturas.end(); ++it) {
            Asignatura asignatura = *(it->second);
            dta = asignatura.getDtAsignatura();
            colDtAsignaturas.push_back(dta);
    };
    return colDtAsignaturas;
}

void Oferta::agregarAsignatura(Asignatura* asignatura){
    int codigo = asignatura->getCodigo();
    this->colAsignaturas[codigo] = asignatura;
}

Oferta::~Oferta(){}