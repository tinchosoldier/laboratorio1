#ifndef SECCION_H
#define SECCION_H
#include <string>
#include <iostream>
#include <map>
#include "DtSeccion.h"
#include "Oferta.h"
#include "DtOferta.h"

using namespace std;

class Seccion {
    
    private:
        
        string nombre;
        int interno;
        map<int,Oferta*> colOfertas;

    public:
  
        Seccion();
        Seccion(const Seccion&);
        Seccion(string, int);

        string getNombre() const;
        int getInterno() const;
        void setNombre(string);
        void setInterno(int);

        DtSeccion getDtSeccion();
        void agregarOferta(Oferta*);
        void removerOferta(Oferta*);
//      void nuevaOferta(DtOferta,Seccion*);


        virtual ~Seccion();
};

#endif /* SECCION_H */