#ifndef DTEMPRESA_H
#define DTEMPRESA_H
#include <string>
#include <iostream>
#include <vector>
#include "DtSucursal.h" 

using namespace std;

class DtEmpresa{
    
    private:
        string rut;
        string nombre;
        vector<DtSucursal> sucursales;
    
    public:

        DtEmpresa();
        DtEmpresa(const DtEmpresa&);
        DtEmpresa(string,string,vector<DtSucursal>);

        string getRut() const;
        string getNombre() const;
        friend ostream& operator << (ostream&, DtEmpresa&);

        virtual ~DtEmpresa();
};

#endif /* DTEMPRESA_H */