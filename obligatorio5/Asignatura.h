#ifndef ASIGNATURA_H
#define ASIGNATURA_H
#include <string>
#include <iostream>
#include "DtAsignatura.h"

using namespace std;

class Asignatura {

    private:

	int codigo;
	string nombre;
	int creditos;

    public:

	Asignatura();
	Asignatura(const Asignatura &asignatura);
	Asignatura(int,string,int);

	int getCodigo() const;
	string getNombre() const;
	int getCreditos() const;
	void setCodigo(int);
	void setNombre(string);
	void setCreditos(int);

	DtAsignatura getDtAsignatura();

	virtual ~Asignatura();
};

#endif /* ASIGNATURA_H */