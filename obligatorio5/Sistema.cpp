#include "Sistema.h"

Sistema* Sistema::sis = NULL;
 
Sistema::Sistema(){}

DtFecha Sistema::getFecha() const{
    return this->fecha;
}

void Sistema::setFecha(DtFecha fecha){
    this->fecha = fecha;
}

void Sistema::modificarFecha(){
    cout << "Cambiar la fecha sistema (dd mm aaaa): " << endl;
    int dia, mes, anio;
    cin >> dia >> mes >> anio;
    try{
        this->setFecha(DtFecha(dia, mes, anio));
        cout << "La fecha ha sido asignada con exito." << endl;
    } catch (exception &err){
        cout << "Fecha invalida." << endl;
    }
}

Sistema* Sistema::getInstance(){
    if(sis == NULL) {
        sis = new Sistema();
    }
    return sis;  
}

Sistema::~Sistema(){}
