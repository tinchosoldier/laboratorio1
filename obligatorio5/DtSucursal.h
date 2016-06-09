#ifndef DTSUCURSAL_H
#define DTSUCURSAL_H
#include <string>
#include <iostream>
#include "DtSeccion.h"

using namespace std;

class DtSucursal{
    
    private:
        string nombre;
	string telefono;
	string direccion;
        vector<DtSeccion> colSecciones;

    public:
    
	DtSucursal();
	DtSucursal(const DtSucursal&);
	DtSucursal(string, string,string,vector<DtSeccion>);
        
        string getNombre() const;
        string getTelefono() const;
        string getDireccion() const;
        vector<DtSeccion> getSetDtSecciones();
        bool operator == (const DtSucursal) const;
        friend ostream& operator << (ostream&, DtSucursal&);

        virtual ~DtSucursal();
        
};

#endif /* DTSUCURSAL_H */