#ifndef CARRERA_H
#define CARRERA_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "Asignatura.h"
#include "DtCarrera.h"

using namespace std;

class Carrera {
    
    private:

	int codigo;
	string nombre;
	map<int,Asignatura*> colAsignaturas;

    public:
        
	Carrera(const Carrera&);
	Carrera(int,string,vector<DtAsignatura>);

	int getCodigo() const;
	string getNombre() const;
	void setCodigo(int);
	void setNombre(string);

        DtCarrera getDtCarrera();
        vector<DtAsignatura> getAsignaturas();

        virtual ~Carrera();

};

#endif /* CARRERA_H */