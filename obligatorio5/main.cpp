#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

#include "DtFecha.h"
#include "DtOferta.h"
#include "DtSeccion.h"
#include "DtFecha.h"
#include "DtEmpresa.h"
#include "DtSucursal.h"
#include "DtSucursal.h"

#include "Empresa.h"
#include "Seccion.h"
#include "Sucursal.h"

using namespace std;

void cargarDatos();

int main(int argc, char** argv) {

    return 0;
}

void cargarDatos(){
    
    // Creo los DtSeccion
    DtSeccion dtsec1 = DtSeccion("Contabilidad",110);
    DtSeccion dtsec2 = DtSeccion("Recursos Humanos",111);
    DtSeccion dtsec3 = DtSeccion("Tesoreria",112);
    DtSeccion dtsec4 = DtSeccion("Ventas",113);
    DtSeccion dtsec5 = DtSeccion("Marketing",114);
    DtSeccion dtsec6 = DtSeccion("Inspeccion administrativa",115);
    DtSeccion dtsec7 = DtSeccion("Departamento Tecnico",116);
    
    // Creo el vector y agrego las secciones
    vector<DtSeccion> colSeccion1;
    colSeccion1.push_back(dtsec1);
    colSeccion1.push_back(dtsec2);
    // Creo el vector y agrego las secciones
    vector<DtSeccion> colSeccion2;
    colSeccion2.push_back(dtsec3);
    colSeccion2.push_back(dtsec4);
    colSeccion2.push_back(dtsec5);
    // Creo el vector y agrego las secciones
    vector<DtSeccion> colSeccion3;
    colSeccion3.push_back(dtsec6);
    colSeccion3.push_back(dtsec7);
    
    // Creo y cargo la sucursal
    DtSucursal dts1 = DtSucursal("Sucursal central","24089595","Centro", colSeccion1);
    vector<DtSucursal> colSucursal1;
    colSucursal1.push_back(dts1);
    // Creo y cargo la sucursal
    DtSucursal dts2 = DtSucursal("Sucursal 1","24089596","Pocitos", colSeccion2);
    vector<DtSucursal> colSucursal2;
    colSucursal2.push_back(dts2);
    // Creo y cargo la sucursal
    DtSucursal dts3 = DtSucursal("Sucursal 2","24089597","Goes", colSeccion3);
    vector<DtSucursal> colSucursal3;
    colSucursal3.push_back(dts3);
    
    Empresa* e1 = new Empresa("1111222287","Lamisil",colSucursal1);
    Empresa* e2 = new Empresa("2222855556","Cavanassi",colSucursal2);
    Empresa* e3 = new Empresa("1458899855","Toldos Honos",colSucursal3);
    
}
