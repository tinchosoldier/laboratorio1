#include <string>
#include <iostream>
#include "Salva.h"

using namespace std;

Salva::Salva(int nota, DtFecha& fechaSalvada, Asignatura* salvada){
    this->nota = nota;
    this->fechaSalvada = fechaSalvada;
    this->salvada = salvada;
}

int Salva::getNota() const{
    return this->nota;
}

DtFecha Salva::getFechaSalvada() const{
    return this->fechaSalvada;
}

Asignatura* Salva::getSalvada(){
    return this->salvada;
}

Salva::~Salva(){
    delete salvada;
}