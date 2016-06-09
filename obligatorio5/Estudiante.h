#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "DtFecha.h"
#include "DtEstudiante.h"

using namespace std;

class Estudiante {

    private:
        
	string cedula;
	string nombre;
	string apellido;
	DtFecha fechaNacimiento;
	string telefono;
	int totalCreditos;

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
	void setFechaNacimiento(int, int, int, int, int);
	void setTelefono(string);

	DtEstudiante getDtEstudiante();

	virtual ~Estudiante();
};

#endif /* ESTUDIANTE_H */