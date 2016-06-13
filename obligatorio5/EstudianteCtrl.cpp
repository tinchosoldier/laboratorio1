#include <iostream>
#include "EstudianteCtrl.h"
#include "Asignatura.h"
#include "DtAsignatura.h"
#include "DtOferta.h"
//#include "Oferta.h"

using namespace std;

EstudianteCtrl::EstudianteCtrl(){}

vector<DtOferta> EstudianteCtrl::listarOfertasActivas(){}
        
void EstudianteCtrl::confirmarInscripcion(DtEstudiante dte){}

vector<DtEstudiante> EstudianteCtrl::listarEstudiantes(){
    vector<DtEstudiante> colDtEstudiantes;
/*  Sofi  
    for (vector <Estudiante>::iterator it = this->estudiantes.begin(); it != this->estudiantes.end(); it++) {
        colDtEstudiantes.push_back(DtEstudiante(it->getCedula(), it->getNombre(), it->getApellido(), it->getFechaNacimiento(), it->getTelefono(), it->getTotalCreditos()));
    }
 */
    return colDtEstudiantes;
}

DtEstudiante EstudianteCtrl::listarEstudiante(string ci){}

void EstudianteCtrl::agregarEstudiante(string cedula, string nombre, string apellido, DtFecha fechaNacimiento, string telefono) {
    /* Sofi 
    Estudiante * estudiante = new Estudiante(cedula, nombre, apellido, fechaNacimiento, telefono);
    this->estudiantes.push_back(*estudiante); */
}

EstudianteCtrl::~EstudianteCtrl(){}