#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <cstdlib>
#include <stdio.h>

#include "DtFecha.h"
#include "DtOferta.h"

#include "DtEmpresa.h"
#include "DtSucursal.h"

#include "Empresa.h"
#include "Seccion.h"
#include "Sucursal.h"

#include "Sistema.h"
#include "FactoryCtrl.h"

using namespace std;

static FactoryCtrl* ctrl;
static IOfertaCtrl* ofertaCtrl;
static IEstudianteCtrl* estudianteCtrl;

void imprimirEstudiantes();
void menu(DtFecha);

int main(int argc, char** argv) {

    /* Hay que llamar a la fabrica cada vez que se necesite y luego eliminar la instancia */
    // Obtengo las instancias de Ctrl (Factory) 
    ctrl = FactoryCtrl::getFactoryCtrl();
    ofertaCtrl = ctrl->getIOfertaCtrl();
    estudianteCtrl = ctrl->getIEstudianteCtrl();

    // Obtengo la instancia del sistema(Singleton)
    Sistema* sis = Sistema::getInstance();
    
    // Asigna la fecha del sistema
    sis->modificarFecha();
    
    int opcion;
    do {
        system ("clear");
        
        // Imprime el menu
        menu(sis->getFecha());
        
        cin>>opcion;
        
        switch (opcion) {
            case 1:
                system ("clear");
                cout<<"Agregando datos por defecto...\n\n";
                estudianteCtrl->agregarEstudiante("4516231", "Esteban", "Perez", DtFecha(10, 2, 1990), "99111222");
                estudianteCtrl->agregarEstudiante("5111235", "Felipe", "Garcia", DtFecha(20, 8, 1992), "24035612");
                estudianteCtrl->agregarEstudiante("3594561", "Juan", "Wolf", DtFecha(30, 01, 1980), "91222223");
                cout<<"Estudiante agregado con exito. Presione enter para continuar...";
                getchar();
                getchar();
                break;
            case 2:
                system ("clear");
                imprimirEstudiantes();
                break;
            case 0:
                break;
        }
    } while (opcion != 0);
    
    return 0;
}

/* Sofi */
void imprimirEstudiantes() {
    vector <DtEstudiante> Dts = estudianteCtrl->listarEstudiantes();
    int i = 1;
    for (vector <DtEstudiante>::iterator it = Dts.begin(); it != Dts.end(); it++) {
        cout<<i<<"- Nombre: "<<it->getNombre()<<" "<<it->getApellido()<<" - Cedula: "<<it->getCedula()<<"\n";
        i++;
    }
    int opcion;
    cout<<"\nIngrese el numero de estudiante del que desea ver lo datos: ";
    cin>>opcion;
    opcion --;
    system ("clear");
    cout<<Dts[opcion];
    cout<<"\nPresione enter para continuar...";
    getchar();
    getchar();
}

void menu(DtFecha fechaSistema){
    cout << "Fecha del sistema: " << fechaSistema << endl << endl;
    cout << "Menu:" << endl;
    cout << "1- Agregar estudiante" << endl; 
    cout << "2- Listar datos estudiante";     
    cout << "3- Alta oferta laboral" << endl;
    cout << "a) Configurar sistema" << endl;    
    cout << "0- Salir" << endl << endl;
    cout << "> ";
}
