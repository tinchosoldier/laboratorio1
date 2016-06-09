#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "Sucursal.h"
#include "DtSucursal.h"
#include "DtEmpresa.h"

using namespace std;

class Empresa {
    
    private:
    
        string rut;
        string nombre;
        map<string,Sucursal*> sucursales;
    
    public:
        
        Empresa();
        Empresa(const Empresa&);
        Empresa(string,string,vector<DtSucursal>);

        string getRut() const;
        string getNombre() const;
        map<string,Sucursal*> getSucursales() const;
        void setRut(string);
        void setNombre(string);
        void setSucursales(map<string,Sucursal*>);

        DtEmpresa getDtEmpresa();
        vector<DtSucursal> getSetDtSucursal();
        Sucursal* getSucursal(string);
        virtual ~Empresa();
};

#endif /* EMPRESA_H */