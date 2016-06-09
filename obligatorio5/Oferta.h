#ifndef OFERTA_H
#define OFERTA_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "DtFecha.h"
#include "DtOferta.h"
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
*/
    public:

        Oferta();

	virtual ~Oferta();
};

#endif /* OFERTA_H */