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
#include "DtAsignatura.h"

using namespace std;

class IOfertaCtrl {
    
    public:

        virtual vector<DtEmpresa> listarEmpresas() = 0;
        virtual vector<DtSucursal> listarSucursales(DtEmpresa) = 0;
	virtual vector<DtSeccion> listarSecciones(DtSucursal) = 0;
	virtual vector<DtAsignatura> listarAsignaturas() = 0;
        virtual void altaOferta(DtOferta&) = 0;
        
};

#endif // IOFERTACTRL_H