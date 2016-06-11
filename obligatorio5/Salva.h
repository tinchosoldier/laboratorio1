#ifndef SALVA_H
#define SALVA_H
#include <string>
#include <iostream>
#include "DtFecha.h"
#include "Asignatura.h"

using namespace std;

class Salva{

    private:

	int nota;
	DtFecha fechaSalvada;
	Asignatura* salvada;

    public:
	
        Salva(int, DtFecha&, Asignatura*);

	int getNota() const;
	DtFecha getFechaSalvada() const;
	Asignatura* getSalvada();

	virtual ~Salva();

};

#endif /* SALVA_H */