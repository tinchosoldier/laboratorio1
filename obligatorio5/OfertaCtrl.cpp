#include <string>
#include <iostream>
#include "OfertaCtrl.h"
#include "Empresa.h"
#include "Sucursal.h"
#include "Seccion.h"
#include "Asignatura.h"
#include "Oferta.h"
#include "DtAsignatura.h"
#include "DtOferta.h"
#include "DtEmpresa.h"
#include "DtSucursal.h"
#include "DtSeccion.h"

using namespace std;

OfertaCtrl::OfertaCtrl(){}

vector<DtEmpresa> OfertaCtrl::listarEmpresas(){
    // Para hacer
    vector<DtEmpresa> dtEmpresas;
    return dtEmpresas;
}

vector<DtSucursal> OfertaCtrl::listarSucursales(DtEmpresa dte){
    // Para hacer
    vector<DtSucursal> dtSucursales;
    return dtSucursales;
}

vector<DtSeccion> OfertaCtrl::listarSecciones(DtSucursal dts){
    //Para hacer
    vector<DtSeccion> dtsec;
    return dtsec;
}

vector<DtAsignatura> OfertaCtrl::listarAsignaturas(){
    // Para hacer
    vector<DtAsignatura> dtas;
    return dtas;
}

void OfertaCtrl::altaOferta(DtOferta& dto){
    // Para hacer
}

OfertaCtrl::~OfertaCtrl(){}