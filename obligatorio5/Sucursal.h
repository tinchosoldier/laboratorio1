#ifndef SUCURSAL_H
#define SUCURSAL_H
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "Seccion.h"
#include "DtSeccion.h"
#include "DtSucursal.h"

using namespace std;

class Sucursal {
    
    private:
        
        string nombre;
        string telefono;
        string direccion;
        map<string,Seccion*> colSeccion;

    public:
        
        Sucursal();
        Sucursal(const Sucursal&);
        Sucursal(string, string,string,vector<DtSeccion>);

        string getNombre() const;
        string getTelefono() const;
        string getDireccion() const;
        void setNombre(string);
        void setTelefono(string);
        void setDireccion(string);

        DtSucursal getDtSucursal();
        vector<DtSeccion> getSetDtSeccion();
        Seccion* getSeccion(string);

        virtual ~Sucursal();
};

#endif /* SUCURSAL_H */