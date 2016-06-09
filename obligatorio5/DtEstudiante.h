#ifndef DTESTUDIANTE_H
#define DTESTUDIANTE_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "DtFecha.h"

using namespace std;

class DtEstudiante{

    private:

	string cedula;
	string nombre;
	string apellido;
	DtFecha fechaNacimiento;
	string telefono;
	int totalCreditos;

    public:
    
	DtEstudiante();
	DtEstudiante(const DtEstudiante&);
	DtEstudiante(string,string,string,DtFecha&,string,int);

	string getCedula() const;
	string getNombre() const;
	string getApellido() const;
	DtFecha getFechaNacimiento() const;
	string getTelefono() const;
	int getTotalCreditos() const;

        friend ostream& operator << (ostream&, DtEstudiante&);

	virtual ~DtEstudiante();
        
};

#endif /* DTESTUDIANTE_H */
