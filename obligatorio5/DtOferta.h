#ifndef DTOFERTA_H
#define DTOFERTA_H
#include <string>
#include <iostream>
#include <vector>
#include "DtFecha.h"
#include "DtAsignatura.h"
#include "DtEstudiante.h"

using namespace std;

class DtOferta {
    
    private:
	int numExpediente;
	string titulo;
	string descripcion;
	int cantHorasSemanales;
	float salarioMin;
	float salarioMax;
	DtFecha fechaInicio;
	DtFecha fechaFin;
	int cantPuestos;
	vector<DtEstudiante> colDtEstudiantes;
	vector<DtAsignatura> colDtAsignaturas;

    public:

	DtOferta();

	DtOferta(const DtOferta&);
	DtOferta(int, string, string, int, float, float,DtFecha&,DtFecha&,int,vector<DtAsignatura>);
 
	int getNumExpediente() const;
	string getTitulo() const;
	string getDescripcion() const;
	int getCantHorasSemanales() const;
	float getSalarioMin() const;
	float getSalarioMax() const;
	DtFecha getFechaInicio() const;
	DtFecha getFechaFin() const;
	int getCantPuestos() const;
	vector<DtAsignatura> getDtAsignaturas();
	vector<DtEstudiante> getDtEstudiantes();
        void setDtEstudiante(DtEstudiante);
        
//      bool operator == (const DtOferta) const;
//      friend ostream& operator << (ostream&, DtOferta&);

	virtual ~DtOferta();
};

#endif /* DTOFERTA_H */