#include <string>
#include <iostream>
#include "Oferta.h"

using namespace std;

Oferta::Oferta(){

}
/*
Oferta::Oferta(const Oferta& of){
    this->numExpediente = of.numExpediente;
    this->titulo = of.titulo;
    this->descripcion = of.descripcion;
    this->cantHorasSemanales = of.cantHorasSemanales;
    this->salarioMin = of.salarioMin;
    this->salarioMax = of.salarioMax;
    this->fechaInicio = DtFecha(of.fechaInicio);
    this->fechaFin = DtFecha(of.fechaFin);
    this->cantPuestos = of.cantPuestos;
    this->seccion = of.seccion;
}

Oferta::Oferta(int numExpediente, string titulo, string descripcion, int cantHorasSemanales, float salarioMin, float salarioMax,DtFecha fechaInicio,DtFecha fechaFin,int cantPuestos, map<int,Asignatura*> colAsignaturasRequeridas,Seccion* seccion){
    this->numExpediente = numExpediente;
    this->titulo = titulo;
    this->descripcion = descripcion;
    this->cantHorasSemanales = cantHorasSemanales;
    this->salarioMin = salarioMin;
    this->salarioMax = salarioMax;
    this->fechaInicio = DtFecha(fechaInicio);
    this->fechaFin = DtFecha(fechaFin);
    this->cantPuestos = cantPuestos;
    this->colAsignaturasRequeridas = colAsignaturasRequeridas;
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
    DtOferta dtO = DtOferta(this->numExpediente,this->titulo,this->descripcion,this->cantHorasSemanales,this->salarioMin,this->salarioMax,this->fechaInicio,this->fechaFin,this->cantPuestos, this->getSetDtAsignatura());
    return dtO;
}

Seccion* Oferta::getSeccion(){
    return seccion;
}

bool Oferta::noTieneEstudiantes(){
    return this->colEstudiantesInscriptos.empty();
}


bool Oferta::existeEstudiante(string cedula){
    return (this->colEstudiantesInscriptos[cedula]!=NULL);
}

void Oferta::agregarEstudiante(Estudiante* est){
     this->colEstudiantesInscriptos[est->getCedula()] = est;
}

vector<DtEstudiante> Oferta::getSetDtEstudiante(){
	vector<DtEstudiante> colDtERetorno;
	map<string,Estudiante*>::iterator it;
	DtEstudiante dtE;
	for (it = this->colEstudiantesInscriptos.begin(); it != this->colEstudiantesInscriptos.end(); ++it)
	{
		Estudiante pepito = *(it->second);
		//dtE = DtEstudiante(*(it.second)); // Constructor por copia.  * bien ubicado?
		dtE = pepito.getDtEstudiante();
		colDtERetorno.push_back(dtE);
	};
	return colDtERetorno;
}

vector<DtAsignatura> Oferta::getSetDtAsignatura(){
	vector<DtAsignatura> colDtARetorno;
	map<int,Asignatura*>::iterator it;
	DtAsignatura dtA;
	for (it = this->colAsignaturasRequeridas.begin(); it != this->colAsignaturasRequeridas.end(); ++it)
	{
		Asignatura as = *(it->second);
		dtA = as.getDtAsignatura(); // Constructor por copia.  * bien ubicado?
		colDtARetorno.push_back(dtA);
	};
	return colDtARetorno;
}

void Oferta::agregarAsignatura(Asignatura*asignatura){
    int clave=asignatura->getCodigo();
    this->colAsignaturasRequeridas[clave]=asignatura;
}

void Oferta::agregarEstudianteEntrevista(string cedula,DtFecha fecha){
    this->entrevistas[cedula]=fecha;
}
*/

Oferta::~Oferta(){

}