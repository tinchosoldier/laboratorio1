#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include <map>
#include "DtFecha.h"
#include "Oferta.h"
#include "Empresa.h"
#include "Estudiante.h"
#include "Carrera.h"
#include "Asignatura.h"

class Sistema { /* Patron Singleton */
    
    private:
        
        static Sistema* sis;
        
        DtFecha fecha;
        map<int,Oferta*> colOfertas;
        map<string,Empresa*> colEmpresas;
        map<string,Estudiante*> colEstudiantes;
        map<int,Carrera*> colCarreras;
        map<int,Asignatura*> colAsignaturas;
        
        Sistema();
        void cargarDatos();
        void setFecha(DtFecha);
        
    public:
        
        /* Operaciones del sistema */
        DtFecha getFecha() const;
        void modificarFecha();
        
        /* Operaciones de Oferta */
        vector<DtOferta> getDtOfertas();
        Oferta* getOferta(int numExp);
        void agregarOferta(Oferta*); 
        void destruirOferta(int);
        
        /* Operaciones de Empresa */
        vector<DtEmpresa> getDtEmpresas();
        Empresa* getEmpresa(string);
        void agregarEmpresa(Empresa*);
        
        /* Operaciones de Estudiante */
        vector<DtEstudiante> getDtEstudiantes();
        Estudiante* getEstudiante(string);
        void agregarEstudiante(Estudiante*);
        
        /* Operaciones de Asignatura */
        vector<DtAsignatura> getDtAsignaturas();
	Asignatura* getAsignatura(int);
	void agregarAsignatura(Asignatura*);
        
        /* Operaciones de Carrera */
        vector<DtCarrera> getDtCarreras();
	Carrera* getCarrera(int);
	void agregarCarrera(Carrera*);
    
        /* Instancia Sistema */
        static Sistema* getInstance();
        ~Sistema();
        
};

#endif /* SISTEMA_H */