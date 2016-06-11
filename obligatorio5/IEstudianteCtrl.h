#ifndef IESTUDIANTECTRL_H
#define IESTUDIANTECTRL_H
#include <string>
#include <iostream>
#include <vector>
#include "DtEstudiante.h"
#include "DtOferta.h"
#include "DtFecha.h"

using namespace std;

class IEstudianteCtrl {
    
    public:

        virtual vector<DtOferta> listarOfertasActivas() = 0;
        virtual void confirmarInscripcion(DtEstudiante) = 0;
        virtual vector<DtEstudiante> listarEstudiantes() = 0;
        virtual DtEstudiante listarEstudiante(string) = 0;
        virtual void agregarEstudiante(string, string, string, DtFecha, string) = 0;
        
};

#endif /* IESTUDIANTECTRL_H */