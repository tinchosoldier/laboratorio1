#include <string>
#include <iostream>
#include "FactoryCtrl.h"
#include "OfertaCtrl.h"
#include "EstudianteCtrl.h"

using namespace std;

FactoryCtrl* FactoryCtrl::ctrl = NULL;

FactoryCtrl::FactoryCtrl(){}

FactoryCtrl* FactoryCtrl::getFactoryCtrl(){
    if (ctrl == NULL){
        ctrl = new FactoryCtrl();
    }
    return ctrl;
}

IOfertaCtrl* FactoryCtrl::getIOfertaCtrl(){
    IOfertaCtrl* ofertaCtrl = new OfertaCtrl();
    return ofertaCtrl;
}

IEstudianteCtrl* FactoryCtrl::getIEstudianteCtrl(){
    EstudianteCtrl* estudianteCtrl = new EstudianteCtrl();
    return estudianteCtrl;
}

FactoryCtrl::~FactoryCtrl(){}