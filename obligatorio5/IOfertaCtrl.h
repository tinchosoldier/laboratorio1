#ifndef IOFERTACTRL_H
#define IOFERTACTRL_H
#include <string>
#include <iostream>
#include <vector>
#include "DtEmpresa.h"
#include "DtOferta.h"
#include "DtSucursal.h"
#include "DtSeccion.h"
#include "DtFecha.h"
//#include "DtCarrera.h"
//#include "DtAsignatura.h"

using namespace std;

class IControladorOferta {
    
    public:

        virtual vector<DtEmpresa> listarEmpresas() = 0;
        virtual vector<DtSucursal> listarSucursales(DtEmpresa) = 0;
	virtual vector<DtSeccion> listarSecciones(DtSucursal) = 0;
//	virtual vector<DtAsignatura> listarAsignaturas(DtSeccion) = 0;
//      virtual DtSeccion seleccionarSeccion(DtAsignatura) = 0;
        virtual void altaOferta(DtOferta) = 0;
		
	
	/*virtual vector< DtEmpresa> listarEmpresas() = 0;
	virtual vector< DtSucursal> listarSucursales(string) = 0;
	virtual vector< DtSeccion> listarSecciones(string, string) = 0;
	virtual vector<DtAsignatura> listarAsignaturas() = 0;
	virtual vector< DtOferta> listarOfertas() = 0;
	virtual vector< DtCarrera> listarCarreras() = 0;
	virtual vector< DtOferta> listarOfertasVigentes(DtFecha) = 0;
	virtual void crearOferta(const DtOferta&, string, string, string) = 0;
	virtual void bajaLlamado(int) = 0;
	virtual DtAsignatura seleccionarAsignatura(int) = 0;
	virtual ~IControladorOferta(){}; // virtual y vacío, LLEVA EL = 0?*/
};

#endif // IOFERTACTRL_H
