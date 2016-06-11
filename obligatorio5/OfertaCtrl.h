#ifndef OFERTACTRL_H
#define OFERTACTRL_H
#include <string>
#include <iostream>
#include <vector>
#include "DtOferta.h"
#include "DtEmpresa.h"
#include "DtAsignatura.h"
#include "DtSucursal.h"
#include "DtSeccion.h"
#include "DtFecha.h"
#include "IOfertaCtrl.h"

using namespace std;

class OfertaCtrl: public IOfertaCtrl {

    public:

        OfertaCtrl();
        
        vector<DtEmpresa> listarEmpresas();
        vector<DtSucursal> listarSucursales(DtEmpresa);
	vector<DtSeccion> listarSecciones(DtSucursal);
	vector<DtAsignatura> listarAsignaturas();
        void altaOferta(DtOferta&);
        
        virtual ~OfertaCtrl();
};

#endif /* OFERTACTRL_H */