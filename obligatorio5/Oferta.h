#ifndef OFERTA_H
#define OFERTA_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "DtFecha.h"
//#include "Asignatura.h"
//#include "DtAsignatura.h"
//#include "IObserver.h"
//#include "DtEstudiante.h"
#include "DtOferta.h"
//#include "Estudiante.h"
#include "Oferta.h"
#include "Seccion.h"

using namespace std;

class Seccion;

class Oferta{
    
    private:
/*	int numExpediente;
	string titulo;
	string descripcion;
	int cantHorasSemanales;
	float salarioMin;
	float salarioMax;
	DtFecha fechaInicio;
	DtFecha fechaFin;
	int cantPuestos;
	Seccion* seccion;
	map<string,Estudiante*> colEstudiantesInscriptos;
	map<int,Asignatura*> colAsignaturasRequeridas;
	map<string,DtFecha> entrevistas;
*/
    public:

        Oferta();
/*	Oferta(const Oferta&);
	Oferta(int, string, string, int, float, float,DtFecha,DtFecha,int,map<int,Asignatura*>,Seccion*);

	int getNumExpediente() const;
	string getTitulo() const;
	string getDescripcion() const;
	int getCantHorasSemanales() const;
	float getSalarioMin() const;
	float getSalarioMax() const;
	DtFecha getFechaInicio() const;
	DtFecha getFechaFin() const;
	int getCantPuestos() const;
	void setNumExpediente(int);
	void setTitulo(string);
	void setDescripcion(string);
	void setCantHorasSemanales(int);
	void setSalarioMin(float);
	void setSalarioMax(float);
	void setFechaInicio(DtFecha);
	void setFechaFin(DtFecha);
	void setCantPuestos(int);

        DtOferta getDtOferta();
        void agregarEstudiante(Estudiante*);
        void agregarAsignatura(Asignatura*);
        bool noTieneEstudiantes();
        bool existeEstudiante(string);
        vector<DtEstudiante>getSetDtEstudiante();
        vector<DtAsignatura>getSetDtAsignatura();
        Seccion* getSeccion();
        void agregarEstudianteEntrevista(string,DtFecha);
*/
	virtual ~Oferta();
};

#endif /* OFERTA_H */