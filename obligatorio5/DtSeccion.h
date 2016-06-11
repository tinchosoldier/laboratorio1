#ifndef DTSECCION_H
#define DTSECCION_H
#include <string>
#include <iostream>
#include "DtOferta.h"

using namespace std;

class DtSeccion{

    private:
    
        string nombre;
	int interno;
	vector<DtOferta> colOfertas;
        
    public:
        
        DtSeccion();
	DtSeccion(const DtSeccion&);
	DtSeccion(string, int, vector<DtOferta>);
	DtSeccion(string, int);

	string getNombre() const;
	int getInterno() const;
	vector<DtOferta> getOfertas() const;
        bool operator == (const DtSeccion) const;
        friend ostream& operator << (ostream&, DtSeccion&);

	virtual ~DtSeccion();
};

#endif /* DTSECCION_H */