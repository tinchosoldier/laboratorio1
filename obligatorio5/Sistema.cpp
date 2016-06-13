#include "Sistema.h"
 
Sistema* Sistema::sis = NULL;
 
Sistema::Sistema(){}

DtFecha Sistema::getFecha() const{
    return this->fecha;
}

void Sistema::setFecha(DtFecha fecha){
    this->fecha = fecha;
}

Sistema* Sistema::getInstance(){
    if(sis == NULL) {
        sis = new Sistema();
    }
    return sis;  
}

Sistema::~Sistema(){}
