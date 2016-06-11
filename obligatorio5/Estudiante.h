#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "DtFecha.h"
#include "DtEstudiante.h"
#include "Salva.h"

using namespace std;

class Estudiante {

    private:
        
	string cedula;
	string nombre;
	string apellido;
	DtFecha fechaNacimiento;
	string telefono;
	int totalCreditos;
        map<int,Salva*> colSalvadas;

    public:

	Estudiante();
	Estudiante(const Estudiante&);
	Estudiante(string, string, string, DtFecha, string);

	string getCedula() const;
	string getNombre() const;
	string getApellido() const;
	DtFecha getFechaNacimiento() const;
	int getTotalCreditos() const;
	string getTelefono() const;
	void setNombre(string);
	void setApellido(string);
	void setFechaNacimiento(DtFecha);
	void setTelefono(string);
        map<int,Salva*> getSalvadas();
        void setSalvada(Salva*);

	DtEstudiante getDtEstudiante();

	virtual ~Estudiante();
};

#endif /* ESTUDIANTE_H */