#ifndef DTCARRERA_H
#define DTCARRERA_H
#include <string>
#include <iostream>
#include <vector>
#include "DtAsignatura.h"

using namespace std;

class DtCarrera {
    
    private:

	int codigo;
	string nombre;
	vector<DtAsignatura> colAsignaturas;

    public:

	DtCarrera(const DtCarrera&);
	DtCarrera(int,string,vector<DtAsignatura>);

	int getCodigo() const;
	string getNombre() const;
	vector<DtAsignatura> getDtAsignaturas();

        friend ostream& operator << (ostream&, DtCarrera&);

	virtual ~DtCarrera();
};

#endif /* DTCARRERA_H */