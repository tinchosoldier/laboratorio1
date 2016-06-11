#ifndef ESTUDIANTECTRL_H
#define ESTUDIANTECTRL_H
#include <string>
#include <iostream>
#include <vector>
#include "DtEstudiante.h"
#include "DtOferta.h"
#include "IEstudianteCtrl.h"

using namespace std;

class EstudianteCtrl: public IEstudianteCtrl {
    
    public:
    
        EstudianteCtrl();
        
        vector<DtOferta> listarOfertasActivas();
        void confirmarInscripcion(DtEstudiante);
        vector<DtEstudiante> listarEstudiantes();
        DtEstudiante listarEstudiante(string);
        void agregarEstudiante(string, string, string, DtFecha, string);
        
	virtual ~EstudianteCtrl();

};

#endif /* ESTUDIANTECTRL_H */