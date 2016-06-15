#ifndef FACTORYCTRL_H
#define FACTORYCTRL_H
#include <string>
#include <iostream>
#include <set>
#include "IOfertaCtrl.h"
#include "IEstudianteCtrl.h"

using namespace std;

class FactoryCtrl { /* Patron Factory */

    private:
        
	static FactoryCtrl* ctrl;
        // Quitar songleton en la factory
	FactoryCtrl();

    public:
	
        static FactoryCtrl* getFactoryCtrl();
	IOfertaCtrl* getIOfertaCtrl();
	IEstudianteCtrl* getIEstudianteCtrl();
        
        virtual ~FactoryCtrl();
        
};

#endif /* FACTORYCTRL_H */